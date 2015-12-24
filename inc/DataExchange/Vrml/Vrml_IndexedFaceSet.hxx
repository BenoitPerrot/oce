// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_IndexedFaceSet_HeaderFile
#define _Vrml_IndexedFaceSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/Vrml/Handle_Vrml_IndexedFaceSet.hxx>

#include <Foundation/TColStd/Handle_TColStd_HArray1OfInteger.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TColStd_HArray1OfInteger;


//! defines a IndexedFaceSet node of VRML specifying geometry shapes.
//! This node represents a 3D shape formed by constructing faces (polygons) from
//! vertices located at the current coordinates. IndexedFaceSet uses the indices
//! in its coordIndex to define polygonal faces. An index of -1 separates faces
//! (so a -1 at the end of the list is optional).
class Vrml_IndexedFaceSet : public MMgt_TShared
{

public:

  
  Standard_EXPORT Vrml_IndexedFaceSet(const Handle(TColStd_HArray1OfInteger)& aCoordIndex, const Handle(TColStd_HArray1OfInteger)& aMaterialIndex, const Handle(TColStd_HArray1OfInteger)& aNormalIndex, const Handle(TColStd_HArray1OfInteger)& aTextureCoordIndex);
  
  Standard_EXPORT Vrml_IndexedFaceSet();
  
  Standard_EXPORT   void SetCoordIndex (const Handle(TColStd_HArray1OfInteger)& aCoordIndex) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) CoordIndex()  const;
  
  Standard_EXPORT   void SetMaterialIndex (const Handle(TColStd_HArray1OfInteger)& aMaterialIndex) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) MaterialIndex()  const;
  
  Standard_EXPORT   void SetNormalIndex (const Handle(TColStd_HArray1OfInteger)& aNormalIndex) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) NormalIndex()  const;
  
  Standard_EXPORT   void SetTextureCoordIndex (const Handle(TColStd_HArray1OfInteger)& aTextureCoordIndex) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) TextureCoordIndex()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




  DEFINE_STANDARD_RTTI(Vrml_IndexedFaceSet)

protected:




private: 


  Handle(TColStd_HArray1OfInteger) myCoordIndex;
  Handle(TColStd_HArray1OfInteger) myMaterialIndex;
  Handle(TColStd_HArray1OfInteger) myNormalIndex;
  Handle(TColStd_HArray1OfInteger) myTextureCoordIndex;


};







#endif // _Vrml_IndexedFaceSet_HeaderFile
