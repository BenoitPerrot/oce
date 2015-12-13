// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_HCurve2d_HeaderFile
#define _BRepAdaptor_HCurve2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_BRepAdaptor_HCurve2d.hxx>

#include <BRepAdaptor_Curve2d.hxx>
#include <Adaptor2d_HCurve2d.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class BRepAdaptor_Curve2d;
class Adaptor2d_Curve2d;



class BRepAdaptor_HCurve2d : public Adaptor2d_HCurve2d
{

public:

  
  Standard_EXPORT BRepAdaptor_HCurve2d();
  
  Standard_EXPORT BRepAdaptor_HCurve2d(const BRepAdaptor_Curve2d& C);
  
  Standard_EXPORT   void Set (const BRepAdaptor_Curve2d& C) ;
  
  Standard_EXPORT  const  Adaptor2d_Curve2d& Curve2d()  const;
  
      BRepAdaptor_Curve2d& ChangeCurve2d() ;




  DEFINE_STANDARD_RTTI(BRepAdaptor_HCurve2d)

protected:


  BRepAdaptor_Curve2d myCurve;


private: 




};

#define TheCurve BRepAdaptor_Curve2d
#define TheCurve_hxx <BRepAdaptor_Curve2d.hxx>
#define Adaptor2d_GenHCurve2d BRepAdaptor_HCurve2d
#define Adaptor2d_GenHCurve2d_hxx <BRepAdaptor_HCurve2d.hxx>
#define Handle_Adaptor2d_GenHCurve2d Handle_BRepAdaptor_HCurve2d
#define Adaptor2d_GenHCurve2d_Type_() BRepAdaptor_HCurve2d_Type_()

#include <Adaptor2d_GenHCurve2d.lxx>

#undef TheCurve
#undef TheCurve_hxx
#undef Adaptor2d_GenHCurve2d
#undef Adaptor2d_GenHCurve2d_hxx
#undef Handle_Adaptor2d_GenHCurve2d
#undef Adaptor2d_GenHCurve2d_Type_




#endif // _BRepAdaptor_HCurve2d_HeaderFile
