// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_LineWidening_HeaderFile
#define _IGESAppli_LineWidening_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_LineWidening.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>


//! defines LineWidening, Type <406> Form <5>
//! in package IGESAppli
//! Defines the characteristics of entities when they are
//! used to define locations of items.
class IGESAppli_LineWidening : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_LineWidening();
  
  //! This method is used to set the fields of the class
  //! LineWidening
  //! - nbPropVal   : Number of property values = 5
  //! - aWidth      : Width of metalization
  //! - aCornering  : Cornering codes
  //! 0 = rounded
  //! 1 = squared
  //! - aExtnFlag   : Extension Flag
  //! 0 = No Extension
  //! 1 = One-half width extension
  //! 2 = Extn set by ExtnVal
  //! - aJustifFlag : Justification flag
  //! 0 = Center justified
  //! 1 = left justified
  //! 2 = right justified
  //! - aExtnVal    : Extension value if aExtnFlag = 2
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Standard_Real aWidth, const Standard_Integer aCornering, const Standard_Integer aExtnFlag, const Standard_Integer aJustifFlag, const Standard_Real aExtnVal) ;
  
  //! returns the number of property values
  //! is always 5
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the width of metallization
  Standard_EXPORT   Standard_Real WidthOfMetalization()  const;
  
  //! returns the cornering code
  //! 0 = Rounded  /   1 = Squared
  Standard_EXPORT   Standard_Integer CorneringCode()  const;
  
  //! returns the extension flag
  //! 0 = No extension
  //! 1 = One-half width extension
  //! 2 = Extension set by theExtnVal
  Standard_EXPORT   Standard_Integer ExtensionFlag()  const;
  
  //! returns the justification flag
  //! 0 = Centre justified
  //! 1 = Left justified
  //! 2 = Right justified
  Standard_EXPORT   Standard_Integer JustificationFlag()  const;
  
  //! returns the Extension Value
  //! Present only if theExtnFlag = 2
  Standard_EXPORT   Standard_Real ExtensionValue()  const;




  DEFINE_STANDARD_RTTI(IGESAppli_LineWidening)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Real theWidth;
  Standard_Integer theCorneringCode;
  Standard_Integer theExtensionFlag;
  Standard_Integer theJustificationFlag;
  Standard_Real theExtensionValue;


};







#endif // _IGESAppli_LineWidening_HeaderFile
