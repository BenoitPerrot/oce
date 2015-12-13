// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MgtTopoDS_TranslateTool_HeaderFile
#define _MgtTopoDS_TranslateTool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MgtTopoDS_TranslateTool.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_PTopoDS_HShape.hxx>
class Standard_TypeMismatch;
class TopoDS_Shape;
class PTopoDS_HShape;
class PTColStd_TransientPersistentMap;
class PTColStd_PersistentTransientMap;


//! The TranslateTool class is provided to support the
//! translation of inherited parts of topological data
//! structures.
//! Root of all translation tools.
class MgtTopoDS_TranslateTool : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void Add (TopoDS_Shape& S1, const TopoDS_Shape& S2)  const = 0;
  
  Standard_EXPORT virtual   void MakeVertex (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeVertex (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeEdge (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeEdge (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeWire (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeWire (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeFace (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeFace (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeShell (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeShell (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeSolid (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeSolid (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeCompSolid (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeCompSolid (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeCompound (TopoDS_Shape& S)  const = 0;
  
  Standard_EXPORT virtual   void MakeCompound (const Handle(PTopoDS_HShape)& S)  const = 0;
  
  //! Basic update method
  Standard_EXPORT   void UpdateShape (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2)  const;
  
  //! Basic update method
  Standard_EXPORT   void UpdateShape (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2)  const;
  
  Standard_EXPORT virtual   void UpdateVertex (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2, PTColStd_TransientPersistentMap& M)  const;
  
  Standard_EXPORT virtual   void UpdateVertex (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2, PTColStd_PersistentTransientMap& M)  const;
  
  Standard_EXPORT virtual   void UpdateEdge (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2, PTColStd_TransientPersistentMap& M)  const;
  
  Standard_EXPORT virtual   void UpdateEdge (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2, PTColStd_PersistentTransientMap& M)  const;
  
  Standard_EXPORT virtual   void UpdateWire (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2)  const;
  
  Standard_EXPORT virtual   void UpdateWire (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2)  const;
  
  Standard_EXPORT virtual   void UpdateFace (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2, PTColStd_TransientPersistentMap& M)  const;
  
  Standard_EXPORT virtual   void UpdateFace (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2, PTColStd_PersistentTransientMap& M)  const;
  
  Standard_EXPORT virtual   void UpdateShell (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2)  const;
  
  Standard_EXPORT virtual   void UpdateShell (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2)  const;
  
  Standard_EXPORT virtual   void UpdateSolid (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2)  const;
  
  Standard_EXPORT virtual   void UpdateSolid (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2)  const;
  
  Standard_EXPORT virtual   void UpdateCompSolid (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2)  const;
  
  Standard_EXPORT virtual   void UpdateCompSolid (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2)  const;
  
  Standard_EXPORT virtual   void UpdateCompound (const TopoDS_Shape& S1, const Handle(PTopoDS_HShape)& S2)  const;
  
  Standard_EXPORT virtual   void UpdateCompound (const Handle(PTopoDS_HShape)& S1, TopoDS_Shape& S2)  const;




  DEFINE_STANDARD_RTTI(MgtTopoDS_TranslateTool)

protected:




private: 




};







#endif // _MgtTopoDS_TranslateTool_HeaderFile
