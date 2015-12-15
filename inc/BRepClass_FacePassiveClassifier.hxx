// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass_FacePassiveClassifier_HeaderFile
#define _BRepClass_FacePassiveClassifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_Lin2d.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <TopTrans_CurveTransition.hxx>
#include <BRepClass_Intersector.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopAbs_State.hxx>
#include <TopAbs_Orientation.hxx>
class Standard_DomainError;
class BRepClass_Edge;
class BRepClass_Intersector;
class gp_Lin2d;



class BRepClass_FacePassiveClassifier 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepClass_FacePassiveClassifier();
  
  Standard_EXPORT   void Reset (const gp_Lin2d& L, const Standard_Real P, const Standard_Real Tol) ;
  
  Standard_EXPORT   void Compare (const BRepClass_Edge& E, const TopAbs_Orientation Or) ;
  
      Standard_Real Parameter()  const;
  
      BRepClass_Intersector& Intersector() ;
  
      Standard_Integer ClosestIntersection()  const;
  
      TopAbs_State State()  const;
  
      Standard_Boolean IsHeadOrEnd()  const;




protected:





private:



  Standard_Boolean myIsSet;
  Standard_Boolean myFirstCompare;
  Standard_Boolean myFirstTrans;
  gp_Lin2d myLin;
  Standard_Real myParam;
  Standard_Real myTolerance;
  TopTrans_CurveTransition myTrans;
  BRepClass_Intersector myIntersector;
  Standard_Integer myClosest;
  TopAbs_State myState;
  Standard_Boolean myIsHeadOrEnd;


};

#define TheEdge BRepClass_Edge
#define TheEdge_hxx <BRepClass_Edge.hxx>
#define TheIntersector BRepClass_Intersector
#define TheIntersector_hxx <BRepClass_Intersector.hxx>
#define TopClass_Classifier2d BRepClass_FacePassiveClassifier
#define TopClass_Classifier2d_hxx <BRepClass_FacePassiveClassifier.hxx>

#include <TopClass_Classifier2d.lxx>

#undef TheEdge
#undef TheEdge_hxx
#undef TheIntersector
#undef TheIntersector_hxx
#undef TopClass_Classifier2d
#undef TopClass_Classifier2d_hxx




#endif // _BRepClass_FacePassiveClassifier_HeaderFile
