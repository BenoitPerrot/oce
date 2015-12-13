// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerColor_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerColor_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerColor.hxx>
class Standard_NoSuchObject;
class Quantity_Color;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerColor;
class MeshVS_DataMapNodeOfDataMapOfIntegerColor;



class MeshVS_DataMapIteratorOfDataMapOfIntegerColor  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerColor();
  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfIntegerColor(const MeshVS_DataMapOfIntegerColor& aMap);
  
  Standard_EXPORT   void Initialize (const MeshVS_DataMapOfIntegerColor& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Quantity_Color& Value()  const;




protected:





private:





};







#endif // _MeshVS_DataMapIteratorOfDataMapOfIntegerColor_HeaderFile
