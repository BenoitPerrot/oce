// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Tick_HeaderFile
#define _TDataStd_Tick_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDataStd/Handle_TDataStd_Tick.hxx>

#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;


//! Defines a boolean attribute.
//! If it exists at a label - true,
//! Otherwise - false.
class TDataStd_Tick : public TDF_Attribute
{

public:

  
  //! Static methods
  //! ==============
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Find, or create, a Tick attribute.
  //! Tick methods
  //! ============
  Standard_EXPORT static   Handle(TDataStd_Tick) Set (const TDF_Label& label) ;
  
  Standard_EXPORT TDataStd_Tick();
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataStd_Tick)

protected:




private: 




};







#endif // _TDataStd_Tick_HeaderFile
