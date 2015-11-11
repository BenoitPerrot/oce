// Copyright (c) 1995-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in
// OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <BSplCLib.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <PLib.hxx>
#include <BSplCLib_Helpers.hxx>

void BSplCLib::MovePointAndTangent(const Standard_Real U,
                                   const Standard_Integer ArrayDimension,
                                   Standard_Real& Delta,
                                   Standard_Real& DeltaDerivatives,
                                   const Standard_Real Tolerance,
                                   const Standard_Integer Degree,
                                   const Standard_Boolean Rational,
                                   const Standard_Integer StartingCondition,
                                   const Standard_Integer EndingCondition,
                                   Standard_Real& Poles,
                                   const TColStd_Array1OfReal& Weights,
                                   const TColStd_Array1OfReal& FlatKnots,
                                   Standard_Real& NewPoles,
                                   Standard_Integer& ErrorStatus) {
  Standard_Integer num_poles, num_knots, ii, jj, conditions, start_num_poles,
      end_num_poles, index = 0, start_index, end_index, other_index, type,
                     order;

  Standard_Real new_parameter = 0.0, value, divide, end_value, start_value,
                *poles_array, *new_poles_array, *delta_array,
                *derivatives_array, *weights_array;

  ErrorStatus = 0;
  weights_array = NULL;
  if (Rational) {
    weights_array = (Standard_Real*)&Weights(Weights.Lower());
  }

  poles_array = &Poles;
  new_poles_array = &NewPoles;
  delta_array = &Delta;
  derivatives_array = &DeltaDerivatives;
  order = Degree + 1;
  num_knots = FlatKnots.Length();
  num_poles = num_knots - order;
  conditions = StartingCondition + EndingCondition + 4;
  //
  // check validity of input data
  //
  if (StartingCondition >= -1 && StartingCondition <= Degree &&
      EndingCondition >= -1 && EndingCondition <= Degree &&
      conditions <= num_poles) {
    //
    // check the parameter is within bounds
    //
    start_index = FlatKnots.Lower() + Degree;
    end_index = FlatKnots.Upper() - Degree;
    //
    //  check if there is enough room to move the poles
    //
    conditions = 1;
    if (StartingCondition == -1) {
      conditions = conditions && (FlatKnots(start_index) <= U);
    } else {
      conditions = conditions && (FlatKnots(start_index) + Tolerance < U);
    }
    if (EndingCondition == -1) {
      conditions = conditions && (FlatKnots(end_index) >= U);
    } else {
      conditions = conditions && (FlatKnots(end_index) - Tolerance > U);
    }

    if (conditions) {
      //
      // build 2 auxialiary functions
      //
      TColStd_Array1OfReal schoenberg_points(1, num_poles);
      TColStd_Array1OfReal first_function(1, num_poles);
      TColStd_Array1OfReal second_function(1, num_poles);

      BuildSchoenbergPoints(Degree, FlatKnots, schoenberg_points);
      start_index = StartingCondition + 2;
      end_index = num_poles - EndingCondition - 1;
      LocateParameter(schoenberg_points, U, Standard_False, start_index,
                      end_index, index, new_parameter, 0, 1);

      if (index == start_index) {
        other_index = index + 1;
      } else if (index == end_index) {
        other_index = index - 1;
      } else if (U - FlatKnots(index) < FlatKnots(index + 1) - U) {
        other_index = index - 1;
      } else {
        other_index = index + 1;
      }
      type = 3;

      start_num_poles = StartingCondition + 2;
      end_num_poles = num_poles - EndingCondition - 1;
      if (start_num_poles == 1) {
        start_value = schoenberg_points(num_poles) - schoenberg_points(1);
        start_value = schoenberg_points(1) - start_value;
      } else {
        start_value = schoenberg_points(start_num_poles - 1);
      }
      if (end_num_poles == num_poles) {
        end_value = schoenberg_points(num_poles) - schoenberg_points(1);
        end_value = schoenberg_points(num_poles) + end_value;
      } else {
        end_value = schoenberg_points(end_num_poles + 1);
      }

      for (ii = 1; ii < start_num_poles; ii++) {
        first_function(ii) = 0.e0;
        second_function(ii) = 0.0e0;
      }

      for (ii = end_num_poles + 1; ii <= num_poles; ii++) {
        first_function(ii) = 0.e0;
        second_function(ii) = 0.0e0;
      }
      divide = 1.0e0 / (schoenberg_points(index) - start_value);

      for (ii = start_num_poles; ii <= index; ii++) {
        value = schoenberg_points(ii) - start_value;
        value *= divide;
        first_function(ii) = 1.0e0;

        for (jj = 0; jj < type; jj++) {
          first_function(ii) *= value;
        }
      }
      divide = 1.0e0 / (end_value - schoenberg_points(index));

      for (ii = index; ii <= end_num_poles; ii++) {
        value = end_value - schoenberg_points(ii);
        value *= divide;
        first_function(ii) = 1.0e0;

        for (jj = 0; jj < type; jj++) {
          first_function(ii) *= value;
        }
      }

      divide = 1.0e0 / (schoenberg_points(other_index) - start_value);

      for (ii = start_num_poles; ii <= other_index; ii++) {
        value = schoenberg_points(ii) - start_value;
        value *= divide;
        second_function(ii) = 1.0e0;

        for (jj = 0; jj < type; jj++) {
          second_function(ii) *= value;
        }
      }
      divide = 1.0e0 / (end_value - schoenberg_points(other_index));

      for (ii = other_index; ii <= end_num_poles; ii++) {
        value = end_value - schoenberg_points(ii);
        value *= divide;
        second_function(ii) = 1.0e0;

        for (jj = 0; jj < type; jj++) {
          second_function(ii) *= value;
        }
      }

      //
      //  compute the point and derivatives of both functions
      //
      Standard_Real results[2][2], weights_results[2][2];
      Standard_Integer extrap_mode[2], derivative_request = 1, dimension = 1;
      Standard_Boolean periodic_flag = Standard_False;

      extrap_mode[0] = Degree;
      extrap_mode[1] = Degree;
      if (Rational) {
        //
        // evaluate in homogenised form
        //
        Eval(U, periodic_flag, derivative_request, extrap_mode[0], Degree,
             FlatKnots, dimension, first_function(1), weights_array[0],
             results[0][0], weights_results[0][0]);

        Eval(U, periodic_flag, derivative_request, extrap_mode[0], Degree,
             FlatKnots, dimension, second_function(1), weights_array[0],
             results[1][0], weights_results[1][0]);
        //
        //  compute the rational derivatives values
        //

        for (ii = 0; ii < 2; ii++) {
          PLib::RationalDerivatives(1, 1, results[ii][0],
                                    weights_results[ii][0], results[ii][0]);
        }
      } else {
        Eval(U, Standard_False, 1, extrap_mode[0], Degree, FlatKnots, 1,
             first_function(1), results[0][0]);

        Eval(U, Standard_False, 1, extrap_mode[0], Degree, FlatKnots, 1,
             second_function(1), results[1][0]);
      }
      gp_Mat2d a_matrix;

      for (ii = 0; ii < 2; ii++) {
        for (jj = 0; jj < 2; jj++) {
          a_matrix.SetValue(ii + 1, jj + 1, results[ii][jj]);
        }
      }
      a_matrix.Invert();
      TColStd_Array1OfReal the_a_vector(0, ArrayDimension - 1);
      TColStd_Array1OfReal the_b_vector(0, ArrayDimension - 1);

      for (ii = 0; ii < ArrayDimension; ii++) {
        the_a_vector(ii) = a_matrix.Value(1, 1) * delta_array[ii] +
                           a_matrix.Value(2, 1) * derivatives_array[ii];
        the_b_vector(ii) = a_matrix.Value(1, 2) * delta_array[ii] +
                           a_matrix.Value(2, 2) * derivatives_array[ii];
      }
      index = 0;

      for (ii = 0; ii < num_poles; ii++) {
        for (jj = 0; jj < ArrayDimension; jj++) {
          new_poles_array[index] = poles_array[index];
          new_poles_array[index] += first_function(ii + 1) * the_a_vector(jj);
          new_poles_array[index] += second_function(ii + 1) * the_b_vector(jj);
          index += 1;
        }
      }
    } else {
      ErrorStatus = 1;
    }
  } else {
    ErrorStatus = 2;
  }
}

