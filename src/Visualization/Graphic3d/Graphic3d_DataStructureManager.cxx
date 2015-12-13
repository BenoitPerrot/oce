// Created by: CAL
// Copyright (c) 1995-1999 Matra Datavision
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

#define XTRACE
#define XDESTROY

//              11/97 ; CAL : retrait des DataStructure


//-Version	

//-Design	

//-Warning	

//-References	

//-Language	C++ 2.0

//-Declarations

// for the class
#include <Graphic3d_DataStructureManager.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Graphic3d_DataStructureManager)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Graphic3d_DataStructureManager)
IMPLEMENT_DOWNCAST(Graphic3d_DataStructureManager,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Graphic3d_DataStructureManager)

//-Aliases

//-Global data definitions

//-Constructors

Graphic3d_DataStructureManager::Graphic3d_DataStructureManager () {
}

//-Destructors

void Graphic3d_DataStructureManager::Destroy () {

#ifdef DESTROY
	cout << "Graphic3d_DataStructureManager::Destroy ()\n";
#endif

}
