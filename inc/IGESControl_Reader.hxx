// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESControl_Reader_HeaderFile
#define _IGESControl_Reader_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <XSControl_Reader.hxx>
#include <Handle_XSControl_WorkSession.hxx>
#include <Handle_IGESData_IGESModel.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <DataExchange/IFSelect/IFSelect_PrintFail.hxx>
#include <DataExchange/IFSelect/IFSelect_PrintCount.hxx>
class XSControl_WorkSession;
class IGESData_IGESModel;



//! Reads IGES files, checks them and translates their contents into Open CASCADE models.
//! The IGES data can be that of a whole model or that of a specific list of entities in the model.
//! As in XSControl_Reader, you specify the list using a selection.
//! For translation of iges files it is possible to use the following sequence:
//! To change parameters of translation
//! class Interface_Static should be used before the beginning of translation
//! (see IGES Parameters and General Parameters)
//! Creation of reader
//! IGESControl_Reader reader;
//! To load a file in a model use method:
//! reader.ReadFile("filename.igs")
//! To check a loading file use method Check:
//! reader.Check(failsonly); where failsonly is equal to Standard_True or
//! Standard_False;
//! To print the results of load:
//! reader.PrintCheckLoad(failsonly,mode) where mode is equal to the value of
//! enumeration IFSelect_PrintCount
//! To transfer entities from a model the following methods can be used:
//! for the whole model
//! reader.TransferRoots(onlyvisible); where onlyvisible is equal to
//! Standard_True or Standard_False;
//! To transfer a list of entities:
//! reader.TransferList(list);
//! To transfer one entity
//! reader.TransferEntity(ent) or reader.Transfer(num);
//! To obtain a result the following method can be used:
//! reader.IsDone()
//! reader.NbShapes() and reader.Shape(num); or reader.OneShape();
//! To print the results of transfer use method:
//! reader.PrintTransferInfo(failwarn,mode); where printfail is equal to the
//! value of enumeration IFSelect_PrintFail, mode see above.
//! Gets correspondence between an IGES entity and a result shape obtained therefrom.
//! reader.TransientProcess();
//! TopoDS_Shape shape =
//! TransferBRep::ShapeResult(reader.TransientProcess(),ent);
class IGESControl_Reader  : public XSControl_Reader
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a Reader from scratch
  Standard_EXPORT IGESControl_Reader();
  
  //! Creates a Reader from an already existing Session
  Standard_EXPORT IGESControl_Reader(const Handle(XSControl_WorkSession)& WS, const Standard_Boolean scratch = Standard_True);
  
  //! Set the transion of ALL Roots (if theReadOnlyVisible is False)
  //! or of Visible Roots (if theReadOnlyVisible is True)
      void SetReadVisible (const Standard_Boolean ReadRoot) ;
  
      Standard_Boolean GetReadVisible()  const;
  
  //! Returns the model as a IGESModel.
  //! It can then be consulted (header, product)
  Standard_EXPORT   Handle(IGESData_IGESModel) IGESModel()  const;
  
  //! Determines the list of root entities from Model which are candidate for
  //! a transfer to a Shape (type of entities is PRODUCT)
  //! <theReadOnlyVisible> is taken into account to define roots
  Standard_EXPORT virtual   Standard_Integer NbRootsForTransfer() ;
  
  //! Prints Statistics and check list for Transfer
  Standard_EXPORT   void PrintTransferInfo (const IFSelect_PrintFail failwarn, const IFSelect_PrintCount mode)  const;




protected:





private:



  Standard_Boolean theReadOnlyVisible;


};


#include <IGESControl_Reader.lxx>





#endif // _IGESControl_Reader_HeaderFile
