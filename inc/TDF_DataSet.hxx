// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_DataSet_HeaderFile
#define _TDF_DataSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDF_DataSet.hxx>

#include <TDF_LabelList.hxx>
#include <TDF_LabelMap.hxx>
#include <TDF_AttributeMap.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TDF_Label;
class TDF_LabelMap;
class TDF_Attribute;
class TDF_AttributeMap;
class TDF_LabelList;


//! This class is a set of TDF informations like
//! labels and attributes.
class TDF_DataSet : public MMgt_TShared
{

public:

  
  //! Creates an  empty   DataSet  object.
  Standard_EXPORT TDF_DataSet();
  
  //! Clears all information.
  Standard_EXPORT   void Clear() ;
  
  //! Returns true if there is at least one label or one
  //! attribute.
      Standard_Boolean IsEmpty()  const;
  
  //! Adds <aLabel> in  the  current  data  set.
      void AddLabel (const TDF_Label& aLabel) ;
  
  //! Returns true if the label  <alabel>   is in the data set.
      Standard_Boolean ContainsLabel (const TDF_Label& aLabel)  const;
  
  //! Returns the map of labels in this data set.
  //! This map can be used directly, or updated.
      TDF_LabelMap& Labels() ;
  
  //! Adds <anAttribute> into the current data  set.
      void AddAttribute (const Handle(TDF_Attribute)& anAttribute) ;
  
  //! Returns true if <anAttribute> is in the data set.
      Standard_Boolean ContainsAttribute (const Handle(TDF_Attribute)& anAttribute)  const;
  
  //! Returns the map of attributes in the  current  data   set.
  //! This map can be used directly, or updated.
      TDF_AttributeMap& Attributes() ;
  
  //! Adds a root label to <myRootLabels>.
      void AddRoot (const TDF_Label& aLabel) ;
  
  //! Returns <myRootLabels> to be used or updated.
      TDF_LabelList& Roots() ;
  
  //! Dumps the minimum information about <me> on
  //! <aStream>.
  Standard_EXPORT   Standard_OStream& Dump (Standard_OStream& anOS)  const;
  Standard_OStream& operator<< (Standard_OStream& anOS)  const
{
  return Dump(anOS);
}




  DEFINE_STANDARD_RTTI(TDF_DataSet)

protected:




private: 


  TDF_LabelList myRootLabels;
  TDF_LabelMap myLabelMap;
  TDF_AttributeMap myAttributeMap;


};


#include <TDF_DataSet.lxx>





#endif // _TDF_DataSet_HeaderFile
