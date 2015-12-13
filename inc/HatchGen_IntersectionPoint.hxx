// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HatchGen_IntersectionPoint_HeaderFile
#define _HatchGen_IntersectionPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <TopAbs_Orientation.hxx>
#include <TopAbs_State.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>



class HatchGen_IntersectionPoint 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Sets the index of the supporting curve.
  Standard_EXPORT   void SetIndex (const Standard_Integer Index) ;
  
  //! Returns the index of the supporting curve.
  Standard_EXPORT   Standard_Integer Index()  const;
  
  //! Sets the parameter on the curve.
  Standard_EXPORT   void SetParameter (const Standard_Real Parameter) ;
  
  //! Returns the parameter on the curve.
  Standard_EXPORT   Standard_Real Parameter()  const;
  
  //! Sets the position of the point on the curve.
  Standard_EXPORT   void SetPosition (const TopAbs_Orientation Position) ;
  
  //! Returns the position of the point on the curve.
  Standard_EXPORT   TopAbs_Orientation Position()  const;
  
  //! Sets the transition state before the intersection.
  Standard_EXPORT   void SetStateBefore (const TopAbs_State State) ;
  
  //! Returns the transition state before the intersection.
  Standard_EXPORT   TopAbs_State StateBefore()  const;
  
  //! Sets the transition state after the intersection.
  Standard_EXPORT   void SetStateAfter (const TopAbs_State State) ;
  
  //! Returns the transition state after of the intersection.
  Standard_EXPORT   TopAbs_State StateAfter()  const;
  
  //! Sets the flag that the point is the beginning of a segment.
  Standard_EXPORT   void SetSegmentBeginning (const Standard_Boolean State = Standard_True) ;
  
  //! Returns the flag that the point is the beginning of a segment.
  Standard_EXPORT   Standard_Boolean SegmentBeginning()  const;
  
  //! Sets the flag that the point is the end of a segment.
  Standard_EXPORT   void SetSegmentEnd (const Standard_Boolean State = Standard_True) ;
  
  //! Returns the flag that the point is the end of a segment.
  Standard_EXPORT   Standard_Boolean SegmentEnd()  const;
  
  //! Dump of the point on element.
  Standard_EXPORT virtual   void Dump (const Standard_Integer Index = 0)  const = 0;




protected:

  
  //! Creates an empty intersection point.
  Standard_EXPORT HatchGen_IntersectionPoint();


  Standard_Integer myIndex;
  Standard_Real myParam;
  TopAbs_Orientation myPosit;
  TopAbs_State myBefore;
  TopAbs_State myAfter;
  Standard_Boolean mySegBeg;
  Standard_Boolean mySegEnd;


private:





};







#endif // _HatchGen_IntersectionPoint_HeaderFile
