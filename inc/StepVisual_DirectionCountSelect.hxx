// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_DirectionCountSelect_HeaderFile
#define _StepVisual_DirectionCountSelect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>



class StepVisual_DirectionCountSelect 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepVisual_DirectionCountSelect();
  
  Standard_EXPORT   void SetTypeOfContent (const Standard_Integer aTypeOfContent) ;
  
  Standard_EXPORT   Standard_Integer TypeOfContent()  const;
  
  Standard_EXPORT   Standard_Integer UDirectionCount()  const;
  
  Standard_EXPORT   void SetUDirectionCount (const Standard_Integer aUDirectionCount) ;
  
  Standard_EXPORT   Standard_Integer VDirectionCount()  const;
  
  Standard_EXPORT   void SetVDirectionCount (const Standard_Integer aUDirectionCount) ;




protected:





private:



  Standard_Integer theUDirectionCount;
  Standard_Integer theVDirectionCount;
  Standard_Integer theTypeOfContent;


};







#endif // _StepVisual_DirectionCountSelect_HeaderFile
