// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapIteratorOfTypeASDriverMap_HeaderFile
#define _MDF_DataMapIteratorOfTypeASDriverMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <OCAF/MDF/Handle_MDF_ASDriver.hxx>
#include <OCAF/MDF/Handle_MDF_DataMapNodeOfTypeASDriverMap.hxx>
class Standard_NoSuchObject;
class Standard_Type;
class MDF_ASDriver;
class TColStd_MapTransientHasher;
class MDF_TypeASDriverMap;
class MDF_DataMapNodeOfTypeASDriverMap;



class MDF_DataMapIteratorOfTypeASDriverMap  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MDF_DataMapIteratorOfTypeASDriverMap();
  
  Standard_EXPORT MDF_DataMapIteratorOfTypeASDriverMap(const MDF_TypeASDriverMap& aMap);
  
  Standard_EXPORT   void Initialize (const MDF_TypeASDriverMap& aMap) ;
  
  Standard_EXPORT  const  Handle(Standard_Type)& Key()  const;
  
  Standard_EXPORT  const  Handle(MDF_ASDriver)& Value()  const;




protected:





private:





};







#endif // _MDF_DataMapIteratorOfTypeASDriverMap_HeaderFile
