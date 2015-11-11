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

void BSplCLib::PrepareTrimming(const Standard_Integer Degree,
                               const Standard_Boolean Periodic,
                               const TColStd_Array1OfReal& Knots,
                               const TColStd_Array1OfInteger& Mults,
                               const Standard_Real U1,
                               const Standard_Real U2,
                               Standard_Integer& NbKnots,
                               Standard_Integer& NbPoles) {
  Standard_Integer i;
  Standard_Real NewU1, NewU2;
  Standard_Integer index1 = 0, index2 = 0;

  // Eval index1, index2 : position of U1 and U2 in the Array Knots
  // such as Knots(index1-1) <= U1 < Knots(index1)
  //         Knots(index2-1) <= U2 < Knots(index2)
  LocateParameter(Degree, Knots, Mults, U1, Periodic, Knots.Lower(),
                  Knots.Upper(), index1, NewU1);
  LocateParameter(Degree, Knots, Mults, U2, Periodic, Knots.Lower(),
                  Knots.Upper(), index2, NewU2);
  index1++;
  if (Abs(Knots(index2) - U2) <= Epsilon(U1))
    index2--;

  // eval NbKnots:
  NbKnots = index2 - index1 + 3;

  // eval NbPoles:
  NbPoles = Degree + 1;

  for (i = index1; i <= index2; i++)
    NbPoles += Mults(i);
}

void BSplCLib::Trimming(const Standard_Integer Degree,
                        const Standard_Boolean Periodic,
                        const Standard_Integer Dimension,
                        const TColStd_Array1OfReal& Knots,
                        const TColStd_Array1OfInteger& Mults,
                        const TColStd_Array1OfReal& Poles,
                        const Standard_Real U1,
                        const Standard_Real U2,
                        TColStd_Array1OfReal& NewKnots,
                        TColStd_Array1OfInteger& NewMults,
                        TColStd_Array1OfReal& NewPoles) {
  Standard_Integer i, nbpoles, nbknots;
  Standard_Real kk[2];
  Standard_Integer mm[2];
  TColStd_Array1OfReal K(kk[0], 1, 2);
  TColStd_Array1OfInteger M(mm[0], 1, 2);

  K(1) = U1;
  K(2) = U2;
  mm[0] = mm[1] = Degree;
  if (!PrepareInsertKnots(Degree, Periodic, Knots, Mults, K, &M, nbpoles,
                          nbknots, Epsilon(U1), 0))
    Standard_OutOfRange::Raise();

  TColStd_Array1OfReal TempPoles(1, nbpoles * Dimension);
  TColStd_Array1OfReal TempKnots(1, nbknots);
  TColStd_Array1OfInteger TempMults(1, nbknots);

  //
  // do not allow the multiplicities to Add : they must be less than Degree
  //
  InsertKnots(Degree, Periodic, Dimension, Poles, Knots, Mults, K, &M,
              TempPoles, TempKnots, TempMults, Epsilon(U1), Standard_False);

  // find in TempPoles the index of the pole corresponding to U1
  Standard_Integer Kindex = 0, Pindex;
  Standard_Real NewU1;
  LocateParameter(Degree, TempKnots, TempMults, U1, Periodic, TempKnots.Lower(),
                  TempKnots.Upper(), Kindex, NewU1);
  Pindex = PoleIndex(Degree, Kindex, Periodic, TempMults);
  Pindex *= Dimension;

  for (i = 1; i <= NewPoles.Length(); i++)
    NewPoles(i) = TempPoles(Pindex + i);

  for (i = 1; i <= NewKnots.Length(); i++) {
    NewKnots(i) = TempKnots(Kindex + i - 1);
    NewMults(i) = TempMults(Kindex + i - 1);
  }
  NewMults(1) = Min(Degree, NewMults(1)) + 1;
  NewMults(NewMults.Length()) = Min(Degree, NewMults(NewMults.Length())) + 1;
}

//

template <typename Array1OfPoints>
static void Trimming(const Standard_Integer Degree,
                     const Standard_Boolean Periodic,
                     const TColStd_Array1OfReal& Knots,
                     const TColStd_Array1OfInteger& Mults,
                     const Array1OfPoints& Poles,
                     const Standard_Real U1,
                     const Standard_Real U2,
                     TColStd_Array1OfReal& NewKnots,
                     TColStd_Array1OfInteger& NewMults,
                     Array1OfPoints& NewPoles) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, poles);

  BSplCLib::Trimming(Degree, Periodic, dim, Knots, Mults, poles, U1, U2,
                     NewKnots, NewMults, newpoles);

  PLib::GetPoles(newpoles, NewPoles);
}

