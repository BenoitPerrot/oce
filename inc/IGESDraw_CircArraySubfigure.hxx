// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_CircArraySubfigure_HeaderFile
#define _IGESDraw_CircArraySubfigure_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDraw_CircArraySubfigure.hxx>

#include <Handle_IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <gp_XYZ.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class IGESData_IGESEntity;
class TColStd_HArray1OfInteger;
class Standard_OutOfRange;
class gp_XYZ;
class gp_Pnt;


//! Defines IGES Circular Array Subfigure Instance Entity,
//! Type <414> Form Number <0> in package IGESDraw
//!
//! Used to produce copies of object called the base entity,
//! arranging them around the edge of an imaginary circle
//! whose center and radius are specified
class IGESDraw_CircArraySubfigure : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDraw_CircArraySubfigure();
  
  //! This method is used to set the fields of the class
  //! CircArraySubfigure
  //! - aBase     : Base entity
  //! - aNumLocs  : Total number of possible instance locations
  //! - aCenter   : Coordinates of Center of imaginary circle
  //! - aRadius   : Radius of imaginary circle
  //! - aStAngle  : Start angle in radians
  //! - aDelAngle : Delta angle in radians
  //! - aFlag     : DO-DON'T flag to control which portion to
  //! display
  //! - allNumPos : All position to be or not to be processed
  Standard_EXPORT   void Init (const Handle(IGESData_IGESEntity)& aBase, const Standard_Integer aNumLocs, const gp_XYZ& aCenter, const Standard_Real aRadius, const Standard_Real aStAngle, const Standard_Real aDelAngle, const Standard_Integer aFlag, const Handle(TColStd_HArray1OfInteger)& allNumPos) ;
  
  //! returns the base entity, copies of which are produced
  Standard_EXPORT   Handle(IGESData_IGESEntity) BaseEntity()  const;
  
  //! returns total number of possible instance locations
  Standard_EXPORT   Standard_Integer NbLocations()  const;
  
  //! returns the center of the imaginary circle
  Standard_EXPORT   gp_Pnt CenterPoint()  const;
  
  //! returns the Transformed center of the imaginary circle
  Standard_EXPORT   gp_Pnt TransformedCenterPoint()  const;
  
  //! returns the radius of the imaginary circle
  Standard_EXPORT   Standard_Real CircleRadius()  const;
  
  //! returns the start angle in radians
  Standard_EXPORT   Standard_Real StartAngle()  const;
  
  //! returns the delta angle in radians
  Standard_EXPORT   Standard_Real DeltaAngle()  const;
  
  //! returns 0 if all elements to be displayed
  Standard_EXPORT   Standard_Integer ListCount()  const;
  
  //! returns True if (ListCount = 0) all elements are to be displayed
  Standard_EXPORT   Standard_Boolean DisplayFlag()  const;
  
  //! returns 0 if half or fewer of the elements of  the array are defined
  //! 1 if half or more of the elements are defined
  Standard_EXPORT   Standard_Boolean DoDontFlag()  const;
  
  //! returns whether Index is to be processed (DO)
  //! or not to be processed(DON'T)
  //! if (ListCount = 0) return theDoDontFlag
  //! raises exception if Index <= 0 or Index > ListCount().
  Standard_EXPORT   Standard_Boolean PositionNum (const Standard_Integer Index)  const;
  
  //! returns the Index'th value position
  //! raises exception if Index <= 0 or Index > ListCount().
  Standard_EXPORT   Standard_Integer ListPosition (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESDraw_CircArraySubfigure)

protected:




private: 


  Handle(IGESData_IGESEntity) theBaseEntity;
  Standard_Integer theNbLocations;
  gp_XYZ theCenter;
  Standard_Real theRadius;
  Standard_Real theStartAngle;
  Standard_Real theDeltaAngle;
  Standard_Integer theDoDontFlag;
  Handle(TColStd_HArray1OfInteger) thePositions;


};







#endif // _IGESDraw_CircArraySubfigure_HeaderFile
