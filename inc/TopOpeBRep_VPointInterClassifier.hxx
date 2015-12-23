// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_VPointInterClassifier_HeaderFile
#define _TopOpeBRep_VPointInterClassifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BRepClass_FaceClassifier.hxx>
#include <ModelingData/TopAbs/TopAbs_State.hxx>
#include <TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TopoDS_Shape;
class TopOpeBRep_VPointInter;
class TopOpeBRep_PointClassifier;



class TopOpeBRep_VPointInterClassifier 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRep_VPointInterClassifier();
  
  //! compute position of VPoint <VP> regarding with face <F>.
  //! <ShapeIndex> (= 1,2) indicates which (u,v) point of <VP> is used.
  //! when state is ON, set VP.EdgeON() with the edge containing <VP>
  //! and associated parameter.
  //! returns state of VP on ShapeIndex.
  Standard_EXPORT   TopAbs_State VPointPosition (const TopoDS_Shape& F, TopOpeBRep_VPointInter& VP, const Standard_Integer ShapeIndex, TopOpeBRep_PointClassifier& PC, const Standard_Boolean AssumeINON, const Standard_Real Tol) ;
  
  //! returns the edge containing the VPoint <VP> used in the
  //! last VPointPosition() call. Edge is defined if the state previously
  //! computed is ON, else Edge is a null shape.
  Standard_EXPORT  const  TopoDS_Shape& Edge()  const;
  
  //! returns the parameter of the VPoint <VP> on Edge()
  Standard_EXPORT   Standard_Real EdgeParameter()  const;




protected:





private:



  BRepClass_FaceClassifier mySlowFaceClassifier;
  TopAbs_State myState;
  TopoDS_Shape myNullShape;


};







#endif // _TopOpeBRep_VPointInterClassifier_HeaderFile
