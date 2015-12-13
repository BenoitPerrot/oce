// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_ShapeToHLR_HeaderFile
#define _HLRBRep_ShapeToHLR_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_HLRBRep_Data.hxx>
#include <Handle_HLRTopoBRep_OutLiner.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class HLRBRep_Data;
class HLRTopoBRep_OutLiner;
class HLRAlgo_Projector;
class BRepTopAdaptor_MapOfShapeTool;
class TopTools_IndexedMapOfShape;
class TopoDS_Face;


//! compute  the   OutLinedShape  of  a Shape with  an
//! OutLiner,    a  Projector  and   create  the  Data
//! Structure of a Shape.
class HLRBRep_ShapeToHLR 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates  a DataStructure   containing the OutLiner
  //! <S> depending on the projector <P> and nbIso.
  Standard_EXPORT static   Handle(HLRBRep_Data) Load (const Handle(HLRTopoBRep_OutLiner)& S, const HLRAlgo_Projector& P, BRepTopAdaptor_MapOfShapeTool& MST, const Standard_Integer nbIso = 0) ;




protected:





private:

  
  Standard_EXPORT static   void ExploreFace (const Handle(HLRTopoBRep_OutLiner)& S, const Handle(HLRBRep_Data)& DS, const TopTools_IndexedMapOfShape& FM, const TopTools_IndexedMapOfShape& EM, Standard_Integer& i, const TopoDS_Face& F, const Standard_Boolean closed) ;
  
  Standard_EXPORT static   void ExploreShape (const Handle(HLRTopoBRep_OutLiner)& S, const Handle(HLRBRep_Data)& DS, const TopTools_IndexedMapOfShape& FM, const TopTools_IndexedMapOfShape& EM) ;




};







#endif // _HLRBRep_ShapeToHLR_HeaderFile
