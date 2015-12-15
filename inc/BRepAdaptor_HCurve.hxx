// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_HCurve_HeaderFile
#define _BRepAdaptor_HCurve_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepAdaptor_HCurve.hxx>

#include <BRepAdaptor_Curve.hxx>
#include <Geometry/Adaptor3d/Adaptor3d_HCurve.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class BRepAdaptor_Curve;
class Adaptor3d_Curve;



class BRepAdaptor_HCurve : public Adaptor3d_HCurve
{

public:

  
  Standard_EXPORT BRepAdaptor_HCurve();
  
  Standard_EXPORT BRepAdaptor_HCurve(const BRepAdaptor_Curve& C);
  
  Standard_EXPORT   void Set (const BRepAdaptor_Curve& C) ;
  
  Standard_EXPORT  const  Adaptor3d_Curve& Curve()  const;
  
  Standard_EXPORT   Adaptor3d_Curve& GetCurve() ;
  
      BRepAdaptor_Curve& ChangeCurve() ;




  DEFINE_STANDARD_RTTI(BRepAdaptor_HCurve)

protected:


  BRepAdaptor_Curve myCurve;


private: 




};

#define TheCurve BRepAdaptor_Curve
#define TheCurve_hxx <BRepAdaptor_Curve.hxx>
#define Adaptor3d_GenHCurve BRepAdaptor_HCurve
#define Adaptor3d_GenHCurve_hxx <BRepAdaptor_HCurve.hxx>
#define Handle_Adaptor3d_GenHCurve Handle_BRepAdaptor_HCurve
#define Adaptor3d_GenHCurve_Type_() BRepAdaptor_HCurve_Type_()

#include <Geometry/Adaptor3d/Adaptor3d_GenHCurve.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_hxx
#undef Handle_Adaptor3d_GenHCurve
#undef Adaptor3d_GenHCurve_Type_




#endif // _BRepAdaptor_HCurve_HeaderFile
