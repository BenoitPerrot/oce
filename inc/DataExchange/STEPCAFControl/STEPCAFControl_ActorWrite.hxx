// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_ActorWrite_HeaderFile
#define _STEPCAFControl_ActorWrite_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/STEPCAFControl/Handle_STEPCAFControl_ActorWrite.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopTools/TopTools_MapOfShape.hxx>
#include <DataExchange/STEPControl/STEPControl_ActorWrite.hxx>
class TopoDS_Shape;


//! Extends ActorWrite from STEPControl by analysis of
//! whether shape is assembly (based on information from DECAF)
class STEPCAFControl_ActorWrite : public STEPControl_ActorWrite
{

public:

  
  Standard_EXPORT STEPCAFControl_ActorWrite();
  
  //! Check whether shape S is assembly
  //! Returns True if shape is registered in assemblies map
  Standard_EXPORT virtual   Standard_Boolean IsAssembly (TopoDS_Shape& S)  const;
  
  //! Set standard mode of work
  //! In standard mode Actor (default) behaves exactly as its
  //! ancestor, also map is cleared
  Standard_EXPORT   void SetStdMode (const Standard_Boolean stdmode = Standard_True) ;
  
  //! Clears map of shapes registered as assemblies
  Standard_EXPORT   void ClearMap() ;
  
  //! Registers shape to be written as assembly
  //! The shape should be TopoDS_Compound (else does nothing)
  Standard_EXPORT   void RegisterAssembly (const TopoDS_Shape& S) ;




  DEFINE_STANDARD_RTTI(STEPCAFControl_ActorWrite)

protected:




private: 


  Standard_Boolean myStdMode;
  TopTools_MapOfShape myMap;


};







#endif // _STEPCAFControl_ActorWrite_HeaderFile
