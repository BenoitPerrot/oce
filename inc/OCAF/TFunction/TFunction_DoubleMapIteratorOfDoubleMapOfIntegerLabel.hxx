// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel_HeaderFile
#define _TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/TFunction/Handle_TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel.hxx>
class Standard_NoSuchObject;
class TDF_Label;
class TColStd_MapIntegerHasher;
class TDF_LabelMapHasher;
class TFunction_DoubleMapOfIntegerLabel;
class TFunction_DoubleMapNodeOfDoubleMapOfIntegerLabel;



class TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel();
  
  Standard_EXPORT TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel(const TFunction_DoubleMapOfIntegerLabel& aMap);
  
  Standard_EXPORT   void Initialize (const TFunction_DoubleMapOfIntegerLabel& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key1()  const;
  
  Standard_EXPORT  const  TDF_Label& Key2()  const;




protected:





private:





};







#endif // _TFunction_DoubleMapIteratorOfDoubleMapOfIntegerLabel_HeaderFile
