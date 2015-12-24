// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_SectionLaw_HeaderFile
#define _BRepFill_SectionLaw_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/BRepFill/Handle_BRepFill_SectionLaw.hxx>

#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_HArray1OfSectionLaw.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/BRepTools/BRepTools_WireExplorer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_SectionLaw.hxx>
#include <GeomAbs_Shape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class GeomFill_HArray1OfSectionLaw;
class GeomFill_SectionLaw;
class TopoDS_Vertex;
class TopoDS_Shape;
class TopoDS_Wire;
class TopoDS_Edge;


//! Build Section Law, with an Vertex, or an Wire
class BRepFill_SectionLaw : public MMgt_TShared
{

public:

  
  Standard_EXPORT   Standard_Integer NbLaw()  const;
  
  Standard_EXPORT  const  Handle(GeomFill_SectionLaw)& Law (const Standard_Integer Index)  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsConstant()  const = 0;
  
  Standard_EXPORT   Standard_Boolean IsUClosed()  const;
  
  Standard_EXPORT   Standard_Boolean IsVClosed()  const;
  
  //! Say if the input sahpe is a  vertex.
  Standard_EXPORT virtual   Standard_Boolean IsVertex()  const = 0;
  
  Standard_EXPORT virtual   Handle(GeomFill_SectionLaw) ConcatenedLaw()  const = 0;
  
  Standard_EXPORT virtual   GeomAbs_Shape Continuity (const Standard_Integer Index, const Standard_Real TolAngular)  const = 0;
  
  Standard_EXPORT virtual   Standard_Real VertexTol (const Standard_Integer Index, const Standard_Real Param)  const = 0;
  
  Standard_EXPORT virtual   TopoDS_Vertex Vertex (const Standard_Integer Index, const Standard_Real Param)  const = 0;
  
  Standard_EXPORT virtual   void D0 (const Standard_Real U, TopoDS_Shape& S)  = 0;
  
  Standard_EXPORT   void Init (const TopoDS_Wire& W) ;
  
  Standard_EXPORT   TopoDS_Edge CurrentEdge() ;




  DEFINE_STANDARD_RTTI(BRepFill_SectionLaw)

protected:


  Handle(GeomFill_HArray1OfSectionLaw) myLaws;
  Standard_Boolean uclosed;
  Standard_Boolean vclosed;


private: 


  BRepTools_WireExplorer myIterator;


};







#endif // _BRepFill_SectionLaw_HeaderFile
