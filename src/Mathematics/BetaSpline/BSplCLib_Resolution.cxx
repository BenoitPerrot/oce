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

#include <Mathematics/BetaSpline/BSplCLib.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Mathematics/Polynomial/PLib.hxx>
#include <Mathematics/BetaSpline/BSplCLib_Helpers.hxx>

//=======================================================================
// function : Resolution
// purpose  :
//                           d
//  Let C(t) = SUM      Ci Bi(t)  a Bspline curve of degree d
//	      i = 1,n
//  with nodes tj for j = 1,n+d+1
//
//
//         '                    C1 - Ci-1   d-1
//  Then C (t) = SUM     d *  ---------  Bi (t)
//   	          i = 2,n      ti+d - ti
//
//		            d-1
//  for the base of BSpline  Bi  (t) of degree d-1.
//
//  Consequently the upper bound of the norm of the derivative from C is :
//
//
//                        |  Ci - Ci-1  |
//          d *   Max     |  ---------  |
//	        i = 2,n |  ti+d - ti  |
//
//					N(t)
//  In the rational case set    C(t) = -----
//					D(t)
//
//
//  D(t) =  SUM    Di Bi(t)
//	  i=1,n
//
//  N(t) =  SUM   Di * Ci Bi(t)
//          i =1,n
//
//	    N'(t)  -    D'(t) C(t)
//   C'(t) = -----------------------
//	             D(t)
//
//
//   N'(t) - D'(t) C(t) =
//
//                     Di * (Ci - C(t)) - Di-1 * (Ci-1 - C(t))    d-1
//	SUM   d *   ---------------------------------------- * Bi  (t)  =
//        i=2,n                   ti+d   - ti
//
//
//                   Di * (Ci - Cj) - Di-1 * (Ci-1 - Cj)                d-1
// SUM   SUM     d * -----------------------------------  * Betaj(t) * Bi  (t)
// i=2,n j=1,n               ti+d  - ti
//
//
//
//                 Dj Bj(t)
//    Betaj(t) =   --------
//	           D(t)
//
//  Betaj(t) form a partition >= 0 of the entity with support
//  tj, tj+d+1. Consequently if Rj = {j-d, ....,  j+d+d+1}
//  obtain an upper bound of the derivative of C by taking :
//
//
//
//
//
//
//                         Di * (Ci - Cj) - Di-1 * (Ci-1 - Cj)
//   Max   Max       d  *  -----------------------------------
// j=1,n  i dans Rj                   ti+d  - ti
//
//  --------------------------------------------------------
//
//               Min    Di
//              i =1,n
//
//
//=======================================================================

