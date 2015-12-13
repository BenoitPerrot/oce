// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HatchGen_PointOnElement_HeaderFile
#define _HatchGen_PointOnElement_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <HatchGen_IntersectionType.hxx>
#include <HatchGen_IntersectionPoint.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class IntRes2d_IntersectionPoint;



class HatchGen_PointOnElement  : public HatchGen_IntersectionPoint
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! ---Purpose; Creates an empty point on element
  Standard_EXPORT HatchGen_PointOnElement();
  
  //! Creates a point from an other.
  Standard_EXPORT HatchGen_PointOnElement(const HatchGen_PointOnElement& Point);
  
  //! Creates a point from an intersection point.
  Standard_EXPORT HatchGen_PointOnElement(const IntRes2d_IntersectionPoint& Point);
  
  //! Sets the intersection type at this point.
      void SetIntersectionType (const HatchGen_IntersectionType Type) ;
  
  //! Returns the intersection type at this point.
      HatchGen_IntersectionType IntersectionType()  const;
  
  //! Tests if the point is identical to an other.
  //! That is to say :
  //! P1.myIndex  = P2.myIndex
  //! Abs (P1.myParam - P2.myParam) <= Confusion
  //! P1.myPosit  = P2.myPosit
  //! P1.myBefore = P2.myBefore
  //! P1.myAfter  = P2.myAfter
  //! P1.mySegBeg = P2.mySegBeg
  //! P1.mySegEnd = P2.mySegEnd
  //! P1.myType   = P2.myType
  Standard_EXPORT   Standard_Boolean IsIdentical (const HatchGen_PointOnElement& Point, const Standard_Real Confusion)  const;
  
  //! Tests if the point is different from an other.
  Standard_EXPORT   Standard_Boolean IsDifferent (const HatchGen_PointOnElement& Point, const Standard_Real Confusion)  const;
  
  //! Dump of the point on element.
  Standard_EXPORT   void Dump (const Standard_Integer Index = 0)  const;




protected:



  HatchGen_IntersectionType myType;


private:





};


#include <HatchGen_PointOnElement.lxx>





#endif // _HatchGen_PointOnElement_HeaderFile
