// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_DataMapIteratorOfDataMapOfTRI_HeaderFile
#define _StepToTopoDS_DataMapIteratorOfDataMapOfTRI_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_StepShape_TopologicalRepresentationItem.hxx>
#include <Handle_StepToTopoDS_DataMapNodeOfDataMapOfTRI.hxx>
class Standard_NoSuchObject;
class StepShape_TopologicalRepresentationItem;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class StepToTopoDS_DataMapOfTRI;
class StepToTopoDS_DataMapNodeOfDataMapOfTRI;



class StepToTopoDS_DataMapIteratorOfDataMapOfTRI  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_DataMapIteratorOfDataMapOfTRI();
  
  Standard_EXPORT StepToTopoDS_DataMapIteratorOfDataMapOfTRI(const StepToTopoDS_DataMapOfTRI& aMap);
  
  Standard_EXPORT   void Initialize (const StepToTopoDS_DataMapOfTRI& aMap) ;
  
  Standard_EXPORT  const  Handle(StepShape_TopologicalRepresentationItem)& Key()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;




protected:





private:





};







#endif // _StepToTopoDS_DataMapIteratorOfDataMapOfTRI_HeaderFile
