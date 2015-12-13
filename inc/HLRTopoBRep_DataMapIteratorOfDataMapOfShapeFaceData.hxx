// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData_HeaderFile
#define _HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class HLRTopoBRep_FaceData;
class TopTools_ShapeMapHasher;
class HLRTopoBRep_DataMapOfShapeFaceData;
class HLRTopoBRep_DataMapNodeOfDataMapOfShapeFaceData;



class HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData();
  
  Standard_EXPORT HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData(const HLRTopoBRep_DataMapOfShapeFaceData& aMap);
  
  Standard_EXPORT   void Initialize (const HLRTopoBRep_DataMapOfShapeFaceData& aMap) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT  const  HLRTopoBRep_FaceData& Value()  const;




protected:





private:





};







#endif // _HLRTopoBRep_DataMapIteratorOfDataMapOfShapeFaceData_HeaderFile
