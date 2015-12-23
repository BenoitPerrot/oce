// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DeltaOnModificationOfByteArray_HeaderFile
#define _TDataStd_DeltaOnModificationOfByteArray_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_DeltaOnModificationOfByteArray.hxx>

#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_TColStd_HArray1OfByte.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/TDF/TDF_DeltaOnModification.hxx>
#include <Handle_TDataStd_ByteArray.hxx>
class TColStd_HArray1OfInteger;
class TColStd_HArray1OfByte;
class TDataStd_ByteArray;


//! This class provides default services for an
//! AttributeDelta on a MODIFICATION action.
class TDataStd_DeltaOnModificationOfByteArray : public TDF_DeltaOnModification
{

public:

  
  //! Initializes a TDF_DeltaOnModification.
  Standard_EXPORT TDataStd_DeltaOnModificationOfByteArray(const Handle(TDataStd_ByteArray)& Arr);
  
  //! Applies the delta to the attribute.
  Standard_EXPORT virtual   void Apply() ;




  DEFINE_STANDARD_RTTI(TDataStd_DeltaOnModificationOfByteArray)

protected:




private: 


  Handle(TColStd_HArray1OfInteger) myIndxes;
  Handle(TColStd_HArray1OfByte) myValues;
  Standard_Integer myUp1;
  Standard_Integer myUp2;


};







#endif // _TDataStd_DeltaOnModificationOfByteArray_HeaderFile
