// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_Drawing_HeaderFile
#define _IGESDraw_Drawing_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESDraw_Drawing.hxx>

#include <Handle_IGESDraw_HArray1OfViewKindEntity.hxx>
#include <Handle_TColgp_HArray1OfXY.hxx>
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_IGESData_ViewKindEntity.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class IGESDraw_HArray1OfViewKindEntity;
class TColgp_HArray1OfXY;
class IGESData_HArray1OfIGESEntity;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class IGESData_ViewKindEntity;
class gp_Pnt2d;
class IGESData_IGESEntity;
class gp_XY;
class gp_XYZ;


//! defines IGESDrawing, Type <404> Form <0>
//! in package IGESDraw
//!
//! Specifies a drawing as a collection of annotation entities
//! defined in drawing space, and views which together
//! constitute a single representation of a part
class IGESDraw_Drawing : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDraw_Drawing();
  
  //! This method is used to set the fields of the class
  //! Drawing
  //! - allViews       : Pointers to DEs of View entities
  //! - allViewOrigins : Origin coordinates of transformed Views
  //! - allAnnotations : Pointers to DEs of Annotation entities
  //! raises exception if Lengths of allViews and allViewOrigins are
  //! not same.
  Standard_EXPORT   void Init (const Handle(IGESDraw_HArray1OfViewKindEntity)& allViews, const Handle(TColgp_HArray1OfXY)& allViewOrigins, const Handle(IGESData_HArray1OfIGESEntity)& allAnnotations) ;
  
  //! returns the number of view pointers in <me>
  Standard_EXPORT   Standard_Integer NbViews()  const;
  
  //! returns the ViewKindEntity indicated by ViewIndex
  //! raises an exception if ViewIndex <= 0 or ViewIndex > NbViews().
  Standard_EXPORT   Handle(IGESData_ViewKindEntity) ViewItem (const Standard_Integer ViewIndex)  const;
  
  //! returns the Drawing space coordinates of the origin of the
  //! Transformed view indicated by TViewIndex
  //! raises an exception if TViewIndex <= 0 or TViewIndex > NbViews().
  Standard_EXPORT   gp_Pnt2d ViewOrigin (const Standard_Integer TViewIndex)  const;
  
  //! returns the number of Annotation entities in <me>
  Standard_EXPORT   Standard_Integer NbAnnotations()  const;
  
  //! returns the Annotation entity in this Drawing, indicated by the
  //! AnnotationIndex
  //! raises an exception if AnnotationIndex <= 0 or
  //! AnnotationIndex > NbAnnotations().
  Standard_EXPORT   Handle(IGESData_IGESEntity) Annotation (const Standard_Integer AnnotationIndex)  const;
  
  Standard_EXPORT   gp_XY ViewToDrawing (const Standard_Integer NumView, const gp_XYZ& ViewCoords)  const;
  
  //! Returns the Drawing Unit Value if it is specified (by a
  //! specific property entity)
  //! If not specified, returns False, and val as zero :
  //! unit to consider is then the model unit in GlobalSection
  Standard_EXPORT   Standard_Boolean DrawingUnit (Standard_Real& value)  const;
  
  //! Returns the Drawing Size if it is specified (by a
  //! specific property entity)
  //! If not specified, returns False, and X,Y as zero :
  //! unit to consider is then the model unit in GlobalSection
  Standard_EXPORT   Standard_Boolean DrawingSize (Standard_Real& X, Standard_Real& Y)  const;




  DEFINE_STANDARD_RTTI(IGESDraw_Drawing)

protected:




private: 


  Handle(IGESDraw_HArray1OfViewKindEntity) theViews;
  Handle(TColgp_HArray1OfXY) theViewOrigins;
  Handle(IGESData_HArray1OfIGESEntity) theAnnotations;


};







#endif // _IGESDraw_Drawing_HeaderFile
