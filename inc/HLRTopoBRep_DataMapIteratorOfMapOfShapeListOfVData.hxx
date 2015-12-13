// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData_HeaderFile
#define _HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_HLRTopoBRep_DataMapNodeOfMapOfShapeListOfVData.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class HLRTopoBRep_ListOfVData;
class TopTools_ShapeMapHasher;
class HLRTopoBRep_MapOfShapeListOfVData;
class HLRTopoBRep_DataMapNodeOfMapOfShapeListOfVData;



class HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData();
  
  Standard_EXPORT HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData(const HLRTopoBRep_MapOfShapeListOfVData& aMap);
  
  Standard_EXPORT   void Initialize (const HLRTopoBRep_MapOfShapeListOfVData& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  HLRTopoBRep_ListOfVData& Value()  const;




protected:





private:





};







#endif // _HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData_HeaderFile
