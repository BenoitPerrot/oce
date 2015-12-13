// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapIteratorOfDataMapOfShapePD_HeaderFile
#define _STEPCAFControl_DataMapIteratorOfDataMapOfShapePD_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapePD.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class StepBasic_ProductDefinition;
class TopTools_ShapeMapHasher;
class STEPCAFControl_DataMapOfShapePD;
class STEPCAFControl_DataMapNodeOfDataMapOfShapePD;



class STEPCAFControl_DataMapIteratorOfDataMapOfShapePD  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPCAFControl_DataMapIteratorOfDataMapOfShapePD();
  
  Standard_EXPORT STEPCAFControl_DataMapIteratorOfDataMapOfShapePD(const STEPCAFControl_DataMapOfShapePD& aMap);
  
  Standard_EXPORT   void Initialize (const STEPCAFControl_DataMapOfShapePD& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  Handle(StepBasic_ProductDefinition)& Value()  const;




protected:





private:





};







#endif // _STEPCAFControl_DataMapIteratorOfDataMapOfShapePD_HeaderFile
