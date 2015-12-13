// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_CopyControl_HeaderFile
#define _Interface_CopyControl_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Interface_CopyControl.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Standard_Boolean.hxx>
class Interface_InterfaceError;
class Standard_Transient;


//! This deferred class describes the services required by
//! CopyTool to work. They are very simple and correspond
//! basically to the management of an indexed map.
//! But they can be provided by various classes which can
//! control a Transfer. Each Starting Entity have at most
//! one Result (Mapping one-one)
class Interface_CopyControl : public MMgt_TShared
{

public:

  
  //! Clears List of Copy Results. Gets Ready to begin another Copy
  //! Process.
  Standard_EXPORT virtual   void Clear()  = 0;
  
  //! Bind a Result to a Starting Entity identified by its Number
  Standard_EXPORT virtual   void Bind (const Handle(Standard_Transient)& ent, const Handle(Standard_Transient)& res)  = 0;
  
  //! Searches for the Result bound to a Startingf Entity identified
  //! by its Number.
  //! If Found, returns True and fills <res>
  //! Else, returns False and nullifies <res>
  Standard_EXPORT virtual   Standard_Boolean Search (const Handle(Standard_Transient)& ent, Handle(Standard_Transient)& res)  const = 0;




  DEFINE_STANDARD_RTTI(Interface_CopyControl)

protected:




private: 




};







#endif // _Interface_CopyControl_HeaderFile
