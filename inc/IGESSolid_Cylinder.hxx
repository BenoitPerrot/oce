// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_Cylinder_HeaderFile
#define _IGESSolid_Cylinder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_Cylinder.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <gp_XYZ.hxx>
#include <IGESData_IGESEntity.hxx>
class gp_XYZ;
class gp_Pnt;
class gp_Dir;


//! defines Cylinder, Type <154> Form Number <0>
//! in package IGESSolid
//! This defines a solid cylinder
class IGESSolid_Cylinder : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_Cylinder();
  
  //! This method is used to set the fields of the class
  //! Cylinder
  //! - aHeight : Cylinder height
  //! - aRadius : Cylinder radius
  //! - aCenter : First face center coordinates (default (0,0,0))
  //! - anAxis  : Unit vector in axis direction (default (0,0,1))
  Standard_EXPORT   void Init (const Standard_Real aHeight, const Standard_Real aRadius, const gp_XYZ& aCenter, const gp_XYZ& anAxis) ;
  
  //! returns the cylinder height
  Standard_EXPORT   Standard_Real Height()  const;
  
  //! returns the cylinder radius
  Standard_EXPORT   Standard_Real Radius()  const;
  
  //! returns the first face center coordinates.
  Standard_EXPORT   gp_Pnt FaceCenter()  const;
  
  //! returns the first face center after applying TransformationMatrix
  Standard_EXPORT   gp_Pnt TransformedFaceCenter()  const;
  
  //! returns the vector in axis direction
  Standard_EXPORT   gp_Dir Axis()  const;
  
  //! returns the vector in axis direction after applying
  //! TransformationMatrix
  Standard_EXPORT   gp_Dir TransformedAxis()  const;




  DEFINE_STANDARD_RTTI(IGESSolid_Cylinder)

protected:




private: 


  Standard_Real theHeight;
  Standard_Real theRadius;
  gp_XYZ theFaceCenter;
  gp_XYZ theAxis;


};







#endif // _IGESSolid_Cylinder_HeaderFile
