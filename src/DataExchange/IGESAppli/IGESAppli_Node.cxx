// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
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

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <DataExchange/IGESGeom/IGESGeom_TransformationMatrix.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <DataExchange/IGESData/IGESData_TransfEntity.hxx>
#include <DataExchange/IGESAppli/IGESAppli_Node.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(IGESAppli_Node)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(IGESData_IGESEntity),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(IGESAppli_Node)
IMPLEMENT_DOWNCAST(IGESAppli_Node,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(IGESAppli_Node)
#include <Mathematics/Primitives/gp_GTrsf.hxx>
#include <Interface_Macros.hxx>

IGESAppli_Node::IGESAppli_Node ()    {  }


    void  IGESAppli_Node::Init
  (const gp_XYZ& aCoord,
   const Handle(IGESGeom_TransformationMatrix)& aCoordSystem)
{
  theCoord  = aCoord;
  theSystem = aCoordSystem;
  InitTypeAndForm(134,0);
}

    gp_Pnt  IGESAppli_Node::Coord () const
{
  return  gp_Pnt(theCoord);
}

    Handle(IGESData_TransfEntity)  IGESAppli_Node::System () const
{
  //if Null, Global Cartesian Coordinate System
  return GetCasted(IGESData_TransfEntity,theSystem);
}

    Standard_Integer  IGESAppli_Node::SystemType () const
{
  if (theSystem.IsNull()) return 0;      // 0 Global Cartesien
  return (theSystem->FormNumber() - 9);  // 1 Cartesien, 2 Cylind. 3 Spher.
}


    gp_Pnt IGESAppli_Node::TransformedNodalCoord () const
{
  gp_XYZ tempCoord = Coord().XYZ();
  Handle(IGESData_TransfEntity) temp = System();
  if (!temp.IsNull())    temp->Value().Transforms(tempCoord);
  return gp_Pnt(tempCoord);
}
