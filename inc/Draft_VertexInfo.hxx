// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draft_VertexInfo_HeaderFile
#define _Draft_VertexInfo_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Foundation/TColStd/TColStd_ListOfReal.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_DomainError;
class Standard_NoMoreObject;
class TopoDS_Edge;
class gp_Pnt;



class Draft_VertexInfo 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Draft_VertexInfo();
  
  Standard_EXPORT   void Add (const TopoDS_Edge& E) ;
  
  Standard_EXPORT  const  gp_Pnt& Geometry()  const;
  
  Standard_EXPORT   Standard_Real Parameter (const TopoDS_Edge& E) ;
  
  Standard_EXPORT   void InitEdgeIterator() ;
  
  Standard_EXPORT  const  TopoDS_Edge& Edge()  const;
  
  Standard_EXPORT   void NextEdge() ;
  
  Standard_EXPORT   Standard_Boolean MoreEdge()  const;
  
  Standard_EXPORT   gp_Pnt& ChangeGeometry() ;
  
  Standard_EXPORT   Standard_Real& ChangeParameter (const TopoDS_Edge& E) ;




protected:





private:



  gp_Pnt myGeom;
  TopTools_ListOfShape myEdges;
  TColStd_ListOfReal myParams;
  TopTools_ListIteratorOfListOfShape myItEd;


};







#endif // _Draft_VertexInfo_HeaderFile
