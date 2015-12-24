// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_DatumAspect_HeaderFile
#define _Prs3d_DatumAspect_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/Prs3d/Handle_Prs3d_DatumAspect.hxx>

#include <Visualization/Prs3d/Handle_Prs3d_LineAspect.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Quantity/Quantity_Length.hxx>
#include <Visualization/Prs3d/Prs3d_BasicAspect.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Prs3d_LineAspect;


//! A framework to define the display of datums.
class Prs3d_DatumAspect : public Prs3d_BasicAspect
{

public:

  
  //! An empty framework to define the display of datums.
  Standard_EXPORT Prs3d_DatumAspect();
  
  //! Returns the attributes for display of the first axis.
  Standard_EXPORT   Handle(Prs3d_LineAspect) FirstAxisAspect()  const;
  
  //! Returns the attributes for display of the second axis.
  Standard_EXPORT   Handle(Prs3d_LineAspect) SecondAxisAspect()  const;
  
  //! Returns the attributes for display of the third axis.
  Standard_EXPORT   Handle(Prs3d_LineAspect) ThirdAxisAspect()  const;
  
  //! Sets the DrawFirstAndSecondAxis attributes to active.
  Standard_EXPORT   void SetDrawFirstAndSecondAxis (const Standard_Boolean draw) ;
  
  //! Returns true if the first and second axes can be drawn.
  Standard_EXPORT   Standard_Boolean DrawFirstAndSecondAxis()  const;
  
  //! Sets the DrawThirdAxis attributes to active.
  Standard_EXPORT   void SetDrawThirdAxis (const Standard_Boolean draw) ;
  
  //! Returns true if the third axis can be drawn.
  Standard_EXPORT   Standard_Boolean DrawThirdAxis()  const;
  
  //! Sets the lengths L1, L2 and L3 of the three axes.
  Standard_EXPORT   void SetAxisLength (const Standard_Real L1, const Standard_Real L2, const Standard_Real L3) ;
  
  //! Returns the length of the displayed first axis.
  Standard_EXPORT   Quantity_Length FirstAxisLength()  const;
  
  //! Returns the length of the displayed second axis.
  Standard_EXPORT   Quantity_Length SecondAxisLength()  const;
  
  //! Returns the length of the displayed third axis.
  Standard_EXPORT   Quantity_Length ThirdAxisLength()  const;




  DEFINE_STANDARD_RTTI(Prs3d_DatumAspect)

protected:




private: 


  Handle(Prs3d_LineAspect) myFirstAxisAspect;
  Handle(Prs3d_LineAspect) mySecondAxisAspect;
  Handle(Prs3d_LineAspect) myThirdAxisAspect;
  Standard_Boolean myDrawFirstAndSecondAxis;
  Standard_Boolean myDrawThirdAxis;
  Quantity_Length myFirstAxisLength;
  Quantity_Length mySecondAxisLength;
  Quantity_Length myThirdAxisLength;


};







#endif // _Prs3d_DatumAspect_HeaderFile
