// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_NMTool_HeaderFile
#define _StepToTopoDS_NMTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <DataExchange/StepToTopoDS/StepToTopoDS_DataMapOfRI.hxx>
#include <DataExchange/StepToTopoDS/StepToTopoDS_DataMapOfRINames.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/StepRepr/Handle_StepRepr_RepresentationItem.hxx>
class StepToTopoDS_DataMapOfRI;
class StepToTopoDS_DataMapOfRINames;
class StepRepr_RepresentationItem;
class TCollection_AsciiString;
class TopoDS_Shape;


//! Provides data to process non-manifold topology when
//! reading from STEP.
class StepToTopoDS_NMTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepToTopoDS_NMTool();
  
  Standard_EXPORT StepToTopoDS_NMTool(const StepToTopoDS_DataMapOfRI& MapOfRI, const StepToTopoDS_DataMapOfRINames& MapOfRINames);
  
  Standard_EXPORT   void Init (const StepToTopoDS_DataMapOfRI& MapOfRI, const StepToTopoDS_DataMapOfRINames& MapOfRINames) ;
  
  Standard_EXPORT   void SetActive (const Standard_Boolean isActive) ;
  
  Standard_EXPORT   Standard_Boolean IsActive() ;
  
  Standard_EXPORT   void CleanUp() ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(StepRepr_RepresentationItem)& RI) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TCollection_AsciiString& RIName) ;
  
  Standard_EXPORT   void Bind (const Handle(StepRepr_RepresentationItem)& RI, const TopoDS_Shape& S) ;
  
  Standard_EXPORT   void Bind (const TCollection_AsciiString& RIName, const TopoDS_Shape& S) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Find (const Handle(StepRepr_RepresentationItem)& RI) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Find (const TCollection_AsciiString& RIName) ;
  
  Standard_EXPORT   void RegisterNMEdge (const TopoDS_Shape& Edge) ;
  
  Standard_EXPORT   Standard_Boolean IsSuspectedAsClosing (const TopoDS_Shape& BaseShell, const TopoDS_Shape& SuspectedShell) ;
  
  Standard_EXPORT   Standard_Boolean IsPureNMShell (const TopoDS_Shape& Shell) ;
  
  Standard_EXPORT   void SetIDEASCase (const Standard_Boolean IDEASCase) ;
  
  Standard_EXPORT   Standard_Boolean IsIDEASCase() ;




protected:





private:

  
  Standard_EXPORT   Standard_Boolean isEdgeRegisteredAsNM (const TopoDS_Shape& Edge) ;
  
  Standard_EXPORT   Standard_Boolean isAdjacentShell (const TopoDS_Shape& ShellA, const TopoDS_Shape& ShellB) ;


  StepToTopoDS_DataMapOfRI myRIMap;
  StepToTopoDS_DataMapOfRINames myRINamesMap;
  TopTools_ListOfShape myNMEdges;
  Standard_Boolean myIDEASCase;
  Standard_Boolean myActiveFlag;


};







#endif // _StepToTopoDS_NMTool_HeaderFile
