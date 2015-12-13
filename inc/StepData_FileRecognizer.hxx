// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_FileRecognizer_HeaderFile
#define _StepData_FileRecognizer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepData_FileRecognizer.hxx>

#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_StepData_FileRecognizer.hxx>
#include <Foundation/Standard/Standard_Transient.hxx>
class Standard_Transient;
class Standard_NoSuchObject;
class TCollection_AsciiString;



class StepData_FileRecognizer : public Standard_Transient
{

public:

  
  Standard_EXPORT   Standard_Boolean Evaluate (const TCollection_AsciiString& akey, Handle(Standard_Transient)& res) ;
  
  Standard_EXPORT   Handle(Standard_Transient) Result()  const;
  
  Standard_EXPORT   void Add (const Handle(StepData_FileRecognizer)& reco) ;




  DEFINE_STANDARD_RTTI(StepData_FileRecognizer)

protected:

  
  Standard_EXPORT StepData_FileRecognizer();
  
  Standard_EXPORT   void SetOK (const Handle(Standard_Transient)& aresult) ;
  
  Standard_EXPORT   void SetKO() ;
  
  Standard_EXPORT virtual   void Eval (const TCollection_AsciiString& akey)  = 0;



private: 


  Handle(Standard_Transient) theres;
  Standard_Boolean hasnext;
  Handle(StepData_FileRecognizer) thenext;


};







#endif // _StepData_FileRecognizer_HeaderFile
