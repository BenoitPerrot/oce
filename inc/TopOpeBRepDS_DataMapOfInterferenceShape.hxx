// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapOfInterferenceShape_HeaderFile
#define _TopOpeBRepDS_DataMapOfInterferenceShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopOpeBRepDS_Interference;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class TopOpeBRepDS_DataMapNodeOfDataMapOfInterferenceShape;
class TopOpeBRepDS_DataMapIteratorOfDataMapOfInterferenceShape;



class TopOpeBRepDS_DataMapOfInterferenceShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapOfInterferenceShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepDS_DataMapOfInterferenceShape& Assign (const TopOpeBRepDS_DataMapOfInterferenceShape& Other) ;
  TopOpeBRepDS_DataMapOfInterferenceShape& operator = (const TopOpeBRepDS_DataMapOfInterferenceShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepDS_DataMapOfInterferenceShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Handle(TopOpeBRepDS_Interference)& K, const TopoDS_Shape& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(TopOpeBRepDS_Interference)& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Handle(TopOpeBRepDS_Interference)& K) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Find (const Handle(TopOpeBRepDS_Interference)& K)  const;
 const  TopoDS_Shape& operator() (const Handle(TopOpeBRepDS_Interference)& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopoDS_Shape& ChangeFind (const Handle(TopOpeBRepDS_Interference)& K) ;
  TopoDS_Shape& operator() (const Handle(TopOpeBRepDS_Interference)& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Handle(TopOpeBRepDS_Interference)& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Handle(TopOpeBRepDS_Interference)& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepDS_DataMapOfInterferenceShape(const TopOpeBRepDS_DataMapOfInterferenceShape& Other);




};







#endif // _TopOpeBRepDS_DataMapOfInterferenceShape_HeaderFile
