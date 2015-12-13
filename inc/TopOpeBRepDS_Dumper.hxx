// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_Dumper_HeaderFile
#define _TopOpeBRepDS_Dumper_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_TopOpeBRepDS_HDataStructure.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom2d_Curve.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom2d_BSplineCurve.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <TCollection_AsciiString.hxx>
class TopOpeBRepDS_HDataStructure;
class Geom_Curve;
class Geom2d_Curve;
class gp_Pnt;
class gp_Pnt2d;
class Geom_BSplineCurve;
class Geom2d_BSplineCurve;
class TCollection_AsciiString;
class TopoDS_Shape;
class TopOpeBRepDS_ListOfInterference;
class TopOpeBRepDS_Interference;
class TopTools_ListOfShape;



class TopOpeBRepDS_Dumper 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_Dumper(const Handle(TopOpeBRepDS_HDataStructure)& HDS);
  
  Standard_EXPORT static   Standard_OStream& PrintType (const Handle(Geom_Curve)& C, Standard_OStream& S) ;
  
  Standard_EXPORT static   Standard_OStream& PrintType (const Handle(Geom2d_Curve)& C, Standard_OStream& S) ;
  
  Standard_EXPORT static   Standard_OStream& Print (const gp_Pnt& P, Standard_OStream& S) ;
  
  Standard_EXPORT static   Standard_OStream& Print (const gp_Pnt2d& P, Standard_OStream& S) ;
  
  Standard_EXPORT static   Standard_OStream& Print (const Handle(Geom_BSplineCurve)& C, Standard_OStream& S, const Standard_Boolean c = Standard_True) ;
  
  Standard_EXPORT static   Standard_OStream& Print (const Handle(Geom2d_BSplineCurve)& C, Standard_OStream& S, const Standard_Boolean c = Standard_True) ;
  
  Standard_EXPORT static   Standard_OStream& Print (const Handle(Geom_Curve)& C, Standard_OStream& S, const Standard_Boolean c = Standard_True) ;
  
  Standard_EXPORT static   Standard_OStream& Print (const Handle(Geom2d_Curve)& C, Standard_OStream& S, const Standard_Boolean c = Standard_True) ;
  
  Standard_EXPORT   Standard_OStream& Dump (Standard_OStream& OS, const Standard_Boolean fk = Standard_False, const Standard_Boolean ct = Standard_True)  const;
  
  Standard_EXPORT   Standard_OStream& DumpGeometry (Standard_OStream& OS, const Standard_Boolean fk = Standard_False, const Standard_Boolean ct = Standard_True)  const;
  
  Standard_EXPORT   Standard_OStream& DumpGeometry (const TopOpeBRepDS_Kind K, Standard_OStream& OS, const Standard_Boolean fk = Standard_False, const Standard_Boolean ct = Standard_True)  const;
  
  Standard_EXPORT   Standard_OStream& DumpGeometry (const TopOpeBRepDS_Kind K, const Standard_Integer I, Standard_OStream& OS, const Standard_Boolean fk = Standard_False, const Standard_Boolean ct = Standard_True)  const;
  
  Standard_EXPORT   Standard_OStream& DumpTopology (Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpTopology (const TopOpeBRepDS_Kind K, Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpTopology (const TopAbs_ShapeEnum T, Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpTopology (const TopOpeBRepDS_Kind K, const Standard_Integer I, Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpTopology (const TopAbs_ShapeEnum T, const Standard_Integer I, Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpSectionEdge (const TopOpeBRepDS_Kind K, Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpSectionEdge (const TopOpeBRepDS_Kind K, const Standard_Integer I, Standard_OStream& OS)  const;
  
  Standard_EXPORT   TCollection_AsciiString SDumpRefOri (const TopOpeBRepDS_Kind K, const Standard_Integer I)  const;
  
  Standard_EXPORT   TCollection_AsciiString SDumpRefOri (const TopoDS_Shape& S)  const;
  
  Standard_EXPORT   Standard_OStream& DumpRefOri (const TopOpeBRepDS_Kind K, const Standard_Integer I, Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpRefOri (const TopoDS_Shape& S, Standard_OStream& OS)  const;
  
  Standard_EXPORT   Standard_OStream& DumpLOI (const TopOpeBRepDS_ListOfInterference& L, Standard_OStream& O, const TCollection_AsciiString& s)  const;
  
  Standard_EXPORT   Standard_OStream& DumpI (const Handle(TopOpeBRepDS_Interference)& I, Standard_OStream& O, const TCollection_AsciiString& s1, const TCollection_AsciiString& s2)  const;
  
  Standard_EXPORT   TCollection_AsciiString SPrintShape (const Standard_Integer I)  const;
  
  Standard_EXPORT   TCollection_AsciiString SPrintShape (const TopoDS_Shape& S)  const;
  
  Standard_EXPORT   TCollection_AsciiString SPrintShapeRefOri (const TopoDS_Shape& S, const TCollection_AsciiString& B = "")  const;
  
  Standard_EXPORT   TCollection_AsciiString SPrintShapeRefOri (const TopTools_ListOfShape& L, const TCollection_AsciiString& B = "")  const;




protected:





private:



  Handle(TopOpeBRepDS_HDataStructure) myHDS;


};







#endif // _TopOpeBRepDS_Dumper_HeaderFile
