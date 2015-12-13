// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Direction_HeaderFile
#define _StepGeom_Direction_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepGeom_Direction.hxx>

#include <Handle_TColStd_HArray1OfReal.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;



class StepGeom_Direction : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Returns a Direction
  Standard_EXPORT StepGeom_Direction();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TColStd_HArray1OfReal)& aDirectionRatios) ;
  
  Standard_EXPORT   void SetDirectionRatios (const Handle(TColStd_HArray1OfReal)& aDirectionRatios) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) DirectionRatios()  const;
  
  Standard_EXPORT   Standard_Real DirectionRatiosValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbDirectionRatios()  const;




  DEFINE_STANDARD_RTTI(StepGeom_Direction)

protected:




private: 


  Handle(TColStd_HArray1OfReal) directionRatios;


};







#endif // _StepGeom_Direction_HeaderFile
