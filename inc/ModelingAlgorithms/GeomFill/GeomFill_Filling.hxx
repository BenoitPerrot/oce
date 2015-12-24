// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_Filling_HeaderFile
#define _GeomFill_Filling_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Collections/Handle_TColgp_HArray2OfPnt.hxx>
#include <Foundation/TColStd/Handle_TColStd_HArray2OfReal.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TColgp_HArray2OfPnt;
class TColStd_HArray2OfReal;
class Standard_NoSuchObject;
class TColgp_Array2OfPnt;
class TColStd_Array2OfReal;


//! Root class for Filling;
class GeomFill_Filling 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_Filling();
  
  Standard_EXPORT   Standard_Integer NbUPoles()  const;
  
  Standard_EXPORT   Standard_Integer NbVPoles()  const;
  
  Standard_EXPORT   void Poles (TColgp_Array2OfPnt& Poles)  const;
  
  Standard_EXPORT   Standard_Boolean isRational()  const;
  
  Standard_EXPORT   void Weights (TColStd_Array2OfReal& Weights)  const;




protected:



  Standard_Boolean IsRational;
  Handle(TColgp_HArray2OfPnt) myPoles;
  Handle(TColStd_HArray2OfReal) myWeights;


private:





};







#endif // _GeomFill_Filling_HeaderFile
