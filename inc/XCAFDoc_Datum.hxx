// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_Datum_HeaderFile
#define _XCAFDoc_Datum_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_XCAFDoc_Datum.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
class TCollection_HAsciiString;
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;


//! attribute to store datum
class XCAFDoc_Datum : public TDF_Attribute
{

public:

  
  Standard_EXPORT XCAFDoc_Datum();
  
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT static   Handle(XCAFDoc_Datum) Set (const TDF_Label& label, const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(TCollection_HAsciiString)& anIdentification) ;
  
  Standard_EXPORT   void Set (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(TCollection_HAsciiString)& anIdentification) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) GetName()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) GetDescription()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) GetIdentification()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;




  DEFINE_STANDARD_RTTI(XCAFDoc_Datum)

protected:




private: 


  Handle(TCollection_HAsciiString) myName;
  Handle(TCollection_HAsciiString) myDescription;
  Handle(TCollection_HAsciiString) myIdentification;


};







#endif // _XCAFDoc_Datum_HeaderFile
