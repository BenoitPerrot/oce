// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_DataMapIteratorOfDataMapOfShapeTransient_HeaderFile
#define _MoniTool_DataMapIteratorOfDataMapOfShapeTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/MoniTool/Handle_MoniTool_DataMapNodeOfDataMapOfShapeTransient.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class Standard_Transient;
class TopTools_ShapeMapHasher;
class MoniTool_DataMapOfShapeTransient;
class MoniTool_DataMapNodeOfDataMapOfShapeTransient;



class MoniTool_DataMapIteratorOfDataMapOfShapeTransient  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MoniTool_DataMapIteratorOfDataMapOfShapeTransient();
  
  Standard_EXPORT MoniTool_DataMapIteratorOfDataMapOfShapeTransient(const MoniTool_DataMapOfShapeTransient& aMap);
  
  Standard_EXPORT   void Initialize (const MoniTool_DataMapOfShapeTransient& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Value()  const;




protected:





private:





};







#endif // _MoniTool_DataMapIteratorOfDataMapOfShapeTransient_HeaderFile
