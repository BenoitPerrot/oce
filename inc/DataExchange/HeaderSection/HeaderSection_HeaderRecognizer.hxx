// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HeaderSection_HeaderRecognizer_HeaderFile
#define _HeaderSection_HeaderRecognizer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_HeaderSection_HeaderRecognizer.hxx>

#include <DataExchange/StepData/StepData_FileRecognizer.hxx>
class TCollection_AsciiString;


//! Recognizes STEP Standard Header Entities
//! (FileName, FileDescription, FileSchema)
class HeaderSection_HeaderRecognizer : public StepData_FileRecognizer
{

public:

  
  Standard_EXPORT HeaderSection_HeaderRecognizer();




  DEFINE_STANDARD_RTTI(HeaderSection_HeaderRecognizer)

protected:

  
  //! Recognizes data types of Header STEP Standard
  Standard_EXPORT   void Eval (const TCollection_AsciiString& key) ;



private: 




};







#endif // _HeaderSection_HeaderRecognizer_HeaderFile
