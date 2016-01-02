// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_HeaderFile
#define _SelectBasics_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
class SelectBasics_EntityOwner;
class SelectBasics_SortAlgo;
class SelectBasics_BasicTool;
class SelectBasics_SequenceOfOwner;
class SelectBasics_SensitiveEntity;
class SelectBasics_SequenceNodeOfSequenceOfOwner;


//! kernel of dynamic selection:
//! - contains the algorithm to sort the sensitive areas
//! before the selection action;->quick selection of
//! an item in a set of items...
//! - contains the entities able to give the algorithm
//! sensitive areas .
class SelectBasics 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Structure to provide all-in-one information on picking arguments
  //! for "Matches" method of SelectBasics_SensitiveEntity.
  Standard_EXPORT static   Standard_Integer MaxOwnerPriority() ;
  
  Standard_EXPORT static   Standard_Integer MinOwnerPriority() ;




protected:





private:




friend class SelectBasics_EntityOwner;
friend class SelectBasics_SortAlgo;
friend class SelectBasics_BasicTool;
friend class SelectBasics_SequenceOfOwner;
friend class SelectBasics_SensitiveEntity;
friend class SelectBasics_SequenceNodeOfSequenceOfOwner;

};







#endif // _SelectBasics_HeaderFile
