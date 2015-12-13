// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_SurfaceCurveInterference_HeaderFile
#define _TopOpeBRepDS_SurfaceCurveInterference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepDS_SurfaceCurveInterference.hxx>

#include <Handle_Geom2d_Curve.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Geom2d_Curve;
class TopOpeBRepDS_Transition;
class TopOpeBRepDS_Interference;


//! an interference with a 2d curve
class TopOpeBRepDS_SurfaceCurveInterference : public TopOpeBRepDS_Interference
{

public:

  
  Standard_EXPORT TopOpeBRepDS_SurfaceCurveInterference();
  
  Standard_EXPORT TopOpeBRepDS_SurfaceCurveInterference(const TopOpeBRepDS_Transition& Transition, const TopOpeBRepDS_Kind SupportType, const Standard_Integer Support, const TopOpeBRepDS_Kind GeometryType, const Standard_Integer Geometry, const Handle(Geom2d_Curve)& PC);
  
  Standard_EXPORT TopOpeBRepDS_SurfaceCurveInterference(const Handle(TopOpeBRepDS_Interference)& I);
  
  Standard_EXPORT  const  Handle(Geom2d_Curve)& PCurve()  const;
  
  Standard_EXPORT   void PCurve (const Handle(Geom2d_Curve)& PC) ;
  
  Standard_EXPORT   Standard_OStream& DumpPCurve (Standard_OStream& OS, const Standard_Boolean compact = Standard_True)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& OS)  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_SurfaceCurveInterference)

protected:




private: 


  Handle(Geom2d_Curve) myPCurve;


};







#endif // _TopOpeBRepDS_SurfaceCurveInterference_HeaderFile
