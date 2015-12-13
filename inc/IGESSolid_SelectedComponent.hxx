// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_SelectedComponent_HeaderFile
#define _IGESSolid_SelectedComponent_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_SelectedComponent.hxx>

#include <Handle_IGESSolid_BooleanTree.hxx>
#include <gp_XYZ.hxx>
#include <IGESData_IGESEntity.hxx>
class IGESSolid_BooleanTree;
class gp_XYZ;
class gp_Pnt;


//! defines SelectedComponent, Type <182> Form Number <0>
//! in package IGESSolid
//! The Selected Component entity provides a means of
//! selecting one component of a disjoint CSG solid
class IGESSolid_SelectedComponent : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESSolid_SelectedComponent();
  
  //! This method is used to set the fields of the class
  //! SelectedComponent
  //! - anEntity  : the Boolean tree entity
  //! - selectPnt : Point in or on the desired component
  Standard_EXPORT   void Init (const Handle(IGESSolid_BooleanTree)& anEntity, const gp_XYZ& selectPnt) ;
  
  //! returns the Boolean tree entity
  Standard_EXPORT   Handle(IGESSolid_BooleanTree) Component()  const;
  
  //! returns the point on/in the selected component
  Standard_EXPORT   gp_Pnt SelectPoint()  const;
  
  //! returns the point on/in the selected component
  //! after applying TransformationMatrix
  Standard_EXPORT   gp_Pnt TransformedSelectPoint()  const;




  DEFINE_STANDARD_RTTI(IGESSolid_SelectedComponent)

protected:




private: 


  Handle(IGESSolid_BooleanTree) theEntity;
  gp_XYZ theSelectPoint;


};







#endif // _IGESSolid_SelectedComponent_HeaderFile
