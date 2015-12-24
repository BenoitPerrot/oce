// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_RstInt_HeaderFile
#define _IntPatch_RstInt_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/IntPatch/Handle_IntPatch_Line.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HSurface.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_TopolTool.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Standard_DomainError;
class IntPatch_Line;
class Adaptor3d_HSurface;
class Adaptor3d_TopolTool;


//! trouver les points d intersection entre la ligne de
//! cheminement et les arcs de restriction
class IntPatch_RstInt 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void PutVertexOnLine (Handle(IntPatch_Line)& L, const Handle(Adaptor3d_HSurface)& Surf, const Handle(Adaptor3d_TopolTool)& Domain, const Handle(Adaptor3d_HSurface)& OtherSurf, const Standard_Boolean OnFirst, const Standard_Real Tol, const Standard_Boolean hasBeenAdded = Standard_False) ;




protected:





private:





};







#endif // _IntPatch_RstInt_HeaderFile
