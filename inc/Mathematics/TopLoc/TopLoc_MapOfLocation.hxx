// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_MapOfLocation_HeaderFile
#define _TopLoc_MapOfLocation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Mathematics/TopLoc/Handle_TopLoc_StdMapNodeOfMapOfLocation.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopLoc_Location;
class TopLoc_MapLocationHasher;
class TopLoc_StdMapNodeOfMapOfLocation;
class TopLoc_MapIteratorOfMapOfLocation;



class TopLoc_MapOfLocation  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopLoc_MapOfLocation(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TopLoc_MapOfLocation(const TopLoc_MapOfLocation& Other);
  
  Standard_EXPORT   TopLoc_MapOfLocation& Assign (const TopLoc_MapOfLocation& Other) ;
  TopLoc_MapOfLocation& operator = (const TopLoc_MapOfLocation& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopLoc_MapOfLocation()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Add (const TopLoc_Location& aKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const TopLoc_Location& aKey)  const;
  
  Standard_EXPORT   Standard_Boolean Remove (const TopLoc_Location& aKey) ;




protected:





private:





};







#endif // _TopLoc_MapOfLocation_HeaderFile
