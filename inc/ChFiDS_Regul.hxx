// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_Regul_HeaderFile
#define _ChFiDS_Regul_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>


//! Storage of  a curve  and its 2 faces or surfaces of  support.
class ChFiDS_Regul 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ChFiDS_Regul();
  
  Standard_EXPORT   void SetCurve (const Standard_Integer IC) ;
  
  Standard_EXPORT   void SetS1 (const Standard_Integer IS1, const Standard_Boolean IsFace = Standard_True) ;
  
  Standard_EXPORT   void SetS2 (const Standard_Integer IS2, const Standard_Boolean IsFace = Standard_True) ;
  
  Standard_EXPORT   Standard_Boolean IsSurface1()  const;
  
  Standard_EXPORT   Standard_Boolean IsSurface2()  const;
  
  Standard_EXPORT   Standard_Integer Curve()  const;
  
  Standard_EXPORT   Standard_Integer S1()  const;
  
  Standard_EXPORT   Standard_Integer S2()  const;




protected:





private:



  Standard_Integer icurv;
  Standard_Integer is1;
  Standard_Integer is2;


};







#endif // _ChFiDS_Regul_HeaderFile
