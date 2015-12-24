// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSControl_Writer_HeaderFile
#define _XSControl_Writer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/XSControl/Handle_XSControl_WorkSession.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Interface/Handle_Interface_InterfaceModel.hxx>
#include <DataExchange/IFSelect/IFSelect_ReturnStatus.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class XSControl_WorkSession;
class Interface_InterfaceModel;
class TopoDS_Shape;


//! This class gives a simple way to create then write a
//! Model compliant to a given norm, from a Shape
//! The model can then be edited by tools by other appropriate tools
class XSControl_Writer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a Writer from scratch
  Standard_EXPORT XSControl_Writer();
  
  //! Creates a Writer from scratch, with a norm name which
  //! identifie a Controller
  Standard_EXPORT XSControl_Writer(const Standard_CString norm);
  
  //! Creates a Writer from an already existing Session
  //! If <scratch> is True (D), clears already recorded data
  Standard_EXPORT XSControl_Writer(const Handle(XSControl_WorkSession)& WS, const Standard_Boolean scratch = Standard_True);
  
  //! Sets a specific norm to <me>
  //! Returns True if done, False if <norm> is not available
  Standard_EXPORT   Standard_Boolean SetNorm (const Standard_CString norm) ;
  
  //! Sets a specific session to <me>
  Standard_EXPORT   void SetWS (const Handle(XSControl_WorkSession)& WS, const Standard_Boolean scratch = Standard_True) ;
  
  //! Returns the session used in <me>
  Standard_EXPORT   Handle(XSControl_WorkSession) WS()  const;
  
  //! Returns the produced model. Produces a new one if not yet done
  //! or if <newone> is True
  //! This method allows for instance to edit product or header
  //! data before writing
  Standard_EXPORT   Handle(Interface_InterfaceModel) Model (const Standard_Boolean newone = Standard_False) ;
  
  //! Transfers a Shape according to the mode
  Standard_EXPORT   IFSelect_ReturnStatus TransferShape (const TopoDS_Shape& sh, const Standard_Integer mode = 0) ;
  
  //! Writes the produced model
  Standard_EXPORT   IFSelect_ReturnStatus WriteFile (const Standard_CString filename) ;
  
  //! Prints Statistics about Transfer
  Standard_EXPORT   void PrintStatsTransfer (const Standard_Integer what, const Standard_Integer mode = 0)  const;




protected:





private:



  Handle(XSControl_WorkSession) thesession;


};







#endif // _XSControl_Writer_HeaderFile
