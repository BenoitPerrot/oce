// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_CircularGrid_HeaderFile
#define _Aspect_CircularGrid_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Aspect_CircularGrid.hxx>

#include <Foundation/Quantity/Quantity_Length.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Aspect_Grid.hxx>
#include <Foundation/Quantity/Quantity_PlaneAngle.hxx>
class Standard_NegativeValue;
class Standard_NullValue;
class Standard_NumericError;



class Aspect_CircularGrid : public Aspect_Grid
{

public:

  
  //! creates a new grid. By default this grid is not
  //! active.
  Standard_EXPORT Aspect_CircularGrid(const Quantity_Length aRadiusStep, const Standard_Integer aDivisionNumber, const Quantity_Length XOrigin = 0, const Quantity_Length anYOrigin = 0, const Quantity_PlaneAngle aRotationAngle = 0);
  
  //! defines the x step of the grid.
  Standard_EXPORT   void SetRadiusStep (const Quantity_Length aStep) ;
  
  //! defines the step of the grid.
  Standard_EXPORT   void SetDivisionNumber (const Standard_Integer aNumber) ;
  
  Standard_EXPORT   void SetGridValues (const Quantity_Length XOrigin, const Quantity_Length YOrigin, const Quantity_Length RadiusStep, const Standard_Integer DivisionNumber, const Quantity_PlaneAngle RotationAngle) ;
  
  //! returns the point of the grid the closest to the point X,Y
  Standard_EXPORT   void Compute (const Quantity_Length X, const Quantity_Length Y, Quantity_Length& gridX, Quantity_Length& gridY)  const;
  
  //! returns the x step of the grid.
  Standard_EXPORT   Quantity_Length RadiusStep()  const;
  
  //! returns the x step of the grid.
  Standard_EXPORT   Standard_Integer DivisionNumber()  const;
  
  Standard_EXPORT   void Init() ;




  DEFINE_STANDARD_RTTI(Aspect_CircularGrid)

protected:




private: 


  Quantity_Length myRadiusStep;
  Standard_Integer myDivisionNumber;
  Standard_Real myAlpha;
  Standard_Real myA1;
  Standard_Real myB1;


};







#endif // _Aspect_CircularGrid_HeaderFile
