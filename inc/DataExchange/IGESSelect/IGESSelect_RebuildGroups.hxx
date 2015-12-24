// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_RebuildGroups_HeaderFile
#define _IGESSelect_RebuildGroups_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESSelect/Handle_IGESSelect_RebuildGroups.hxx>

#include <DataExchange/IGESSelect/IGESSelect_ModelModifier.hxx>
#include <DataExchange/IGESData/Handle_IGESData_IGESModel.hxx>
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Rebuilds Groups which were bypassed to produce new models.
//! If a set of entities, all put into a same IGESModel, were
//! part of a same Group in the starting Model, this Modifier
//! rebuilds the original group, but only with the transferred
//! entities. The distinctions (Ordered or not, "WhithoutBackP"
//! or not) are renewed, also the name of the group.
//!
//! If the Input Selection is present, tries to rebuild groups
//! only for the selected entities. Else, tries to rebuild
//! groups for all the transferred entities.
class IGESSelect_RebuildGroups : public IGESSelect_ModelModifier
{

public:

  
  //! Creates an RebuildGroups, which uses the system Date
  Standard_EXPORT IGESSelect_RebuildGroups();
  
  //! Specific action : Rebuilds the original groups
  Standard_EXPORT   void Performing (IFSelect_ContextModif& ctx, const Handle(IGESData_IGESModel)& target, Interface_CopyTool& TC)  const;
  
  //! Returns a text which is
  //! "Rebuild Groups"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_RebuildGroups)

protected:




private: 




};







#endif // _IGESSelect_RebuildGroups_HeaderFile
