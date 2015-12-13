// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DeltaOnModificationOfIntPackedMap_HeaderFile
#define _TDataStd_DeltaOnModificationOfIntPackedMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_DeltaOnModificationOfIntPackedMap.hxx>

#include <Handle_TColStd_HPackedMapOfInteger.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <Handle_TDataStd_IntPackedMap.hxx>
class TColStd_HPackedMapOfInteger;
class TDataStd_IntPackedMap;


//! This class provides default services for an
//! AttributeDelta on a MODIFICATION action.
class TDataStd_DeltaOnModificationOfIntPackedMap : public TDF_DeltaOnModification
{

public:

  
  //! Initializes a TDF_DeltaOnModification.
  Standard_EXPORT TDataStd_DeltaOnModificationOfIntPackedMap(const Handle(TDataStd_IntPackedMap)& Arr);
  
  //! Applies the delta to the attribute.
  Standard_EXPORT virtual   void Apply() ;




  DEFINE_STANDARD_RTTI(TDataStd_DeltaOnModificationOfIntPackedMap)

protected:




private: 


  Handle(TColStd_HPackedMapOfInteger) myAddition;
  Handle(TColStd_HPackedMapOfInteger) myDeletion;


};







#endif // _TDataStd_DeltaOnModificationOfIntPackedMap_HeaderFile
