// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_FaceInterferenceTool_HeaderFile
#define _TopOpeBRepDS_FaceInterferenceTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopOpeBRepDS_PDataStructure.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopTrans_SurfaceTransition.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
class TopoDS_Shape;
class TopOpeBRepDS_Interference;
class TopOpeBRepDS_Curve;
class gp_Pnt;


//! a tool computing complex transition on Face.
class TopOpeBRepDS_FaceInterferenceTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_FaceInterferenceTool(const TopOpeBRepDS_PDataStructure& P);
  

  //! Eisnew = true if E is a new edge built on edge I->Geometry()
  //! false if E is shape <=> I->Geometry()
  Standard_EXPORT   void Init (const TopoDS_Shape& FI, const TopoDS_Shape& E, const Standard_Boolean Eisnew, const Handle(TopOpeBRepDS_Interference)& I) ;
  

  //! Eisnew = true if E is a new edge built on edge I->Geometry()
  //! false if E is shape <=> I->Geometry()
  Standard_EXPORT   void Add (const TopoDS_Shape& FI, const TopoDS_Shape& F, const TopoDS_Shape& E, const Standard_Boolean Eisnew, const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT   void Add (const TopoDS_Shape& E, const TopOpeBRepDS_Curve& C, const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT   void SetEdgePntPar (const gp_Pnt& P, const Standard_Real par) ;
  
  Standard_EXPORT   void GetEdgePntPar (gp_Pnt& P, Standard_Real& par)  const;
  
  Standard_EXPORT   Standard_Boolean IsEdgePntParDef()  const;
  
  Standard_EXPORT   void Transition (const Handle(TopOpeBRepDS_Interference)& I)  const;




protected:





private:



  TopOpeBRepDS_PDataStructure myPBDS;
  Standard_Boolean myrefdef;
  TopAbs_Orientation myFaceOrientation;
  Standard_Integer myFaceOriented;
  TopTrans_SurfaceTransition myTool;
  TopoDS_Shape myEdge;
  Standard_Boolean isLine;
  gp_Pnt myPntOnEd;
  Standard_Real myParOnEd;
  Standard_Boolean myOnEdDef;
  Standard_Real myTole;


};







#endif // _TopOpeBRepDS_FaceInterferenceTool_HeaderFile
