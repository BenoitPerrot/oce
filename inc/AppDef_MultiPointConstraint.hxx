// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_MultiPointConstraint_HeaderFile
#define _AppDef_MultiPointConstraint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_MMgt_TShared.hxx>
#include <AppParCurves_MultiPoint.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class MMgt_TShared;
class Standard_OutOfRange;
class Standard_ConstructionError;
class Standard_DimensionError;
class TColgp_Array1OfPnt;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec;
class TColgp_Array1OfVec2d;
class gp_Vec;
class gp_Vec2d;


//! Describes a MultiPointConstraint used in a
//! Multiline. MultiPointConstraints are composed
//! of several two or three-dimensional points.
//! The purpose is to define the corresponding
//! points that share a common constraint in order
//! to compute the approximation of several lines in parallel.
//! Notes:
//! -   The order of points of a MultiPointConstraints is very important.
//! Users must give 3D points first, and then 2D points.
//! -   The constraints for the points included in a
//! MultiPointConstraint are always identical for
//! all points, including the parameter.
//! -   If a MultiPointConstraint is a "tangency"
//! point, the point is also a "passing" point.
class AppDef_MultiPointConstraint  : public AppParCurves_MultiPoint
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! creates an undefined MultiPointConstraint.
  Standard_EXPORT AppDef_MultiPointConstraint();
  
  //! constructs a set of Points used to approximate a Multiline.
  //! These Points can be of 2 or 3 dimensions.
  //! Points will be initialized with SetPoint and SetPoint2d.
  Standard_EXPORT AppDef_MultiPointConstraint(const Standard_Integer NbPoints, const Standard_Integer NbPoints2d);
  
  //! creates a MultiPoint only composed of 3D points.
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP);
  
  //! creates a MultiPoint only composed of 2D points.
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt2d& tabP);
  
  //! constructs a set of Points used to approximate a Multiline.
  //! These Points can be of 2 or 3 dimensions.
  //! Points will be initialized with SetPoint and SetPoint2d.
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP, const TColgp_Array1OfPnt2d& tabP2d);
  
  //! creates a MultiPointConstraint with a constraint of
  //! Curvature.
  //! An exception is raised if
  //! (length of <tabP> + length of <tabP2d> ) is different
  //! from (length of <tabVec> + length of <tabVec2d> ) or
  //! from (length of <tabCur> + length of <tabCur2d> )
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP, const TColgp_Array1OfPnt2d& tabP2d, const TColgp_Array1OfVec& tabVec, const TColgp_Array1OfVec2d& tabVec2d, const TColgp_Array1OfVec& tabCur, const TColgp_Array1OfVec2d& tabCur2d);
  
  //! creates a MultiPointConstraint with a constraint of
  //! Tangency.
  //! An exception is raised if
  //! (length of <tabP> + length of <tabP2d> ) is different
  //! from (length of <tabVec> + length of <tabVec2d> )
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP, const TColgp_Array1OfPnt2d& tabP2d, const TColgp_Array1OfVec& tabVec, const TColgp_Array1OfVec2d& tabVec2d);
  
  //! creates a MultiPointConstraint only composed of 3d points
  //! with constraints of curvature.
  //! An exception is raised if the length of tabP is different
  //! from the length of tabVec or from tabCur.
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP, const TColgp_Array1OfVec& tabVec, const TColgp_Array1OfVec& tabCur);
  
  //! creates a MultiPointConstraint only composed of 3d points
  //! with constraints of tangency.
  //! An exception is raised if the length of tabP is different
  //! from the length of tabVec.
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt& tabP, const TColgp_Array1OfVec& tabVec);
  
  //! creates a MultiPointConstraint only composed of 2d points
  //! with constraints of tangency.
  //! An exception is raised if the length of tabP is different
  //! from the length of tabVec2d.
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt2d& tabP2d, const TColgp_Array1OfVec2d& tabVec2d);
  
  //! creates a MultiPointConstraint only composed of 2d points
  //! with constraints of curvature.
  //! An exception is raised if the length of tabP is different
  //! from the length of tabVec2d or from tabCur2d.
  Standard_EXPORT AppDef_MultiPointConstraint(const TColgp_Array1OfPnt2d& tabP2d, const TColgp_Array1OfVec2d& tabVec2d, const TColgp_Array1OfVec2d& tabCur2d);
  
  //! sets the value of the tangency of the point of range
  //! Index.
  //! An exception is raised if Index <0 or if Index > number
  //! of 3d points.
  //! An exception is raised if Tang has an incorrect number of
  //! dimensions.
  Standard_EXPORT   void SetTang (const Standard_Integer Index, const gp_Vec& Tang) ;
  
  //! returns the tangency value of the point of range Index.
  //! An exception is raised if Index < 0 or if Index > number
  //! of 3d points.
  Standard_EXPORT   gp_Vec Tang (const Standard_Integer Index)  const;
  
  //! sets the value of the tangency of the point of range
  //! Index.
  //! An exception is raised if Index <number of 3d points or if
  //! Index > total number of Points
  //! An exception is raised if Tang has an incorrect number of
  //! dimensions.
  Standard_EXPORT   void SetTang2d (const Standard_Integer Index, const gp_Vec2d& Tang2d) ;
  
  //! returns the tangency value of the point of range Index.
  //! An exception is raised if Index < number  of 3d points or
  //! if Index > total number of points.
  Standard_EXPORT   gp_Vec2d Tang2d (const Standard_Integer Index)  const;
  
  //! Vec sets the value of the normal vector at the
  //! point of index Index. The norm of the normal
  //! vector at the point of position Index is set to the normal curvature.
  //! An exception is raised if Index <0 or if Index > number
  //! of 3d points.
  //! An exception is raised if Curv has an incorrect number of
  //! dimensions.
  Standard_EXPORT   void SetCurv (const Standard_Integer Index, const gp_Vec& Curv) ;
  
  //! returns the normal vector at the point of range Index.
  //! An exception is raised if Index < 0 or if Index > number
  //! of 3d points.
  Standard_EXPORT   gp_Vec Curv (const Standard_Integer Index)  const;
  
  //! Vec sets the value of the normal vector at the
  //! point of index Index. The norm of the normal
  //! vector at the point of position Index is set to the normal curvature.
  //! An exception is raised if Index <0 or if Index > number
  //! of 3d points.
  //! An exception is raised if Curv has an incorrect number of
  //! dimensions.
  Standard_EXPORT   void SetCurv2d (const Standard_Integer Index, const gp_Vec2d& Curv2d) ;
  
  //! returns the normal vector at the point of range Index.
  //! An exception is raised if Index < 0 or if Index > number
  //! of 3d points.
  Standard_EXPORT   gp_Vec2d Curv2d (const Standard_Integer Index)  const;
  
  //! returns True if the MultiPoint has a tangency value.
  Standard_EXPORT   Standard_Boolean IsTangencyPoint()  const;
  
  //! returns True if the MultiPoint has a curvature value.
  Standard_EXPORT   Standard_Boolean IsCurvaturePoint()  const;
  
  //! Prints on the stream o information on the current
  //! state of the object.
  //! Is used to redefine the operator <<.
  Standard_EXPORT virtual   void Dump (Standard_OStream& o)  const;




protected:





private:



  Handle(MMgt_TShared) ttabTang;
  Handle(MMgt_TShared) ttabCurv;
  Handle(MMgt_TShared) ttabTang2d;
  Handle(MMgt_TShared) ttabCurv2d;


};







#endif // _AppDef_MultiPointConstraint_HeaderFile
