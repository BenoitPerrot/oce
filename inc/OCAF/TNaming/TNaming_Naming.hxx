// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_Naming_HeaderFile
#define _TNaming_Naming_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TNaming/Handle_TNaming_Naming.hxx>

#include <OCAF/TNaming/TNaming_Name.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <OCAF/TNaming/Handle_TNaming_NamedShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <OCAF/TDF/Handle_TDF_RelocationTable.hxx>
#include <OCAF/TDF/Handle_TDF_DataSet.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TNaming_NamedShape;
class TopoDS_Shape;
class TNaming_Name;
class TDF_LabelMap;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;
class TDF_IDFilter;
class TDF_AttributeIndexedMap;


//! This attribute  store the  topological  naming of any
//! selected   shape,  when this  shape  is  not  already
//! attached to a specific label. This class is also used
//! to solve  it when  the argumentsof the  toipological
//! naming are modified.
class TNaming_Naming : public TDF_Attribute
{

public:

  
  //! following code from TDesignStd
  //! ==============================
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT static   Handle(TNaming_Naming) Insert (const TDF_Label& under) ;
  
  //! Creates  a   Namimg  attribute  at  label <where>   to
  //! identify  the   shape   <Selection>.    Geometry is
  //! Standard_True  if   we  are  only  interested  by  the
  //! underlying   geometry     (e.g.     setting   a
  //! constraint). <Context> is  used to find neighbours  of
  //! <S> when required by the naming.
  //! If KeepOrientation is True the Selection orientation is taken
  //! into  account. BNproblem == True points out that Context sub-shapes
  //! in  DF have orientation differences with Context shape itself.
  //! instance method
  //! ===============
  Standard_EXPORT static   Handle(TNaming_NamedShape) Name (const TDF_Label& where, const TopoDS_Shape& Selection, const TopoDS_Shape& Context, const Standard_Boolean Geometry = Standard_False, const Standard_Boolean KeepOrientation = Standard_False, const Standard_Boolean BNproblem = Standard_False) ;
  
  Standard_EXPORT TNaming_Naming();
  
  Standard_EXPORT   Standard_Boolean IsDefined()  const;
  
  Standard_EXPORT  const  TNaming_Name& GetName()  const;
  
  Standard_EXPORT   TNaming_Name& ChangeName() ;
  
  //! regenerate only the Name associated to me
  Standard_EXPORT   Standard_Boolean Regenerate (TDF_LabelMap& scope) ;
  
  //! Regenerate recursively the  whole name with scope.  If
  //! scope  is empty it  means that  all the labels  of the
  //! framework are valid.
  Standard_EXPORT   Standard_Boolean Solve (TDF_LabelMap& scope) ;
  
  //! Deferred methods from TDF_Attribute
  //! ===================================
  Standard_EXPORT virtual  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& aDataSet)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;
  
  Standard_EXPORT virtual   void ExtendedDump (Standard_OStream& anOS, const TDF_IDFilter& aFilter, TDF_AttributeIndexedMap& aMap)  const;




  DEFINE_STANDARD_RTTI(TNaming_Naming)

protected:




private: 


  TNaming_Name myName;


};







#endif // _TNaming_Naming_HeaderFile
