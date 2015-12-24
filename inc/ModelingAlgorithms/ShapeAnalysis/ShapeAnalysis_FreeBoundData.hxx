// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_FreeBoundData_HeaderFile
#define _ShapeAnalysis_FreeBoundData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/ShapeAnalysis/Handle_ShapeAnalysis_FreeBoundData.hxx>

#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <ModelingData/TopTools/Handle_TopTools_HSequenceOfShape.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TopTools_HSequenceOfShape;
class TopoDS_Wire;


//! This class is intended to represent free bound and to store
//! its properties.
//!
//! This class is used by ShapeAnalysis_FreeBoundsProperties
//! class when storing each free bound and its properties.
//!
//! The properties stored in this class are the following:
//! - area of the contour,
//! - perimeter of the contour,
//! - ratio of average length to average width of the contour,
//! - average width of contour,
//! - notches (narrow 'V'-like sub-contours) on the contour and
//! their maximum width.
//!
//! This class provides methods for setting and getting fields
//! only.
class ShapeAnalysis_FreeBoundData : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT ShapeAnalysis_FreeBoundData();
  
  //! Creates object with contour given in the form of TopoDS_Wire
  Standard_EXPORT ShapeAnalysis_FreeBoundData(const TopoDS_Wire& freebound);
  
  //! Clears all properties of the contour.
  //! Contour bound itself is not cleared.
  Standard_EXPORT   void Clear() ;
  
  //! Sets contour
      void SetFreeBound (const TopoDS_Wire& freebound) ;
  
  //! Sets area of the contour
      void SetArea (const Standard_Real area) ;
  
  //! Sets perimeter of the contour
      void SetPerimeter (const Standard_Real perimeter) ;
  
  //! Sets ratio of average length to average width of the contour
      void SetRatio (const Standard_Real ratio) ;
  
  //! Sets average width of the contour
      void SetWidth (const Standard_Real width) ;
  
  //! Adds notch on the contour with its maximum width
  Standard_EXPORT   void AddNotch (const TopoDS_Wire& notch, const Standard_Real width) ;
  
  //! Returns contour
      TopoDS_Wire FreeBound()  const;
  
  //! Returns area of the contour
      Standard_Real Area()  const;
  
  //! Returns perimeter of the contour
      Standard_Real Perimeter()  const;
  
  //! Returns ratio of average length to average width of the contour
      Standard_Real Ratio()  const;
  
  //! Returns average width of the contour
      Standard_Real Width()  const;
  
  //! Returns number of notches on the contour
      Standard_Integer NbNotches()  const;
  
  //! Returns sequence of notches on the contour
      Handle(TopTools_HSequenceOfShape) Notches()  const;
  
  //! Returns notch on the contour
      TopoDS_Wire Notch (const Standard_Integer index)  const;
  
  //! Returns maximum width of notch specified by its rank number
  //! on the contour
  Standard_EXPORT   Standard_Real NotchWidth (const Standard_Integer index)  const;
  
  //! Returns maximum width of notch specified as TopoDS_Wire
  //! on the contour
  Standard_EXPORT   Standard_Real NotchWidth (const TopoDS_Wire& notch)  const;




  DEFINE_STANDARD_RTTI(ShapeAnalysis_FreeBoundData)

protected:




private: 


  TopoDS_Wire myBound;
  Standard_Real myArea;
  Standard_Real myPerimeter;
  Standard_Real myRatio;
  Standard_Real myWidth;
  Handle(TopTools_HSequenceOfShape) myNotches;
  TopTools_DataMapOfShapeReal myNotchesParams;


};


#include <ModelingAlgorithms/ShapeAnalysis/ShapeAnalysis_FreeBoundData.lxx>





#endif // _ShapeAnalysis_FreeBoundData_HeaderFile
