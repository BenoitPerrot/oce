// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Edge_HeaderFile
#define _StepShape_Edge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_Edge.hxx>

#include <Handle_StepShape_Vertex.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepShape_Vertex;
class TCollection_HAsciiString;



class StepShape_Edge : public StepShape_TopologicalRepresentationItem
{

public:

  
  //! Returns a Edge
  Standard_EXPORT StepShape_Edge();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepShape_Vertex)& aEdgeStart, const Handle(StepShape_Vertex)& aEdgeEnd) ;
  
  Standard_EXPORT virtual   void SetEdgeStart (const Handle(StepShape_Vertex)& aEdgeStart) ;
  
  Standard_EXPORT virtual   Handle(StepShape_Vertex) EdgeStart()  const;
  
  Standard_EXPORT virtual   void SetEdgeEnd (const Handle(StepShape_Vertex)& aEdgeEnd) ;
  
  Standard_EXPORT virtual   Handle(StepShape_Vertex) EdgeEnd()  const;




  DEFINE_STANDARD_RTTI(StepShape_Edge)

protected:




private: 


  Handle(StepShape_Vertex) edgeStart;
  Handle(StepShape_Vertex) edgeEnd;


};







#endif // _StepShape_Edge_HeaderFile
