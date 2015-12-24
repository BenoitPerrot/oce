// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ConnectedFaceSet_HeaderFile
#define _StepShape_ConnectedFaceSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepShape/Handle_StepShape_ConnectedFaceSet.hxx>

#include <DataExchange/StepShape/Handle_StepShape_HArray1OfFace.hxx>
#include <DataExchange/StepShape/StepShape_TopologicalRepresentationItem.hxx>
#include <Foundation/TCollection/Handle_TCollection_HAsciiString.hxx>
#include <DataExchange/StepShape/Handle_StepShape_Face.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class StepShape_HArray1OfFace;
class TCollection_HAsciiString;
class StepShape_Face;



class StepShape_ConnectedFaceSet : public StepShape_TopologicalRepresentationItem
{

public:

  
  //! Returns a ConnectedFaceSet
  Standard_EXPORT StepShape_ConnectedFaceSet();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepShape_HArray1OfFace)& aCfsFaces) ;
  
  Standard_EXPORT virtual   void SetCfsFaces (const Handle(StepShape_HArray1OfFace)& aCfsFaces) ;
  
  Standard_EXPORT virtual   Handle(StepShape_HArray1OfFace) CfsFaces()  const;
  
  Standard_EXPORT virtual   Handle(StepShape_Face) CfsFacesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT virtual   Standard_Integer NbCfsFaces()  const;




  DEFINE_STANDARD_RTTI(StepShape_ConnectedFaceSet)

protected:




private: 


  Handle(StepShape_HArray1OfFace) cfsFaces;


};







#endif // _StepShape_ConnectedFaceSet_HeaderFile
