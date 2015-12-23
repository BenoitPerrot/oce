// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DeltaOnModificationOfIntArray_HeaderFile
#define _TDataStd_DeltaOnModificationOfIntArray_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_DeltaOnModificationOfIntArray.hxx>

#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/TDF/TDF_DeltaOnModification.hxx>
#include <Handle_TDataStd_IntegerArray.hxx>
class TColStd_HArray1OfInteger;
class TDataStd_IntegerArray;


//! This class provides default services for an
//! AttributeDelta on a MODIFICATION action.
class TDataStd_DeltaOnModificationOfIntArray : public TDF_DeltaOnModification
{

public:

  
  //! Initializes a TDF_DeltaOnModification.
  Standard_EXPORT TDataStd_DeltaOnModificationOfIntArray(const Handle(TDataStd_IntegerArray)& Arr);
  
  //! Applies the delta to the attribute.
  Standard_EXPORT virtual   void Apply() ;




  DEFINE_STANDARD_RTTI(TDataStd_DeltaOnModificationOfIntArray)

protected:




private: 


  Handle(TColStd_HArray1OfInteger) myIndxes;
  Handle(TColStd_HArray1OfInteger) myValues;
  Standard_Integer myUp1;
  Standard_Integer myUp2;


};







#endif // _TDataStd_DeltaOnModificationOfIntArray_HeaderFile
