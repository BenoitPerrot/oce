// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dico_StackItemOfDictionaryOfTransient_HeaderFile
#define _Dico_StackItemOfDictionaryOfTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Dico_StackItemOfDictionaryOfTransient.hxx>

#include <Handle_Dico_DictionaryOfTransient.hxx>
#include <Handle_Dico_StackItemOfDictionaryOfTransient.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Standard_Transient.hxx>
class Dico_DictionaryOfTransient;
class Standard_Transient;
class Dico_IteratorOfDictionaryOfTransient;



class Dico_StackItemOfDictionaryOfTransient : public MMgt_TShared
{

public:

  
  Standard_EXPORT Dico_StackItemOfDictionaryOfTransient();
  
  Standard_EXPORT Dico_StackItemOfDictionaryOfTransient(const Handle(Dico_StackItemOfDictionaryOfTransient)& previous);
  
  Standard_EXPORT   Handle(Dico_StackItemOfDictionaryOfTransient) Previous()  const;
  
  Standard_EXPORT   Handle(Dico_DictionaryOfTransient) Value()  const;
  
  Standard_EXPORT   void SetValue (const Handle(Dico_DictionaryOfTransient)& cval) ;




  DEFINE_STANDARD_RTTI(Dico_StackItemOfDictionaryOfTransient)

protected:




private: 


  Handle(Dico_DictionaryOfTransient) thevalue;
  Handle(Dico_StackItemOfDictionaryOfTransient) theprev;


};







#endif // _Dico_StackItemOfDictionaryOfTransient_HeaderFile
