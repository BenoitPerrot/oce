// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductCategory_HeaderFile
#define _StepBasic_ProductCategory_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_ProductCategory.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;



class StepBasic_ProductCategory : public MMgt_TShared
{

public:

  
  //! Returns a ProductCategory
  Standard_EXPORT StepBasic_ProductCategory();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Boolean hasAdescription, const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   void UnSetDescription() ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  Standard_EXPORT   Standard_Boolean HasDescription()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ProductCategory)

protected:




private: 


  Handle(TCollection_HAsciiString) name;
  Handle(TCollection_HAsciiString) description;
  Standard_Boolean hasDescription;


};







#endif // _StepBasic_ProductCategory_HeaderFile
