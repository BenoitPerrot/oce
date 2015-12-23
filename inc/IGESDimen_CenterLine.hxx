// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_CenterLine_HeaderFile
#define _IGESDimen_CenterLine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_CenterLine.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TColgp_HArray1OfXY.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TColgp_HArray1OfXY;
class Standard_OutOfRange;
class gp_Pnt;


//! defines CenterLine, Type <106> Form <20-21>
//! in package IGESDimen
//! Is an entity appearing as crosshairs or as a
//! construction between 2 positions
class IGESDimen_CenterLine : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_CenterLine();
  
  //! This method is used to set the fields of the class
  //! CenterLine
  //! - aDataType      : Interpretation Flag, always = 1
  //! - aZDisplacement : Common z displacement
  //! - dataPnts       : Data points (x and y)
  Standard_EXPORT   void Init (const Standard_Integer aDataType, const Standard_Real aZdisp, const Handle(TColgp_HArray1OfXY)& dataPnts) ;
  
  //! Sets FormNumber to 20 if <mode> is True, 21 else
  Standard_EXPORT   void SetCrossHair (const Standard_Boolean mode) ;
  
  //! returns Interpretation Flag : IP = 1.
  Standard_EXPORT   Standard_Integer Datatype()  const;
  
  //! returns Number of Data Points.
  Standard_EXPORT   Standard_Integer NbPoints()  const;
  
  //! returns Common Z displacement.
  Standard_EXPORT   Standard_Real ZDisplacement()  const;
  
  //! returns the data point as Pnt from gp.
  //! raises exception if Index <= 0 or Index > NbPoints()
  Standard_EXPORT   gp_Pnt Point (const Standard_Integer Index)  const;
  
  //! returns the data point as Pnt from gp after Transformation.
  //! raises exception if Index <= 0 or Index > NbPoints()
  Standard_EXPORT   gp_Pnt TransformedPoint (const Standard_Integer Index)  const;
  
  //! returns True if Form is 20.
  Standard_EXPORT   Standard_Boolean IsCrossHair()  const;




  DEFINE_STANDARD_RTTI(IGESDimen_CenterLine)

protected:




private: 


  Standard_Integer theDatatype;
  Standard_Real theZDisplacement;
  Handle(TColgp_HArray1OfXY) theDataPoints;


};







#endif // _IGESDimen_CenterLine_HeaderFile
