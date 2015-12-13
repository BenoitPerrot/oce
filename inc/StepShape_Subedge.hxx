// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_Subedge_HeaderFile
#define _StepShape_Subedge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepShape_Subedge.hxx>

#include <Handle_StepShape_Edge.hxx>
#include <StepShape_Edge.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepShape_Vertex.hxx>
class StepShape_Edge;
class TCollection_HAsciiString;
class StepShape_Vertex;


//! Representation of STEP entity Subedge
class StepShape_Subedge : public StepShape_Edge
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepShape_Subedge();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentationItem_Name, const Handle(StepShape_Vertex)& aEdge_EdgeStart, const Handle(StepShape_Vertex)& aEdge_EdgeEnd, const Handle(StepShape_Edge)& aParentEdge) ;
  
  //! Returns field ParentEdge
  Standard_EXPORT   Handle(StepShape_Edge) ParentEdge()  const;
  
  //! Set field ParentEdge
  Standard_EXPORT   void SetParentEdge (const Handle(StepShape_Edge)& ParentEdge) ;




  DEFINE_STANDARD_RTTI(StepShape_Subedge)

protected:




private: 


  Handle(StepShape_Edge) theParentEdge;


};







#endif // _StepShape_Subedge_HeaderFile
