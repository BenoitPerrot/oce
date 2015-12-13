// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation_HeaderFile
#define _SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_SelectMgr_Selection.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_SelectMgr_DataMapNodeOfDataMapOfSelectionActivation.hxx>
class Standard_NoSuchObject;
class SelectMgr_Selection;
class TColStd_MapTransientHasher;
class SelectMgr_DataMapOfSelectionActivation;
class SelectMgr_DataMapNodeOfDataMapOfSelectionActivation;



class SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation();
  
  Standard_EXPORT SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation(const SelectMgr_DataMapOfSelectionActivation& aMap);
  
  Standard_EXPORT   void Initialize (const SelectMgr_DataMapOfSelectionActivation& aMap) ;
  
  Standard_EXPORT  const  Handle(SelectMgr_Selection)& Key()  const;
  
  Standard_EXPORT  const  Standard_Integer& Value()  const;




protected:





private:





};







#endif // _SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation_HeaderFile
