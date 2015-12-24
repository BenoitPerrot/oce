// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Directory_HeaderFile
#define _TDataStd_Directory_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDataStd/Handle_TDataStd_Directory.hxx>

#include <OCAF/TDF/TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_RelocationTable.hxx>
#include <OCAF/TDF/Handle_TDF_DataSet.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TDF_Label;
class Standard_GUID;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! Associates a directory in the data framework with
//! a TDataStd_TagSource attribute.
//! You can create a new directory label and add
//! sub-directory or object labels to it,
class TDataStd_Directory : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  //! Searches for a directory attribute on the label
  //! current, or on one of the father labels of current.
  //! If a directory attribute is found, true is returned,
  //! and the attribute found is set as D.
  Standard_EXPORT static   Standard_Boolean Find (const TDF_Label& current, Handle(TDataStd_Directory)& D) ;
  
  //! Creates  an  enpty   Directory attribute,  located  at
  //! <label>. Raises if <label> has attribute
  Standard_EXPORT static   Handle(TDataStd_Directory) New (const TDF_Label& label) ;
  
  //! Creates a new sub-label and sets the
  //! sub-directory dir on that label.
  Standard_EXPORT static   Handle(TDataStd_Directory) AddDirectory (const Handle(TDataStd_Directory)& dir) ;
  
  //! Makes new label and returns it to insert
  //! other object attributes (sketch,part...etc...)
  Standard_EXPORT static   TDF_Label MakeObjectLabel (const Handle(TDataStd_Directory)& dir) ;
  
  //! Directory methods
  //! ===============
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT TDataStd_Directory();
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& DS)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataStd_Directory)

protected:




private: 




};







#endif // _TDataStd_Directory_HeaderFile
