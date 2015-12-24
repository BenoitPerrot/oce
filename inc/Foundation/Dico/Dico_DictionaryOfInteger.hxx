// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dico_DictionaryOfInteger_HeaderFile
#define _Dico_DictionaryOfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Dico/Handle_Dico_DictionaryOfInteger.hxx>

#include <Foundation/Standard/Standard_Character.hxx>
#include <Foundation/Dico/Handle_Dico_DictionaryOfInteger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Dico/Handle_Dico_StackItemOfDictionaryOfInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Standard_Size.hxx>
class Standard_NoSuchObject;
class Dico_IteratorOfDictionaryOfInteger;
class Dico_StackItemOfDictionaryOfInteger;
class TCollection_AsciiString;



class Dico_DictionaryOfInteger : public MMgt_TShared
{

public:

  
  Standard_EXPORT Dico_DictionaryOfInteger();
  
  Standard_EXPORT   Standard_Boolean HasItem (const Standard_CString name, const Standard_Boolean exact = Standard_False)  const;
  
  Standard_EXPORT   Standard_Boolean HasItem (const TCollection_AsciiString& name, const Standard_Boolean exact = Standard_True)  const;
  
  Standard_EXPORT  const  Standard_Integer& Item (const Standard_CString name, const Standard_Boolean exact = Standard_True)  const;
  
  Standard_EXPORT  const  Standard_Integer& Item (const TCollection_AsciiString& name, const Standard_Boolean exact = Standard_True)  const;
  
  Standard_EXPORT   Standard_Boolean GetItem (const Standard_CString name, Standard_Integer& anitem, const Standard_Boolean exact = Standard_True)  const;
  
  Standard_EXPORT   Standard_Boolean GetItem (const TCollection_AsciiString& name, Standard_Integer& anitem, const Standard_Boolean exact = Standard_True)  const;
  
  Standard_EXPORT   void SetItem (const Standard_CString name, const Standard_Integer& anitem, const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT   void SetItem (const TCollection_AsciiString& name, const Standard_Integer& anitem, const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT   Standard_Integer& NewItem (const Standard_CString name, Standard_Boolean& isvalued, const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT   Standard_Integer& NewItem (const TCollection_AsciiString& name, Standard_Boolean& isvalued, const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT   Standard_Boolean RemoveItem (const Standard_CString name, const Standard_Boolean cln = Standard_True, const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT   Standard_Boolean RemoveItem (const TCollection_AsciiString& name, const Standard_Boolean cln = Standard_True, const Standard_Boolean exact = Standard_True) ;
  
  Standard_EXPORT   void Clean() ;
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   Handle(Dico_DictionaryOfInteger) Copy()  const;
  
  Standard_EXPORT   Standard_Boolean Complete (Handle(Dico_DictionaryOfInteger)& acell)  const;


friend class Dico_IteratorOfDictionaryOfInteger;


  DEFINE_STANDARD_RTTI(Dico_DictionaryOfInteger)

protected:




private: 

  
  Standard_EXPORT   void SetChar (const Standard_Character car) ;
  
  Standard_EXPORT   Standard_Boolean HasSub()  const;
  
  Standard_EXPORT   Handle(Dico_DictionaryOfInteger) Sub()  const;
  
  Standard_EXPORT   Standard_Boolean HasNext()  const;
  
  Standard_EXPORT   Handle(Dico_DictionaryOfInteger) Next()  const;
  
  Standard_EXPORT   void SetSub (const Handle(Dico_DictionaryOfInteger)& acell) ;
  
  Standard_EXPORT   void SetNext (const Handle(Dico_DictionaryOfInteger)& acell) ;
  
  Standard_EXPORT   void SearchCell (const Standard_CString name, const Standard_Size lmax, const Standard_Character car, const Standard_Size level, Handle(Dico_DictionaryOfInteger)& acell, Standard_Size& reslev, Standard_Integer& stat)  const;
  
  Standard_EXPORT   void NewCell (const Standard_CString name, const Standard_Size namlen, Handle(Dico_DictionaryOfInteger)& acell, const Standard_Size reslev, const Standard_Integer stat) ;
  
  Standard_EXPORT   Standard_Boolean HasIt()  const;
  
  Standard_EXPORT  const  Standard_Integer& It()  const;
  
  Standard_EXPORT   Standard_Integer& ItAdr() ;
  
  Standard_EXPORT   void SetIt (const Standard_Integer& anitem) ;
  
  Standard_EXPORT   void DeclIt() ;
  
  Standard_EXPORT   void RemoveIt() ;
  
  Standard_EXPORT   Standard_Character CellChar()  const;
  
  Standard_EXPORT   void GetCopied (const Handle(Dico_DictionaryOfInteger)& fromcell) ;

  Standard_Character thecars[4];
  Handle(Dico_DictionaryOfInteger) thesub;
  Handle(Dico_DictionaryOfInteger) thenext;
  Standard_Integer theitem;


};







#endif // _Dico_DictionaryOfInteger_HeaderFile
