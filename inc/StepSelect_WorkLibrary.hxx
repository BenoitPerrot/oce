// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepSelect_WorkLibrary_HeaderFile
#define _StepSelect_WorkLibrary_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepSelect_WorkLibrary.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
#include <Handle_Interface_Protocol.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Message_Messenger.hxx>
class Interface_InterfaceModel;
class Interface_Protocol;
class IFSelect_ContextWrite;
class Interface_EntityIterator;
class Interface_CopyTool;
class Standard_Transient;
class Message_Messenger;


//! Performs Read and Write a STEP File with a STEP Model
//! Following the protocols, Copy may be implemented or not
class StepSelect_WorkLibrary : public IFSelect_WorkLibrary
{

public:

  
  //! Creates a STEP WorkLibrary
  //! <copymode> precises whether Copy is implemented or not
  Standard_EXPORT StepSelect_WorkLibrary(const Standard_Boolean copymode = Standard_True);
  
  //! Selects a mode to dump entities
  //! 0 (D) : prints numbers, then displays table number/label
  //! 1 : prints labels, then displays table label/number
  //! 2 : prints labels onky
  Standard_EXPORT   void SetDumpLabel (const Standard_Integer mode) ;
  
  //! Reads a STEP File and returns a STEP Model (into <mod>),
  //! or lets <mod> "Null" in case of Error
  //! Returns 0 if OK, 1 if Read Error, -1 if File not opened
  Standard_EXPORT   Standard_Integer ReadFile (const Standard_CString name, Handle(Interface_InterfaceModel)& model, const Handle(Interface_Protocol)& protocol)  const;
  
  //! Writes a File from a STEP Model
  //! Returns False (and writes no file) if <ctx> does not bring a
  //! STEP Model
  Standard_EXPORT   Standard_Boolean WriteFile (IFSelect_ContextWrite& ctx)  const;
  
  //! Performs the copy of entities from an original model to a new
  //! one. Works according <copymode> :
  //! if True, standard copy is run
  //! else nothing is done and returned value is False
  Standard_EXPORT virtual   Standard_Boolean CopyModel (const Handle(Interface_InterfaceModel)& original, const Handle(Interface_InterfaceModel)& newmodel, const Interface_EntityIterator& list, Interface_CopyTool& TC)  const;
  
  //! Dumps an entity under STEP form, i.e. as a part of a Step file
  //! Works with a StepDumper.
  //! Level 0 just displays type; level 1 displays the entity itself
  //! and level 2 displays the entity plus its shared ones (one
  //! sub-level : immediately shared entities)
  Standard_EXPORT   void DumpEntity (const Handle(Interface_InterfaceModel)& model, const Handle(Interface_Protocol)& protocol, const Handle(Standard_Transient)& entity, const Handle(Message_Messenger)& S, const Standard_Integer level)  const;




  DEFINE_STANDARD_RTTI(StepSelect_WorkLibrary)

protected:




private: 


  Standard_Boolean thecopymode;
  Standard_Integer thelabmode;


};







#endif // _StepSelect_WorkLibrary_HeaderFile
