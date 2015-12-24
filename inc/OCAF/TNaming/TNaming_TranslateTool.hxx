// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_TranslateTool_HeaderFile
#define _TNaming_TranslateTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TNaming/Handle_TNaming_TranslateTool.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
class Standard_TypeMismatch;
class TopoDS_Shape;
class TColStd_IndexedDataMapOfTransientTransient;


//! tool to copy underlying TShape of a Shape.
//! The TranslateTool class is provided to support the
//! translation of topological data structures  Transient
//! to  Transient.
class TNaming_TranslateTool : public MMgt_TShared
{

public:

  
  Standard_EXPORT   void Add (TopoDS_Shape& S1, const TopoDS_Shape& S2)  const;
  
  Standard_EXPORT   void MakeVertex (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void MakeEdge (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void MakeWire (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void MakeFace (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void MakeShell (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void MakeSolid (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void MakeCompSolid (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void MakeCompound (TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void UpdateVertex (const TopoDS_Shape& S1, TopoDS_Shape& S2, TColStd_IndexedDataMapOfTransientTransient& M)  const;
  
  Standard_EXPORT   void UpdateEdge (const TopoDS_Shape& S1, TopoDS_Shape& S2, TColStd_IndexedDataMapOfTransientTransient& M)  const;
  
  Standard_EXPORT   void UpdateFace (const TopoDS_Shape& S1, TopoDS_Shape& S2, TColStd_IndexedDataMapOfTransientTransient& M)  const;
  
  Standard_EXPORT   void UpdateShape (const TopoDS_Shape& S1, TopoDS_Shape& S2)  const;




  DEFINE_STANDARD_RTTI(TNaming_TranslateTool)

protected:




private: 




};







#endif // _TNaming_TranslateTool_HeaderFile
