// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_TypedCallBack_HeaderFile
#define _Storage_TypedCallBack_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Storage_TypedCallBack.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Handle_Storage_CallBack.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class Storage_CallBack;
class TCollection_AsciiString;



class Storage_TypedCallBack : public MMgt_TShared
{

public:

  
  Standard_EXPORT Storage_TypedCallBack();
  
  Standard_EXPORT Storage_TypedCallBack(const TCollection_AsciiString& aTypeName, const Handle(Storage_CallBack)& aCallBack);
  
  Standard_EXPORT   void SetType (const TCollection_AsciiString& aType) ;
  
  Standard_EXPORT   TCollection_AsciiString Type()  const;
  
  Standard_EXPORT   void SetCallBack (const Handle(Storage_CallBack)& aCallBack) ;
  
  Standard_EXPORT   Handle(Storage_CallBack) CallBack()  const;
  
  Standard_EXPORT   void SetIndex (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   Standard_Integer Index()  const;




  DEFINE_STANDARD_RTTI(Storage_TypedCallBack)

protected:




private: 


  TCollection_AsciiString myType;
  Handle(Storage_CallBack) myCallBack;
  Standard_Integer myIndex;


};







#endif // _Storage_TypedCallBack_HeaderFile
