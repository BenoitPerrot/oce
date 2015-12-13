// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Current_HeaderFile
#define _TDataStd_Current_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_Current.hxx>

#include <TDF_Label.hxx>
#include <TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;


//! this attribute,  located at root label,  manage an
//! access to a current label.
class TDataStd_Current : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Set <L> as current of <L> Framework.
  Standard_EXPORT static   void Set (const TDF_Label& L) ;
  
  //! returns current of <acces> Framework. raise if (!Has)
  Standard_EXPORT static   TDF_Label Get (const TDF_Label& acces) ;
  
  //! returns True if a  current label is managed in <acces>
  //! Framework.
  //! class methods
  //! =============
  Standard_EXPORT static   Standard_Boolean Has (const TDF_Label& acces) ;
  
  Standard_EXPORT TDataStd_Current();
  
  Standard_EXPORT   void SetLabel (const TDF_Label& current) ;
  
  Standard_EXPORT   TDF_Label GetLabel()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataStd_Current)

protected:




private: 


  TDF_Label myLabel;


};







#endif // _TDataStd_Current_HeaderFile
