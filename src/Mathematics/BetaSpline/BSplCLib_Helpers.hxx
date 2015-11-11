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
#pragma once

template <typename T>
struct DimensionTrait {};

template <>
struct DimensionTrait<TColgp_Array1OfPnt2d> {
  static const int d = 2;
  typedef gp_Pnt2d Point;
};

template <>
struct DimensionTrait<TColgp_Array1OfPnt> {
  static const int d = 3;
  typedef gp_Pnt Point;
};

template <>
struct DimensionTrait<gp_Pnt2d> {
  static const int d = 2;
  typedef TColgp_Array1OfPnt2d Array;
  typedef gp_Vec2d Vector;
};

template <>
struct DimensionTrait<gp_Pnt> {
  static const int d = 3;
  typedef TColgp_Array1OfPnt Array;
  typedef gp_Vec Vector;
};


void BSplCLib_Copy(const Standard_Integer NbPoles,
                   Standard_Integer& OldFirst,
                   const TColStd_Array1OfReal& OldPoles,
                   Standard_Integer& NewFirst,
                   TColStd_Array1OfReal& NewPoles);
