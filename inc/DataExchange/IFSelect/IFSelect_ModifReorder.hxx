// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_ModifReorder_HeaderFile
#define _IFSelect_ModifReorder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_ModifReorder.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/IFSelect/IFSelect_Modifier.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
#include <DataExchange/Interface/Handle_Interface_Protocol.hxx>
class IFSelect_ContextModif;
class Interface_InterfaceModel;
class Interface_Protocol;
class Interface_CopyTool;
class TCollection_AsciiString;


//! This modifier reorders a whole model from its roots, i.e.
//! according to <rootlast> status, it considers each of its
//! roots, then it orders all its shared entities at any level,
//! the result begins by the lower level entities ... ends by
//! the roots.
class IFSelect_ModifReorder : public IFSelect_Modifier
{

public:

  
  //! Creates a ModifReorder. It may change the graph (it does !)
  //! If <rootlast> is True (D), roots are set at the end of packets
  //! Else, they are set at beginning (as done by AddWithRefs)
  Standard_EXPORT IFSelect_ModifReorder(const Standard_Boolean rootlast = Standard_True);
  
  //! Acts by computing orders (by method All from ShareTool) then
  //! forcing them in the model. Remark that selection is ignored :
  //! ALL the model is processed in once
  Standard_EXPORT   void Perform (IFSelect_ContextModif& ctx, const Handle(Interface_InterfaceModel)& target, const Handle(Interface_Protocol)& protocol, Interface_CopyTool& TC)  const;
  
  //! Returns Label as "Reorder, Roots (last or first)"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IFSelect_ModifReorder)

protected:




private: 


  Standard_Boolean thertl;


};







#endif // _IFSelect_ModifReorder_HeaderFile
