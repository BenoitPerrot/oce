// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_CopyLabel_HeaderFile
#define _TDF_CopyLabel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/TDF/Handle_TDF_RelocationTable.hxx>
#include <OCAF/TDF/TDF_Label.hxx>
#include <OCAF/TDF/TDF_IDFilter.hxx>
#include <OCAF/TDF/TDF_AttributeMap.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/Handle_TDF_DataSet.hxx>
class TDF_RelocationTable;
class TDF_Label;
class TDF_IDFilter;
class TDF_AttributeMap;
class TDF_DataSet;


//! This class gives copy of  source  label  hierarchy
class TDF_CopyLabel 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty  constructor
  Standard_EXPORT TDF_CopyLabel();
  
  //! CopyTool
  Standard_EXPORT TDF_CopyLabel(const TDF_Label& aSource, const TDF_Label& aTarget);
  
  //! Loads  src  and  tgt  labels
  Standard_EXPORT   void Load (const TDF_Label& aSource, const TDF_Label& aTarget) ;
  
  //! Sets  filter
  Standard_EXPORT   void UseFilter (const TDF_IDFilter& aFilter) ;
  
  //! Check  external  references and  if  exist  fills  the  aExternals  Map
  Standard_EXPORT static   Standard_Boolean ExternalReferences (const TDF_Label& Lab, TDF_AttributeMap& aExternals, const TDF_IDFilter& aFilter) ;
  
  //! Check  external  references and  if  exist  fills  the  aExternals  Map
  Standard_EXPORT static   void ExternalReferences (const TDF_Label& aRefLab, const TDF_Label& Lab, TDF_AttributeMap& aExternals, const TDF_IDFilter& aFilter, Handle(TDF_DataSet)& aDataSet) ;
  
  //! performs  algorithm  of  selfcontained  copy
  Standard_EXPORT   void Perform() ;
  
      Standard_Boolean IsDone()  const;
  
  //! returns  relocation  table
  Standard_EXPORT  const  Handle(TDF_RelocationTable)& RelocationTable()  const;




protected:





private:



  Handle(TDF_RelocationTable) myRT;
  TDF_Label mySL;
  TDF_Label myTL;
  TDF_IDFilter myFilter;
  TDF_AttributeMap myMapOfExt;
  Standard_Boolean myIsDone;


};


#include <OCAF/TDF/TDF_CopyLabel.lxx>





#endif // _TDF_CopyLabel_HeaderFile
