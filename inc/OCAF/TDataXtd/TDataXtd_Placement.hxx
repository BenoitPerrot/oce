// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_Placement_HeaderFile
#define _TDataXtd_Placement_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataXtd_Placement.hxx>

#include <OCAF/TDF/TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;



class TDataXtd_Placement : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Find, or    create,   an Placement  attribute.     the
  //! Placement attribute is returned.
  //! Placement methods
  //! =================
  Standard_EXPORT static   Handle(TDataXtd_Placement) Set (const TDF_Label& label) ;
  
  Standard_EXPORT TDataXtd_Placement();
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataXtd_Placement)

protected:




private: 




};







#endif // _TDataXtd_Placement_HeaderFile
