// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DocumentType_HeaderFile
#define _StepBasic_DocumentType_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepBasic/Handle_StepBasic_DocumentType.hxx>

#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class TCollection_HAsciiString;



class StepBasic_DocumentType : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepBasic_DocumentType();
  
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& apdt) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) ProductDataType()  const;
  
  Standard_EXPORT   void SetProductDataType (const Handle(TCollection_HAsciiString)& apdt) ;




  DEFINE_STANDARD_RTTI(StepBasic_DocumentType)

protected:




private: 


  Handle(TCollection_HAsciiString) thepdt;


};







#endif // _StepBasic_DocumentType_HeaderFile
