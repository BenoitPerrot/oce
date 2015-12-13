// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_PointReplica_HeaderFile
#define _StepGeom_PointReplica_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepGeom_PointReplica.hxx>

#include <Handle_StepGeom_Point.hxx>
#include <Handle_StepGeom_CartesianTransformationOperator.hxx>
#include <StepGeom_Point.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_Point;
class StepGeom_CartesianTransformationOperator;
class TCollection_HAsciiString;



class StepGeom_PointReplica : public StepGeom_Point
{

public:

  
  //! Returns a PointReplica
  Standard_EXPORT StepGeom_PointReplica();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Point)& aParentPt, const Handle(StepGeom_CartesianTransformationOperator)& aTransformation) ;
  
  Standard_EXPORT   void SetParentPt (const Handle(StepGeom_Point)& aParentPt) ;
  
  Standard_EXPORT   Handle(StepGeom_Point) ParentPt()  const;
  
  Standard_EXPORT   void SetTransformation (const Handle(StepGeom_CartesianTransformationOperator)& aTransformation) ;
  
  Standard_EXPORT   Handle(StepGeom_CartesianTransformationOperator) Transformation()  const;




  DEFINE_STANDARD_RTTI(StepGeom_PointReplica)

protected:




private: 


  Handle(StepGeom_Point) parentPt;
  Handle(StepGeom_CartesianTransformationOperator) transformation;


};







#endif // _StepGeom_PointReplica_HeaderFile
