// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dToIGES_Geom2dEntity_HeaderFile
#define _Geom2dToIGES_Geom2dEntity_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/IGESData/Handle_IGESData_IGESModel.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class IGESData_IGESModel;


//! provides methods to transfer Geom2d entity from CASCADE to IGES.
class Geom2dToIGES_Geom2dEntity 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a tool Geom2dEntity
  Standard_EXPORT Geom2dToIGES_Geom2dEntity();
  
  //! Creates a tool ready to run and sets its
  //! fields as GE's.
  Standard_EXPORT Geom2dToIGES_Geom2dEntity(const Geom2dToIGES_Geom2dEntity& GE);
  
  //! Set the value of "TheModel"
  Standard_EXPORT   void SetModel (const Handle(IGESData_IGESModel)& model) ;
  
  //! Returns the value of "TheModel"
  Standard_EXPORT   Handle(IGESData_IGESModel) GetModel()  const;
  
  //! Sets the value of the UnitFlag
  Standard_EXPORT   void SetUnit (const Standard_Real unit) ;
  
  //! Returns the value of the UnitFlag of the header of the model
  //! in millimeters.
  Standard_EXPORT   Standard_Real GetUnit()  const;




protected:





private:



  Handle(IGESData_IGESModel) TheModel;
  Standard_Real TheUnitFactor;


};







#endif // _Geom2dToIGES_Geom2dEntity_HeaderFile