//

template <typename Array1OfPoints, typename Vector>
static void MovePointAndTangent(const Standard_Real U,
                                const Vector& Delta,
                                const Vector& DeltaDerivatives,
                                const Standard_Real Tolerance,
                                const Standard_Integer Degree,
                                const Standard_Boolean Rational,
                                const Standard_Integer StartingCondition,
                                const Standard_Integer EndingCondition,
                                const Array1OfPoints& Poles,
                                const TColStd_Array1OfReal& Weights,
                                const TColStd_Array1OfReal& FlatKnots,
                                Array1OfPoints& NewPoles,
                                Standard_Integer& ErrorStatus) {
  Standard_Real *delta_array, *delta_derivative_array, *poles_array,
      *new_poles_array;

  Standard_Integer num_poles;
  num_poles = Poles.Length();

  if (NewPoles.Length() != num_poles) {
    Standard_ConstructionError::Raise();
  }
  delta_array = (Standard_Real*)&Delta;
  delta_derivative_array = (Standard_Real*)&DeltaDerivatives;
  poles_array = (Standard_Real*)&Poles(Poles.Lower());

  new_poles_array = (Standard_Real*)&NewPoles(NewPoles.Lower());
  BSplCLib::MovePointAndTangent(
      U, DimensionTrait<Array1OfPoints>::d, delta_array[0], delta_derivative_array[0], Tolerance,
      Degree, Rational, StartingCondition, EndingCondition, poles_array[0],
      Weights, FlatKnots, new_poles_array[0], ErrorStatus);
}

