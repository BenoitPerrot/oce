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

#include <Foundation/Standard/Standard_TypeMismatch.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Vertex.hxx>
#include <ModelingData/TopoDS/TopoDS_Edge.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopoDS/TopoDS_Shell.hxx>
#include <ModelingData/TopoDS/TopoDS_Solid.hxx>
#include <ModelingData/TopoDS/TopoDS_CompSolid.hxx>
#include <ModelingData/TopoDS/TopoDS_Compound.hxx>
#include <TransferBRep_ShapeBinder.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(TransferBRep_ShapeBinder)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TransferBRep_BinderOfShape),
  STANDARD_TYPE(Transfer_Binder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TransferBRep_ShapeBinder)
IMPLEMENT_DOWNCAST(TransferBRep_ShapeBinder,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TransferBRep_ShapeBinder)
#include <ModelingData/TopoDS/TopoDS.hxx>


TransferBRep_ShapeBinder::TransferBRep_ShapeBinder ()    {  }

    TransferBRep_ShapeBinder::TransferBRep_ShapeBinder (const TopoDS_Shape& shape)
    :  TransferBRep_BinderOfShape (shape)    {  }

    TopAbs_ShapeEnum  TransferBRep_ShapeBinder::ShapeType () const
{
  if (!HasResult()) return TopAbs_SHAPE;
  return  Result().ShapeType();
}

    TopoDS_Vertex  TransferBRep_ShapeBinder::Vertex() const
      {  return TopoDS::Vertex(Result());  }

    TopoDS_Edge  TransferBRep_ShapeBinder::Edge() const
      {  return TopoDS::Edge(Result());  }

    TopoDS_Wire  TransferBRep_ShapeBinder::Wire() const
      {  return TopoDS::Wire(Result());  }

    TopoDS_Face  TransferBRep_ShapeBinder::Face() const
      {  return TopoDS::Face(Result());  }

    TopoDS_Shell  TransferBRep_ShapeBinder::Shell() const
      {  return TopoDS::Shell(Result());  }

    TopoDS_Solid  TransferBRep_ShapeBinder::Solid() const
      {  return TopoDS::Solid(Result());  }

    TopoDS_CompSolid  TransferBRep_ShapeBinder::CompSolid() const
      {  return TopoDS::CompSolid(Result());  }

    TopoDS_Compound  TransferBRep_ShapeBinder::Compound() const
      {  return TopoDS::Compound(Result());  }
