// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_SelectFaces_HeaderFile
#define _STEPSelections_SelectFaces_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/STEPSelections/Handle_STEPSelections_SelectFaces.hxx>

#include <DataExchange/IFSelect/IFSelect_SelectExplore.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;


//! This selection returns "STEP faces"
class STEPSelections_SelectFaces : public IFSelect_SelectExplore
{

public:

  
  Standard_EXPORT STEPSelections_SelectFaces();
  
  //! Explores an entity, to take its faces
  //! Works recursively
  Standard_EXPORT   Standard_Boolean Explore (const Standard_Integer level, const Handle(Standard_Transient)& ent, const Interface_Graph& G, Interface_EntityIterator& explored)  const;
  
  //! Returns a text defining the criterium : "Faces"
  Standard_EXPORT   TCollection_AsciiString ExploreLabel()  const;




  DEFINE_STANDARD_RTTI(STEPSelections_SelectFaces)

protected:




private: 




};







#endif // _STEPSelections_SelectFaces_HeaderFile
