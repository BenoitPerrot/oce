// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_CurveStyleFontPattern_HeaderFile
#define _StepVisual_CurveStyleFontPattern_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_CurveStyleFontPattern.hxx>

#include <Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>



class StepVisual_CurveStyleFontPattern : public MMgt_TShared
{

public:

  
  //! Returns a CurveStyleFontPattern
  Standard_EXPORT StepVisual_CurveStyleFontPattern();
  
  Standard_EXPORT virtual   void Init (const Standard_Real aVisibleSegmentLength, const Standard_Real aInvisibleSegmentLength) ;
  
  Standard_EXPORT   void SetVisibleSegmentLength (const Standard_Real aVisibleSegmentLength) ;
  
  Standard_EXPORT   Standard_Real VisibleSegmentLength()  const;
  
  Standard_EXPORT   void SetInvisibleSegmentLength (const Standard_Real aInvisibleSegmentLength) ;
  
  Standard_EXPORT   Standard_Real InvisibleSegmentLength()  const;




  DEFINE_STANDARD_RTTI(StepVisual_CurveStyleFontPattern)

protected:




private: 


  Standard_Real visibleSegmentLength;
  Standard_Real invisibleSegmentLength;


};







#endif // _StepVisual_CurveStyleFontPattern_HeaderFile
