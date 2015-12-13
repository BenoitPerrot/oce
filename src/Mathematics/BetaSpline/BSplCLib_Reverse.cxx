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

template <typename Array1OfPoints>
static void Reverse(Array1OfPoints& Poles, const Standard_Integer L) {
  Standard_Integer i, l = L;
  l = Poles.Lower() + (l - Poles.Lower()) % (Poles.Upper() - Poles.Lower() + 1);

  Array1OfPoints temp(0, Poles.Length() - 1);

  for (i = Poles.Lower(); i <= l; i++)
    temp(l - i) = Poles(i);

  for (i = l + 1; i <= Poles.Upper(); i++)
    temp(l - Poles.Lower() + Poles.Upper() - i + 1) = Poles(i);

  for (i = Poles.Lower(); i <= Poles.Upper(); i++)
    Poles(i) = temp(i - Poles.Lower());
}

// Instantiating for 2D curves

void BSplCLib::Reverse(TColgp_Array1OfPnt2d& Poles, const Standard_Integer L) {
  ::Reverse(Poles, L);
}

// Instantiating for 3D curves

void BSplCLib::Reverse(TColgp_Array1OfPnt& Poles, const Standard_Integer L) {
  ::Reverse(Poles, L);
}
