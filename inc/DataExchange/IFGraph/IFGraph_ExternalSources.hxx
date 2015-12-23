// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFGraph_ExternalSources_HeaderFile
#define _IFGraph_ExternalSources_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/Interface/Interface_Graph.hxx>
#include <DataExchange/Interface/Interface_GraphContent.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Interface_Graph;
class Standard_Transient;
class Interface_EntityIterator;


//! this class gives entities which are Source of entities of
//! a sub-part, but are not contained by this sub-part
class IFGraph_ExternalSources  : public Interface_GraphContent
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! creates empty ExternalSources, ready to work
  Standard_EXPORT IFGraph_ExternalSources(const Interface_Graph& agraph);
  
  //! adds an entity and its shared ones to the list
  Standard_EXPORT   void GetFromEntity (const Handle(Standard_Transient)& ent) ;
  
  //! adds a list of entities (as an iterator) with shared ones
  Standard_EXPORT   void GetFromIter (const Interface_EntityIterator& iter) ;
  
  //! Allows to restart on a new data set
  Standard_EXPORT   void ResetData() ;
  
  //! Evaluates external sources of a set of entities
  Standard_EXPORT virtual   void Evaluate() ;
  
  //! Returns True if no External Source are found
  //! It means that we have a "root" set
  //! (performs an Evaluation as necessary)
  Standard_EXPORT   Standard_Boolean IsEmpty() ;




protected:





private:



  Interface_Graph thegraph;


};







#endif // _IFGraph_ExternalSources_HeaderFile