// Instantiating for 2D curves

void BSplCLib::MovePointAndTangent(const Standard_Real U,
                                   const gp_Vec2d& Delta,
                                   const gp_Vec2d& DeltaDerivatives,
                                   const Standard_Real Tolerance,
                                   const Standard_Integer Degree,
                                   const Standard_Boolean Rational,
                                   const Standard_Integer StartingCondition,
                                   const Standard_Integer EndingCondition,
                                   const TColgp_Array1OfPnt2d& Poles,
                                   const TColStd_Array1OfReal& Weights,
                                   const TColStd_Array1OfReal& FlatKnots,
                                   TColgp_Array1OfPnt2d& NewPoles,
                                   Standard_Integer& ErrorStatus) {
  ::MovePointAndTangent(U, Delta, DeltaDerivatives, Tolerance, Degree, Rational,
                        StartingCondition, EndingCondition, Poles, Weights,
                        FlatKnots, NewPoles, ErrorStatus);
}

// Instantiating for 3D curves

void BSplCLib::MovePointAndTangent(const Standard_Real U,
                                   const gp_Vec& Delta,
                                   const gp_Vec& DeltaDerivatives,
                                   const Standard_Real Tolerance,
                                   const Standard_Integer Degree,
                                   const Standard_Boolean Rational,
                                   const Standard_Integer StartingCondition,
                                   const Standard_Integer EndingCondition,
                                   const TColgp_Array1OfPnt& Poles,
                                   const TColStd_Array1OfReal& Weights,
                                   const TColStd_Array1OfReal& FlatKnots,
                                   TColgp_Array1OfPnt& NewPoles,
                                   Standard_Integer& ErrorStatus) {
  ::MovePointAndTangent(U, Delta, DeltaDerivatives, Tolerance, Degree, Rational,
                        StartingCondition, EndingCondition, Poles, Weights,
                        FlatKnots, NewPoles, ErrorStatus);
}
