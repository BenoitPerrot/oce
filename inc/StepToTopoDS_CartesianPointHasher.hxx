// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_CartesianPointHasher_HeaderFile
#define _StepToTopoDS_CartesianPointHasher_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_StepGeom_CartesianPoint.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class StepGeom_CartesianPoint;



class StepToTopoDS_CartesianPointHasher 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a HasCode value  for  the  CartesianPoint
  Standard_EXPORT static   Standard_Integer HashCode (const Handle(StepGeom_CartesianPoint)& K, const Standard_Integer Upper) ;
  
  //! Returns True  when the two  CartesianPoint are the same
  Standard_EXPORT static   Standard_Boolean IsEqual (const Handle(StepGeom_CartesianPoint)& K1, const Handle(StepGeom_CartesianPoint)& K2) ;




protected:





private:





};







#endif // _StepToTopoDS_CartesianPointHasher_HeaderFile
