// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTopoBRep_MapOfShapeListOfVData_HeaderFile
#define _HLRTopoBRep_MapOfShapeListOfVData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Handle_HLRTopoBRep_DataMapNodeOfMapOfShapeListOfVData.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class HLRTopoBRep_ListOfVData;
class TopTools_ShapeMapHasher;
class HLRTopoBRep_DataMapNodeOfMapOfShapeListOfVData;
class HLRTopoBRep_DataMapIteratorOfMapOfShapeListOfVData;



class HLRTopoBRep_MapOfShapeListOfVData  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRTopoBRep_MapOfShapeListOfVData(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   HLRTopoBRep_MapOfShapeListOfVData& Assign (const HLRTopoBRep_MapOfShapeListOfVData& Other) ;
  HLRTopoBRep_MapOfShapeListOfVData& operator = (const HLRTopoBRep_MapOfShapeListOfVData& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~HLRTopoBRep_MapOfShapeListOfVData()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const HLRTopoBRep_ListOfVData& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  HLRTopoBRep_ListOfVData& Find (const TopoDS_Shape& K)  const;
 const  HLRTopoBRep_ListOfVData& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   HLRTopoBRep_ListOfVData& ChangeFind (const TopoDS_Shape& K) ;
  HLRTopoBRep_ListOfVData& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT HLRTopoBRep_MapOfShapeListOfVData(const HLRTopoBRep_MapOfShapeListOfVData& Other);




};







#endif // _HLRTopoBRep_MapOfShapeListOfVData_HeaderFile
