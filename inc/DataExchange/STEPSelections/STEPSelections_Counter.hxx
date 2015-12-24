// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_Counter_HeaderFile
#define _STEPSelections_Counter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/TColStd_MapOfTransient.hxx>
#include <Foundation/Standard/Handle_Standard_Transient.hxx>
#include <DataExchange/StepShape/Handle_StepShape_ConnectedFaceSet.hxx>
#include <DataExchange/StepGeom/Handle_StepGeom_CompositeCurve.hxx>
class Interface_Graph;
class Standard_Transient;
class StepShape_ConnectedFaceSet;
class StepGeom_CompositeCurve;



class STEPSelections_Counter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT STEPSelections_Counter();
  
  Standard_EXPORT   void Count (const Interface_Graph& graph, const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   void Clear() ;
  
      Standard_Integer NbInstancesOfFaces()  const;
  
      Standard_Integer POP()  const;
  
      Standard_Integer POP2()  const;
  
      Standard_Integer NbInstancesOfShells()  const;
  
      Standard_Integer NbInstancesOfSolids()  const;
  
      Standard_Integer NbInstancesOfEdges()  const;
  
      Standard_Integer NbInstancesOfWires()  const;
  
      Standard_Integer NbSourceFaces()  const;
  
      Standard_Integer NbSourceShells()  const;
  
      Standard_Integer NbSourceSolids()  const;
  
      Standard_Integer NbSourceEdges()  const;
  
      Standard_Integer NbSourceWires()  const;




protected:





private:

  
  Standard_EXPORT   void AddShell (const Handle(StepShape_ConnectedFaceSet)& cfs) ;
  
  Standard_EXPORT   void AddCompositeCurve (const Handle(StepGeom_CompositeCurve)& ccurve) ;


  Standard_Integer myNbFaces;
  Standard_Integer myNbShells;
  Standard_Integer myNbSolids;
  Standard_Integer myNbEdges;
  Standard_Integer myNbWires;
  TColStd_MapOfTransient myMapOfFaces;
  TColStd_MapOfTransient myMapOfShells;
  TColStd_MapOfTransient myMapOfSolids;
  TColStd_MapOfTransient myMapOfEdges;
  TColStd_MapOfTransient myMapOfWires;


};


#include <DataExchange/STEPSelections/STEPSelections_Counter.lxx>





#endif // _STEPSelections_Counter_HeaderFile
