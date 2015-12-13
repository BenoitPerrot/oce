// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopOpeBRepDS_CheckStatus.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus.hxx>
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_DataMapOfCheckStatus;
class TopOpeBRepDS_DataMapNodeOfDataMapOfCheckStatus;



class TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus();
  
  Standard_EXPORT TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus(const TopOpeBRepDS_DataMapOfCheckStatus& aMap);
  
  Standard_EXPORT   void Initialize (const TopOpeBRepDS_DataMapOfCheckStatus& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  TopOpeBRepDS_CheckStatus& Value()  const;




protected:





private:





};







#endif // _TopOpeBRepDS_DataMapIteratorOfDataMapOfCheckStatus_HeaderFile
