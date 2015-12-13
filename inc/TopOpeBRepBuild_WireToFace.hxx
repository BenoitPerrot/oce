// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_WireToFace_HeaderFile
#define _TopOpeBRepBuild_WireToFace_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopTools_ListOfShape.hxx>
class TopoDS_Wire;
class TopoDS_Face;
class TopTools_ListOfShape;



//! This class builds faces from a set of wires  SW and a face F.
//! The face must have and underlying surface, say S.
//! All of the edges of all of the wires must have a 2d representation
//! on surface S (except if S is planar)
class TopOpeBRepBuild_WireToFace 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_WireToFace();
  
  Standard_EXPORT   void Init() ;
  
  Standard_EXPORT   void AddWire (const TopoDS_Wire& W) ;
  
  Standard_EXPORT   void MakeFaces (const TopoDS_Face& F, TopTools_ListOfShape& LF) ;




protected:





private:



  TopTools_ListOfShape myLW;


};







#endif // _TopOpeBRepBuild_WireToFace_HeaderFile