void BSplCLib::Resolution(Standard_Real& Poles,
                          const Standard_Integer ArrayDimension,
                          const Standard_Integer NumPoles,
                          const TColStd_Array1OfReal* Weights,
                          const TColStd_Array1OfReal& FlatKnots,
                          const Standard_Integer Degree,
                          const Standard_Real Tolerance3D,
                          Standard_Real& UTolerance) {
  Standard_Integer ii, num_poles, ii_index, jj_index, ii_inDim;
  Standard_Integer lower, upper, ii_minus, jj, ii_miDim;
  Standard_Integer Deg1 = Degree + 1;
  Standard_Integer Deg2 = (Degree << 1) + 1;
  Standard_Real value, factor, W, min_weights, inverse;
  Standard_Real pa_ii_inDim_0, pa_ii_inDim_1, pa_ii_inDim_2, pa_ii_inDim_3;
  Standard_Real pa_ii_miDim_0, pa_ii_miDim_1, pa_ii_miDim_2, pa_ii_miDim_3;
  Standard_Real wg_ii_index, wg_ii_minus;
  Standard_Real *PA, max_derivative;
  const Standard_Real* FK = &FlatKnots(FlatKnots.Lower());
  PA = &Poles;
  max_derivative = 0.0e0;
  num_poles = FlatKnots.Length() - Deg1;
  switch (ArrayDimension) {
    case 2: {
      if (Weights != nullptr) {
        const Standard_Real* WG = &(*Weights)(Weights->Lower());
        min_weights = WG[0];

        for (ii = 1; ii < NumPoles; ii++) {
          W = WG[ii];
          if (W < min_weights)
            min_weights = W;
        }

        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_inDim = ii_index << 1;
          ii_minus = (ii - 1) % NumPoles;
          ii_miDim = ii_minus << 1;
          pa_ii_inDim_0 = PA[ii_inDim];
          ii_inDim++;
          pa_ii_inDim_1 = PA[ii_inDim];
          pa_ii_miDim_0 = PA[ii_miDim];
          ii_miDim++;
          pa_ii_miDim_1 = PA[ii_miDim];
          wg_ii_index = WG[ii_index];
          wg_ii_minus = WG[ii_minus];
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          lower = ii - Deg1;
          if (lower < 0)
            lower = 0;
          upper = Deg2 + ii;
          if (upper > num_poles)
            upper = num_poles;

          for (jj = lower; jj < upper; jj++) {
            jj_index = jj % NumPoles;
            jj_index = jj_index << 1;
            value = 0.0e0;
            factor = (((PA[jj_index] - pa_ii_inDim_0) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_0) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            jj_index++;
            factor = (((PA[jj_index] - pa_ii_inDim_1) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_1) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            value *= inverse;
            if (max_derivative < value)
              max_derivative = value;
          }
        }
        max_derivative /= min_weights;
      } else {
        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_index = ii_index << 1;
          ii_minus = (ii - 1) % NumPoles;
          ii_minus = ii_minus << 1;
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          value = 0.0e0;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          ii_index++;
          ii_minus++;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          value *= inverse;
          if (max_derivative < value)
            max_derivative = value;
        }
      }
      break;
    }
    case 3: {
      if (Weights != nullptr) {
        const Standard_Real* WG = &(*Weights)(Weights->Lower());
        min_weights = WG[0];

        for (ii = 1; ii < NumPoles; ii++) {
          W = WG[ii];
          if (W < min_weights)
            min_weights = W;
        }

        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_inDim = (ii_index << 1) + ii_index;
          ii_minus = (ii - 1) % NumPoles;
          ii_miDim = (ii_minus << 1) + ii_minus;
          pa_ii_inDim_0 = PA[ii_inDim];
          ii_inDim++;
          pa_ii_inDim_1 = PA[ii_inDim];
          ii_inDim++;
          pa_ii_inDim_2 = PA[ii_inDim];
          pa_ii_miDim_0 = PA[ii_miDim];
          ii_miDim++;
          pa_ii_miDim_1 = PA[ii_miDim];
          ii_miDim++;
          pa_ii_miDim_2 = PA[ii_miDim];
          wg_ii_index = WG[ii_index];
          wg_ii_minus = WG[ii_minus];
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          lower = ii - Deg1;
          if (lower < 0)
            lower = 0;
          upper = Deg2 + ii;
          if (upper > num_poles)
            upper = num_poles;

          for (jj = lower; jj < upper; jj++) {
            jj_index = jj % NumPoles;
            jj_index = (jj_index << 1) + jj_index;
            value = 0.0e0;
            factor = (((PA[jj_index] - pa_ii_inDim_0) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_0) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            jj_index++;
            factor = (((PA[jj_index] - pa_ii_inDim_1) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_1) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            jj_index++;
            factor = (((PA[jj_index] - pa_ii_inDim_2) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_2) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            value *= inverse;
            if (max_derivative < value)
              max_derivative = value;
          }
        }
        max_derivative /= min_weights;
      } else {
        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_index = (ii_index << 1) + ii_index;
          ii_minus = (ii - 1) % NumPoles;
          ii_minus = (ii_minus << 1) + ii_minus;
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          value = 0.0e0;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          ii_index++;
          ii_minus++;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          ii_index++;
          ii_minus++;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          value *= inverse;
          if (max_derivative < value)
            max_derivative = value;
        }
      }
      break;
    }
    case 4: {
      if (Weights != nullptr) {
        const Standard_Real* WG = &(*Weights)(Weights->Lower());
        min_weights = WG[0];

        for (ii = 1; ii < NumPoles; ii++) {
          W = WG[ii];
          if (W < min_weights)
            min_weights = W;
        }

        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_inDim = ii_index << 2;
          ii_minus = (ii - 1) % NumPoles;
          ii_miDim = ii_minus << 2;
          pa_ii_inDim_0 = PA[ii_inDim];
          ii_inDim++;
          pa_ii_inDim_1 = PA[ii_inDim];
          ii_inDim++;
          pa_ii_inDim_2 = PA[ii_inDim];
          ii_inDim++;
          pa_ii_inDim_3 = PA[ii_inDim];
          pa_ii_miDim_0 = PA[ii_miDim];
          ii_miDim++;
          pa_ii_miDim_1 = PA[ii_miDim];
          ii_miDim++;
          pa_ii_miDim_2 = PA[ii_miDim];
          ii_miDim++;
          pa_ii_miDim_3 = PA[ii_miDim];
          wg_ii_index = WG[ii_index];
          wg_ii_minus = WG[ii_minus];
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          lower = ii - Deg1;
          if (lower < 0)
            lower = 0;
          upper = Deg2 + ii;
          if (upper > num_poles)
            upper = num_poles;

          for (jj = lower; jj < upper; jj++) {
            jj_index = jj % NumPoles;
            jj_index = jj_index << 2;
            value = 0.0e0;
            factor = (((PA[jj_index] - pa_ii_inDim_0) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_0) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            jj_index++;
            factor = (((PA[jj_index] - pa_ii_inDim_1) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_1) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            jj_index++;
            factor = (((PA[jj_index] - pa_ii_inDim_2) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_2) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            jj_index++;
            factor = (((PA[jj_index] - pa_ii_inDim_3) * wg_ii_index) -
                      ((PA[jj_index] - pa_ii_miDim_3) * wg_ii_minus));
            if (factor < 0)
              factor = -factor;
            value += factor;
            value *= inverse;
            if (max_derivative < value)
              max_derivative = value;
          }
        }
        max_derivative /= min_weights;
      } else {
        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_index = ii_index << 2;
          ii_minus = (ii - 1) % NumPoles;
          ii_minus = ii_minus << 2;
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          value = 0.0e0;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          ii_index++;
          ii_minus++;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          ii_index++;
          ii_minus++;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          ii_index++;
          ii_minus++;
          factor = PA[ii_index] - PA[ii_minus];
          if (factor < 0)
            factor = -factor;
          value += factor;
          value *= inverse;
          if (max_derivative < value)
            max_derivative = value;
        }
      }
      break;
    }
    default: {
      Standard_Integer kk;
      if (Weights != nullptr) {
        const Standard_Real* WG = &(*Weights)(Weights->Lower());
        min_weights = WG[0];

        for (ii = 1; ii < NumPoles; ii++) {
          W = WG[ii];
          if (W < min_weights)
            min_weights = W;
        }

        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_inDim = ii_index * ArrayDimension;
          ii_minus = (ii - 1) % NumPoles;
          ii_miDim = ii_minus * ArrayDimension;
          wg_ii_index = WG[ii_index];
          wg_ii_minus = WG[ii_minus];
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          lower = ii - Deg1;
          if (lower < 0)
            lower = 0;
          upper = Deg2 + ii;
          if (upper > num_poles)
            upper = num_poles;

          for (jj = lower; jj < upper; jj++) {
            jj_index = jj % NumPoles;
            jj_index *= ArrayDimension;
            value = 0.0e0;

            for (kk = 0; kk < ArrayDimension; kk++) {
              factor =
                  (((PA[jj_index + kk] - PA[ii_inDim + kk]) * wg_ii_index) -
                   ((PA[jj_index + kk] - PA[ii_miDim + kk]) * wg_ii_minus));
              if (factor < 0)
                factor = -factor;
              value += factor;
            }
            value *= inverse;
            if (max_derivative < value)
              max_derivative = value;
          }
        }
        max_derivative /= min_weights;
      } else {
        for (ii = 1; ii < num_poles; ii++) {
          ii_index = ii % NumPoles;
          ii_index *= ArrayDimension;
          ii_minus = (ii - 1) % NumPoles;
          ii_minus *= ArrayDimension;
          inverse = FK[ii + Degree] - FK[ii];
          inverse = 1.0e0 / inverse;
          value = 0.0e0;

          for (kk = 0; kk < ArrayDimension; kk++) {
            factor = PA[ii_index + kk] - PA[ii_minus + kk];
            if (factor < 0)
              factor = -factor;
            value += factor;
          }
          value *= inverse;
          if (max_derivative < value)
            max_derivative = value;
        }
      }
    }
  }
  max_derivative *= Degree;
  if (max_derivative > RealSmall())
    UTolerance = Tolerance3D / max_derivative;
  else
    UTolerance = Tolerance3D / RealSmall();
}

//

template <typename Array1OfPoints>
static void Resolution(const Array1OfPoints& Poles,
                       const TColStd_Array1OfReal* Weights,
                       const Standard_Integer NumPoles,
                       const TColStd_Array1OfReal& FlatKnots,
                       const Standard_Integer Degree,
                       const Standard_Real Tolerance3D,
                       Standard_Real& UTolerance) {
  Standard_Real* PolesArray;
  PolesArray = (Standard_Real*)&Poles(Poles.Lower());
  BSplCLib::Resolution(PolesArray[0], DimensionTrait<Array1OfPoints>::d,
                       NumPoles, Weights, FlatKnots, Degree, Tolerance3D,
                       UTolerance);
}

// Instantiating for 2D curves

void BSplCLib::Resolution(const TColgp_Array1OfPnt2d& Poles,
                          const TColStd_Array1OfReal* Weights,
                          const Standard_Integer NumPoles,
                          const TColStd_Array1OfReal& FlatKnots,
                          const Standard_Integer Degree,
                          const Standard_Real Tolerance3D,
                          Standard_Real& UTolerance) {
  ::Resolution(Poles, Weights, NumPoles, FlatKnots, Degree, Tolerance3D,
               UTolerance);
}

// Instantiating for 3D curves

void BSplCLib::Resolution(const TColgp_Array1OfPnt& Poles,
                          const TColStd_Array1OfReal* Weights,
                          const Standard_Integer NumPoles,
                          const TColStd_Array1OfReal& FlatKnots,
                          const Standard_Integer Degree,
                          const Standard_Real Tolerance3D,
                          Standard_Real& UTolerance) {
  ::Resolution(Poles, Weights, NumPoles, FlatKnots, Degree, Tolerance3D,
               UTolerance);
}
