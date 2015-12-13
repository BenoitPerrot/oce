// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapIteratorOfTypeARDriverMap_HeaderFile
#define _MDF_DataMapIteratorOfTypeARDriverMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_Standard_Type.hxx>
#include <Handle_MDF_ARDriver.hxx>
#include <Handle_MDF_DataMapNodeOfTypeARDriverMap.hxx>
class Standard_NoSuchObject;
class Standard_Type;
class MDF_ARDriver;
class TColStd_MapTransientHasher;
class MDF_TypeARDriverMap;
class MDF_DataMapNodeOfTypeARDriverMap;



class MDF_DataMapIteratorOfTypeARDriverMap  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MDF_DataMapIteratorOfTypeARDriverMap();
  
  Standard_EXPORT MDF_DataMapIteratorOfTypeARDriverMap(const MDF_TypeARDriverMap& aMap);
  
  Standard_EXPORT   void Initialize (const MDF_TypeARDriverMap& aMap) ;
  
  Standard_EXPORT  const  Handle(Standard_Type)& Key()  const;
  
  Standard_EXPORT  const  Handle(MDF_ARDriver)& Value()  const;




protected:





private:





};







#endif // _MDF_DataMapIteratorOfTypeARDriverMap_HeaderFile
