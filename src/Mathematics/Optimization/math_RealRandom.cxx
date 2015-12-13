// Copyright (c) 1997-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <Mathematics/Optimization/math_RealRandom.hxx>
#include <Mathematics/Optimization/math_Recipes.hxx>

math_RealRandom::math_RealRandom(const Standard_Real Lower,
				 const Standard_Real Upper) {

  Low = Lower;
  Up = Upper;
  Dummy = -1;
  Random2(Dummy);
}

void math_RealRandom::Reset() {

  Dummy = -1;
  Random2(Dummy);
}

Standard_Real math_RealRandom::Next() {
  
  Standard_Real value = Random2(Dummy);
  Standard_Real Result = (Up - Low)*value + Low;
  return Result;  

}
