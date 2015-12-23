// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_BuilderON_HeaderFile
#define _TopOpeBRepBuild_BuilderON_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopOpeBRepBuild_PBuilder.hxx>
#include <TopOpeBRepBuild_PGTopo.hxx>
#include <TopOpeBRepTool_Plos.hxx>
#include <TopOpeBRepBuild_PWireEdgeSet.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <TopOpeBRepDS_ListOfInterference.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
class TopoDS_Shape;
class TopOpeBRepDS_Interference;



class TopOpeBRepBuild_BuilderON 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_BuilderON();
  
  Standard_EXPORT TopOpeBRepBuild_BuilderON(const TopOpeBRepBuild_PBuilder& PB, const TopoDS_Shape& F, const TopOpeBRepBuild_PGTopo& PG, const TopOpeBRepTool_Plos& PLSclass, const TopOpeBRepBuild_PWireEdgeSet& PWES);
  
  Standard_EXPORT   void Perform (const TopOpeBRepBuild_PBuilder& PB, const TopoDS_Shape& F, const TopOpeBRepBuild_PGTopo& PG, const TopOpeBRepTool_Plos& PLSclass, const TopOpeBRepBuild_PWireEdgeSet& PWES) ;
  
  Standard_EXPORT   Standard_Boolean GFillONCheckI (const Handle(TopOpeBRepDS_Interference)& I)  const;
  
  Standard_EXPORT   void GFillONPartsWES1 (const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT   void GFillONPartsWES2 (const Handle(TopOpeBRepDS_Interference)& I, const TopoDS_Shape& EspON) ;
  
  Standard_EXPORT   void Perform2d (const TopOpeBRepBuild_PBuilder& PB, const TopoDS_Shape& F, const TopOpeBRepBuild_PGTopo& PG, const TopOpeBRepTool_Plos& PLSclass, const TopOpeBRepBuild_PWireEdgeSet& PWES) ;
  
  Standard_EXPORT   void GFillONParts2dWES2 (const Handle(TopOpeBRepDS_Interference)& I, const TopoDS_Shape& EspON) ;




protected:





private:



  TopOpeBRepBuild_PBuilder myPB;
  TopOpeBRepBuild_PGTopo myPG;
  TopOpeBRepTool_Plos myPLSclass;
  TopOpeBRepBuild_PWireEdgeSet myPWES;
  TopoDS_Shape myFace;
  TopOpeBRepDS_ListOfInterference myFEI;


};







#endif // _TopOpeBRepBuild_BuilderON_HeaderFile
