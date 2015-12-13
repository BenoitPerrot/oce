// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_MeshVS_HArray1OfSequenceOfInteger.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger.hxx>
class Standard_NoSuchObject;
class MeshVS_HArray1OfSequenceOfInteger;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfHArray1OfSequenceOfInteger;
class MeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger;



class MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger();
  
  Standard_EXPORT MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger(const MeshVS_DataMapOfHArray1OfSequenceOfInteger& aMap);
  
  Standard_EXPORT   void Initialize (const MeshVS_DataMapOfHArray1OfSequenceOfInteger& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Handle(MeshVS_HArray1OfSequenceOfInteger)& Value()  const;




protected:





private:





};







#endif // _MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger_HeaderFile
