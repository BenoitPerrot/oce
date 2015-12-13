// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_DeltaOnRemoval_HeaderFile
#define _TNaming_DeltaOnRemoval_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TNaming_DeltaOnRemoval.hxx>

#include <Handle_TNaming_DeltaOnModification.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <Handle_TNaming_NamedShape.hxx>
class TNaming_DeltaOnModification;
class TNaming_NamedShape;



class TNaming_DeltaOnRemoval : public TDF_DeltaOnRemoval
{

public:

  
  //! Initializes a TDF_DeltaOnModification.
  Standard_EXPORT TNaming_DeltaOnRemoval(const Handle(TNaming_NamedShape)& NS);
  
  //! Applies the delta to the attribute.
  Standard_EXPORT virtual   void Apply() ;




  DEFINE_STANDARD_RTTI(TNaming_DeltaOnRemoval)

protected:




private: 


  Handle(TNaming_DeltaOnModification) myDelta;


};







#endif // _TNaming_DeltaOnRemoval_HeaderFile
