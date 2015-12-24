// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Integer_HeaderFile
#define _TDataStd_Integer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDataStd/Handle_TDataStd_Integer.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;


//! The basis to define an integer attribute.
class TDataStd_Integer : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  //! Returns the GUID for integers.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Finds, or creates, an Integer attribute and sets <value>
  //! the Integer  attribute is returned.
  //! Integer methods
  //! ===============
  Standard_EXPORT static   Handle(TDataStd_Integer) Set (const TDF_Label& label, const Standard_Integer value) ;
  
  Standard_EXPORT   void Set (const Standard_Integer V) ;
  
  //! Returns the integer value contained in the attribute.
  Standard_EXPORT   Standard_Integer Get()  const;
  
  //! Returns True if there is a reference on the same label
  Standard_EXPORT   Standard_Boolean IsCaptured()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;
  
  Standard_EXPORT TDataStd_Integer();




  DEFINE_STANDARD_RTTI(TDataStd_Integer)

protected:




private: 


  Standard_Integer myValue;


};







#endif // _TDataStd_Integer_HeaderFile
