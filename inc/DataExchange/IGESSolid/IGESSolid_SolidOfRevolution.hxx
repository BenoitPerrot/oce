// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_SolidOfRevolution_HeaderFile
#define _IGESSolid_SolidOfRevolution_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESSolid/Handle_IGESSolid_SolidOfRevolution.hxx>

#include <DataExchange/IGESData/Handle_IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class IGESData_IGESEntity;
class gp_XYZ;
class gp_Pnt;
class gp_Dir;


//! defines SolidOfRevolution, Type <162> Form Number <0,1>
//! in package IGESSolid
//! This entity is defined by revolving the area determined
//! by a planar curve about a specified axis through a given
//! fraction of full rotation.
class IGESSolid_SolidOfRevolution : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_SolidOfRevolution();
  
  //! This method is used to set the fields of the class
  //! SolidOfRevolution
  //! - aCurve     : the curve entity that is to be revolved
  //! - aFract     : the fraction of full rotation (default 1.0)
  //! - aAxisPnt   : the point on the axis
  //! - aDirection : the direction of the axis
  Standard_EXPORT   void Init (const Handle(IGESData_IGESEntity)& aCurve, const Standard_Real aFract, const gp_XYZ& aAxisPnt, const gp_XYZ& aDirection) ;
  
  //! Sets the Curve to be by default, Closed to Axis (Form 0)
  //! if <mode> is True, Closed to Itself (Form 1) else
  Standard_EXPORT   void SetClosedToAxis (const Standard_Boolean mode) ;
  
  //! Returns True if Form Number = 0
  //! if Form no is 0, then the curve is closed to axis
  //! if 1, the curve is closed to itself.
  Standard_EXPORT   Standard_Boolean IsClosedToAxis()  const;
  
  //! returns the curve entity that is to be revolved
  Standard_EXPORT   Handle(IGESData_IGESEntity) Curve()  const;
  
  //! returns the fraction of full rotation that the curve is to
  //! be rotated
  Standard_EXPORT   Standard_Real Fraction()  const;
  
  //! returns the point on the axis
  Standard_EXPORT   gp_Pnt AxisPoint()  const;
  
  //! returns the point on the axis after applying Trans.Matrix
  Standard_EXPORT   gp_Pnt TransformedAxisPoint()  const;
  
  //! returns the direction of the axis
  Standard_EXPORT   gp_Dir Axis()  const;
  
  //! returns the direction of the axis after applying
  //! TransformationMatrix
  Standard_EXPORT   gp_Dir TransformedAxis()  const;




  DEFINE_STANDARD_RTTI(IGESSolid_SolidOfRevolution)

protected:




private: 


  Handle(IGESData_IGESEntity) theCurve;
  Standard_Real theFraction;
  gp_XYZ theAxisPoint;
  gp_XYZ theAxis;


};







#endif // _IGESSolid_SolidOfRevolution_HeaderFile
