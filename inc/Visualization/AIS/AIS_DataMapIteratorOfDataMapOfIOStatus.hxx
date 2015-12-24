// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_DataMapIteratorOfDataMapOfIOStatus_HeaderFile
#define _AIS_DataMapIteratorOfDataMapOfIOStatus_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Visualization/AIS/Handle_AIS_InteractiveObject.hxx>
#include <Visualization/AIS/Handle_AIS_GlobalStatus.hxx>
#include <Visualization/AIS/Handle_AIS_DataMapNodeOfDataMapOfIOStatus.hxx>
class Standard_NoSuchObject;
class AIS_InteractiveObject;
class AIS_GlobalStatus;
class TColStd_MapTransientHasher;
class AIS_DataMapOfIOStatus;
class AIS_DataMapNodeOfDataMapOfIOStatus;



class AIS_DataMapIteratorOfDataMapOfIOStatus  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_DataMapIteratorOfDataMapOfIOStatus();
  
  Standard_EXPORT AIS_DataMapIteratorOfDataMapOfIOStatus(const AIS_DataMapOfIOStatus& aMap);
  
  Standard_EXPORT   void Initialize (const AIS_DataMapOfIOStatus& aMap) ;
  
  Standard_EXPORT  const  Handle(AIS_InteractiveObject)& Key()  const;
  
  Standard_EXPORT  const  Handle(AIS_GlobalStatus)& Value()  const;




protected:





private:





};







#endif // _AIS_DataMapIteratorOfDataMapOfIOStatus_HeaderFile
