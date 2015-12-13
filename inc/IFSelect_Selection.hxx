// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_Selection_HeaderFile
#define _IFSelect_Selection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IFSelect_Selection.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Interface_InterfaceError;
class Interface_EntityIterator;
class Interface_Graph;
class IFSelect_SelectionIterator;
class TCollection_AsciiString;


//! A Selection allows to define a set of Interface Entities.
//! Entities to be put on an output file should be identified in
//! a way as independant from such or such execution as possible.
//! This permits to handle comprehensive criteria, and to replay
//! them when a new variant of an input file has to be processed.
//!
//! Its input can be, either an Interface Model (the very source),
//! or another-other Selection(s) or any other ouput. All list
//! computations start from an input Graph (from IFGraph)
class IFSelect_Selection : public MMgt_TShared
{

public:

  
  //! Returns the list of selected entities, computed from Input
  //! given as a Graph. Specific to each class of Selection
  //! Note that uniqueness of each entity is not required here
  //! This method can raise an exception as necessary
  Standard_EXPORT virtual   Interface_EntityIterator RootResult (const Interface_Graph& G)  const = 0;
  
  //! Returns the list of selected entities, each of them beeing
  //! unique. Default definition works from RootResult. According
  //! HasUniqueResult, UniqueResult returns directly RootResult,
  //! or build a Unique Result from it with a Graph.
  Standard_EXPORT   Interface_EntityIterator UniqueResult (const Interface_Graph& G)  const;
  
  //! Returns the list of entities involved by a Selection, i.e.
  //! UniqueResult plus the shared entities (directly or not)
  Standard_EXPORT virtual   Interface_EntityIterator CompleteResult (const Interface_Graph& G)  const;
  
  //! Puts in an Iterator the Selections from which "me" depends
  //! (there can be zero, or one, or a list).
  //! Specific to each class of Selection
  Standard_EXPORT virtual   void FillIterator (IFSelect_SelectionIterator& iter)  const = 0;
  
  //! Returns a text which defines the criterium applied by a
  //! Selection (can be used to be printed, displayed ...)
  //! Specific to each class
  Standard_EXPORT virtual   TCollection_AsciiString Label()  const = 0;




  DEFINE_STANDARD_RTTI(IFSelect_Selection)

protected:

  
  //! Returns True if RootResult guarantees uniqueness for each
  //! Entity. Called by UniqueResult.
  //! Default answer is False. Can be redefined.
  Standard_EXPORT virtual   Standard_Boolean HasUniqueResult()  const;



private: 




};







#endif // _IFSelect_Selection_HeaderFile
