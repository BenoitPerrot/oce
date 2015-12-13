// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LProp_CurAndInf_HeaderFile
#define _LProp_CurAndInf_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TColStd/TColStd_SequenceOfReal.hxx>
#include <LProp_SequenceOfCIType.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <LProp_CIType.hxx>
class Standard_OutOfRange;


//! Stores the parameters of a curve 2d or 3d corresponding
//! to the curvature's extremas and the Inflection's Points.
class LProp_CurAndInf 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LProp_CurAndInf();
  
  Standard_EXPORT   void AddInflection (const Standard_Real Param) ;
  
  Standard_EXPORT   void AddExtCur (const Standard_Real Param, const Standard_Boolean IsMin) ;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  //! Returns the number of points.
  //! The Points are stored to increasing parameter.
  Standard_EXPORT   Standard_Integer NbPoints()  const;
  
  //! Returns the parameter of the Nth point.
  //! raises if N not in the range [1,NbPoints()]
  Standard_EXPORT   Standard_Real Parameter (const Standard_Integer N)  const;
  
  //! Returns
  //! - MinCur if the Nth parameter corresponds to
  //! a minimum of the radius of curvature.
  //! - MaxCur if the Nth parameter corresponds to
  //! a maximum of the radius of curvature.
  //! - Inflection if the parameter corresponds to
  //! a point of inflection.
  //! raises if N not in the range [1,NbPoints()]
  Standard_EXPORT   LProp_CIType Type (const Standard_Integer N)  const;




protected:





private:



  TColStd_SequenceOfReal theParams;
  LProp_SequenceOfCIType theTypes;


};







#endif // _LProp_CurAndInf_HeaderFile
