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

#include <ModelingAlgorithms/HLRAlgo/HLRAlgo_Projector.hxx>
#include <Visualization/Prs3d/Prs3d_Projector.hxx>
#include <Foundation/Standard/Standard_Type.hxx>
IMPLEMENT_STANDARD_TYPE(Prs3d_Projector)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Prs3d_Projector)
IMPLEMENT_DOWNCAST(Prs3d_Projector,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Prs3d_Projector)
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Mathematics/Primitives/gp_Trsf.hxx>
#include <Mathematics/Primitives/gp_Ax3.hxx>


Prs3d_Projector::Prs3d_Projector (const HLRAlgo_Projector& HLPr): MyProjector(HLPr)
{}



Prs3d_Projector::Prs3d_Projector (const Standard_Boolean Pers,
				const Quantity_Length Focus,
			        const Quantity_Length DX,
			        const Quantity_Length DY,
			        const Quantity_Length DZ,
			        const Quantity_Length XAt,
			        const Quantity_Length YAt,
			        const Quantity_Length ZAt,
			        const Quantity_Length XUp,
			        const Quantity_Length YUp,
			        const Quantity_Length ZUp) 
{
  gp_Pnt At (XAt,YAt,ZAt);
  gp_Dir Zpers (DX,DY,DZ);
  gp_Dir Ypers (XUp,YUp,ZUp);
  gp_Dir Xpers = Ypers.Crossed(Zpers);
  gp_Ax3 Axe (At, Zpers, Xpers);
  gp_Trsf T;
  T.SetTransformation(Axe);
  MyProjector = HLRAlgo_Projector(T,Pers,Focus);
}


HLRAlgo_Projector Prs3d_Projector::Projector () const 
{
  return MyProjector;
}
