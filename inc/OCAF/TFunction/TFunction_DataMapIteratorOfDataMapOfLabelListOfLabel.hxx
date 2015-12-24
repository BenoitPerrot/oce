// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel_HeaderFile
#define _TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <OCAF/TFunction/Handle_TFunction_DataMapNodeOfDataMapOfLabelListOfLabel.hxx>
class Standard_NoSuchObject;
class TDF_Label;
class TDF_LabelList;
class TDF_LabelMapHasher;
class TFunction_DataMapOfLabelListOfLabel;
class TFunction_DataMapNodeOfDataMapOfLabelListOfLabel;



class TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel();
  
  Standard_EXPORT TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel(const TFunction_DataMapOfLabelListOfLabel& aMap);
  
  Standard_EXPORT   void Initialize (const TFunction_DataMapOfLabelListOfLabel& aMap) ;
  
  Standard_EXPORT  const  TDF_Label& Key()  const;
  
  Standard_EXPORT  const  TDF_LabelList& Value()  const;




protected:





private:





};







#endif // _TFunction_DataMapIteratorOfDataMapOfLabelListOfLabel_HeaderFile
