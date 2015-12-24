// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapIteratorOfDataMapOfIntegerBisec_HeaderFile
#define _MAT2d_DataMapIteratorOfDataMapOfIntegerBisec_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/MAT2d/Handle_MAT2d_DataMapNodeOfDataMapOfIntegerBisec.hxx>
class Standard_NoSuchObject;
class Bisector_Bisec;
class TColStd_MapIntegerHasher;
class MAT2d_DataMapOfIntegerBisec;
class MAT2d_DataMapNodeOfDataMapOfIntegerBisec;



class MAT2d_DataMapIteratorOfDataMapOfIntegerBisec  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfIntegerBisec();
  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfIntegerBisec(const MAT2d_DataMapOfIntegerBisec& aMap);
  
  Standard_EXPORT   void Initialize (const MAT2d_DataMapOfIntegerBisec& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Bisector_Bisec& Value()  const;




protected:





private:





};







#endif // _MAT2d_DataMapIteratorOfDataMapOfIntegerBisec_HeaderFile
