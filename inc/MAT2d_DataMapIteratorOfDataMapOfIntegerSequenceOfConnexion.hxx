// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion_HeaderFile
#define _MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion.hxx>
class Standard_NoSuchObject;
class MAT2d_SequenceOfConnexion;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerSequenceOfConnexion;
class MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion;



class MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion();
  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion(const MAT2d_DataMapOfIntegerSequenceOfConnexion& aMap);
  
  Standard_EXPORT   void Initialize (const MAT2d_DataMapOfIntegerSequenceOfConnexion& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  MAT2d_SequenceOfConnexion& Value()  const;




protected:





private:





};







#endif // _MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion_HeaderFile