template <typename Array1OfPoints>
static void Trimming(const Standard_Integer Degree,
                     const Standard_Boolean Periodic,
                     const TColStd_Array1OfReal& Knots,
                     const TColStd_Array1OfInteger& Mults,
                     const Array1OfPoints& Poles,
                     const TColStd_Array1OfReal& Weights,
                     const Standard_Real U1,
                     const Standard_Real U2,
                     TColStd_Array1OfReal& NewKnots,
                     TColStd_Array1OfInteger& NewMults,
                     Array1OfPoints& NewPoles,
                     TColStd_Array1OfReal& NewWeights) {
  Standard_Integer dim = DimensionTrait<Array1OfPoints>::d + 1;

  TColStd_Array1OfReal poles(1, dim * Poles.Length());
  TColStd_Array1OfReal newpoles(1, dim * NewPoles.Length());

  PLib::SetPoles(Poles, Weights, poles);

  BSplCLib::Trimming(Degree, Periodic, dim, Knots, Mults, poles, U1, U2,
                     NewKnots, NewMults, newpoles);

  PLib::GetPoles(newpoles, NewPoles, NewWeights);
}

// Instantiating for 2D curves

void BSplCLib::Trimming(const Standard_Integer Degree,
                        const Standard_Boolean Periodic,
                        const TColStd_Array1OfReal& Knots,
                        const TColStd_Array1OfInteger& Mults,
                        const TColgp_Array1OfPnt2d& Poles,
                        const Standard_Real U1,
                        const Standard_Real U2,
                        TColStd_Array1OfReal& NewKnots,
                        TColStd_Array1OfInteger& NewMults,
                        TColgp_Array1OfPnt2d& NewPoles) {
  ::Trimming(Degree, Periodic, Knots, Mults, Poles, U1, U2, NewKnots, NewMults,
             NewPoles);
}

void BSplCLib::Trimming(const Standard_Integer Degree,
                        const Standard_Boolean Periodic,
                        const TColStd_Array1OfReal& Knots,
                        const TColStd_Array1OfInteger& Mults,
                        const TColgp_Array1OfPnt2d& Poles,
                        const TColStd_Array1OfReal& Weights,
                        const Standard_Real U1,
                        const Standard_Real U2,
                        TColStd_Array1OfReal& NewKnots,
                        TColStd_Array1OfInteger& NewMults,
                        TColgp_Array1OfPnt2d& NewPoles,
                        TColStd_Array1OfReal& NewWeights) {
  ::Trimming(Degree, Periodic, Knots, Mults, Poles, Weights, U1, U2, NewKnots,
             NewMults, NewPoles, NewWeights);
}

// Instantiating for 3D curves

void BSplCLib::Trimming(const Standard_Integer Degree,
                        const Standard_Boolean Periodic,
                        const TColStd_Array1OfReal& Knots,
                        const TColStd_Array1OfInteger& Mults,
                        const TColgp_Array1OfPnt& Poles,
                        const Standard_Real U1,
                        const Standard_Real U2,
                        TColStd_Array1OfReal& NewKnots,
                        TColStd_Array1OfInteger& NewMults,
                        TColgp_Array1OfPnt& NewPoles) {
  ::Trimming(Degree, Periodic, Knots, Mults, Poles, U1, U2, NewKnots, NewMults,
             NewPoles);
}

void BSplCLib::Trimming(const Standard_Integer Degree,
                        const Standard_Boolean Periodic,
                        const TColStd_Array1OfReal& Knots,
                        const TColStd_Array1OfInteger& Mults,
                        const TColgp_Array1OfPnt& Poles,
                        const TColStd_Array1OfReal& Weights,
                        const Standard_Real U1,
                        const Standard_Real U2,
                        TColStd_Array1OfReal& NewKnots,
                        TColStd_Array1OfInteger& NewMults,
                        TColgp_Array1OfPnt& NewPoles,
                        TColStd_Array1OfReal& NewWeights) {
  ::Trimming(Degree, Periodic, Knots, Mults, Poles, Weights, U1, U2, NewKnots,
             NewMults, NewPoles, NewWeights);
}
