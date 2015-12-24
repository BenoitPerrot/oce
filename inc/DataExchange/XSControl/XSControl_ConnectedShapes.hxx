// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSControl_ConnectedShapes_HeaderFile
#define _XSControl_ConnectedShapes_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/XSControl/Handle_XSControl_ConnectedShapes.hxx>

#include <DataExchange/XSControl/Handle_XSControl_TransferReader.hxx>
#include <DataExchange/IFSelect/IFSelect_SelectExplore.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <Foundation/TColStd/Handle_TColStd_HSequenceOfTransient.hxx>
#include <DataExchange/Transfer/Handle_Transfer_TransientProcess.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
class XSControl_TransferReader;
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;
class TColStd_HSequenceOfTransient;
class TopoDS_Shape;
class Transfer_TransientProcess;


//! From a TopoDS_Shape, or from the entity which has produced it,
//! searches for the shapes, and the entities which have produced
//! them in last transfer, which are adjacent to it by VERTICES
class XSControl_ConnectedShapes : public IFSelect_SelectExplore
{

public:

  
  //! Creates a Selection ConnectedShapes. It remains to be set a
  //! TransferReader
  Standard_EXPORT XSControl_ConnectedShapes();
  
  //! Creates a Selection ConnectedShapes, which will work with the
  //! current TransferProcess brought by the TransferReader
  Standard_EXPORT XSControl_ConnectedShapes(const Handle(XSControl_TransferReader)& TR);
  
  //! Sets a TransferReader to sort entities : it brings the
  //! TransferProcess which may change, while the TransferReader does not
  Standard_EXPORT   void SetReader (const Handle(XSControl_TransferReader)& TR) ;
  
  //! Explores an entity : entities from which are connected to that
  //! produced by this entity, including itself
  Standard_EXPORT   Standard_Boolean Explore (const Standard_Integer level, const Handle(Standard_Transient)& ent, const Interface_Graph& G, Interface_EntityIterator& explored)  const;
  
  //! Returns a text defining the criterium.
  //! "Connected Entities through produced Shapes"
  Standard_EXPORT   TCollection_AsciiString ExploreLabel()  const;
  
  //! This functions considers a shape from a transfer and performs
  //! the search function explained above
  Standard_EXPORT static   Handle(TColStd_HSequenceOfTransient) AdjacentEntities (const TopoDS_Shape& ashape, const Handle(Transfer_TransientProcess)& TP, const TopAbs_ShapeEnum type) ;




  DEFINE_STANDARD_RTTI(XSControl_ConnectedShapes)

protected:




private: 


  Handle(XSControl_TransferReader) theTR;


};







#endif // _XSControl_ConnectedShapes_HeaderFile
