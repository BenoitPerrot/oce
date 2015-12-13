// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter_HeaderFile
#define _Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Collections/TColgp_Array1OfPnt2d.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Intf_Polygon2d.hxx>
class Standard_OutOfRange;
class Adaptor2d_Curve2d;
class Geom2dInt_Geom2dCurveTool;
class IntRes2d_Domain;
class Bnd_Box2d;
class gp_Pnt2d;



class Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter  : public Intf_Polygon2d
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter(const Adaptor2d_Curve2d& Curve, const Standard_Integer NbPnt, const IntRes2d_Domain& Domain, const Standard_Real Tol);
  
  Standard_EXPORT Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter(const Adaptor2d_Curve2d& Curve, const Standard_Integer NbPnt, const IntRes2d_Domain& Domain, const Standard_Real Tol, const Bnd_Box2d& OtherBox);
  
  Standard_EXPORT   void ComputeWithBox (const Adaptor2d_Curve2d& Curve, const Bnd_Box2d& OtherBox) ;
  
    virtual   Standard_Real DeflectionOverEstimation()  const;
  
      void SetDeflectionOverEstimation (const Standard_Real x) ;
  
      void Closed (const Standard_Boolean clos) ;
  
    virtual   Standard_Integer NbSegments()  const;
  
  Standard_EXPORT virtual   void Segment (const Standard_Integer theIndex, gp_Pnt2d& theBegin, gp_Pnt2d& theEnd)  const;
  
      Standard_Real InfParameter()  const;
  
      Standard_Real SupParameter()  const;
  
  Standard_EXPORT   Standard_Boolean AutoIntersectionIsPossible()  const;
  
  Standard_EXPORT   Standard_Real ApproxParamOnCurve (const Standard_Integer Index, const Standard_Real ParamOnLine)  const;
  
      Standard_Integer CalculRegion (const Standard_Real x, const Standard_Real y, const Standard_Real x1, const Standard_Real x2, const Standard_Real y1, const Standard_Real y2)  const;
  
  Standard_EXPORT   void Dump()  const;




protected:





private:



  Standard_Real TheDeflection;
  Standard_Integer NbPntIn;
  Standard_Integer TheMaxNbPoints;
  TColgp_Array1OfPnt2d ThePnts;
  TColStd_Array1OfReal TheParams;
  TColStd_Array1OfInteger TheIndex;
  Standard_Boolean ClosedPolygon;
  Standard_Real Binf;
  Standard_Real Bsup;


};

#define TheCurve Adaptor2d_Curve2d
#define TheCurve_hxx <Adaptor2d_Curve2d.hxx>
#define TheCurveTool Geom2dInt_Geom2dCurveTool
#define TheCurveTool_hxx <Geom2dInt_Geom2dCurveTool.hxx>
#define IntCurve_Polygon2dGen Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter
#define IntCurve_Polygon2dGen_hxx <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>

#include <IntCurve_Polygon2dGen.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef TheCurveTool
#undef TheCurveTool_hxx
#undef IntCurve_Polygon2dGen
#undef IntCurve_Polygon2dGen_hxx




#endif // _Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter_HeaderFile
