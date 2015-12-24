// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_Shape_HeaderFile
#define _TDataXtd_Shape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDataXtd/Handle_TDataXtd_Shape.hxx>

#include <OCAF/TDF/TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_RelocationTable.hxx>
#include <OCAF/TDF/Handle_TDF_DataSet.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TDF_Label;
class TopoDS_Shape;
class Standard_GUID;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! A Shape is associated in the framework with :
//! a NamedShape attribute
class TDataXtd_Shape : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  //! try to retrieve a Shape attribute at <current> label
  //! or in  fathers  label of  <current>. Returns True  if
  //! found and set <S>.
  Standard_EXPORT static   Standard_Boolean Find (const TDF_Label& current, Handle(TDataXtd_Shape)& S) ;
  
  //! Find, or create, a Shape attribute.  the Shape attribute
  //! is returned. Raises if <label> has attribute.
  Standard_EXPORT static   Handle(TDataXtd_Shape) New (const TDF_Label& label) ;
  
  //! Create or update associated NamedShape attribute.  the
  //! Shape attribute is returned.
  Standard_EXPORT static   Handle(TDataXtd_Shape) Set (const TDF_Label& label, const TopoDS_Shape& shape) ;
  
  //! the Shape from  associated NamedShape attribute
  //! is returned.
  Standard_EXPORT static   TopoDS_Shape Get (const TDF_Label& label) ;
  
  //! Shape methods
  //! ============
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT TDataXtd_Shape();
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& DS)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataXtd_Shape)

protected:




private: 




};







#endif // _TDataXtd_Shape_HeaderFile
