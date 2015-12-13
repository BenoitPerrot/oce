// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_FaceAreaBuilder_HeaderFile
#define _TopOpeBRepBuild_FaceAreaBuilder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopOpeBRepBuild_Area2dBuilder.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopOpeBRepBuild_LoopSet;
class TopOpeBRepBuild_LoopClassifier;



//! The FaceAreaBuilder algorithm is used to construct Faces from a LoopSet,
//! where the Loop is the composite topological object of the boundary,
//! here wire or block of edges.
//! The LoopSet gives an iteration on Loops.
//! For each Loop  it indicates if it is on the boundary (wire) or if it
//! results from  an interference (block of edges).
//! The result of the FaceAreaBuilder is an iteration on areas.
//! An area is described by a set of Loops.
class TopOpeBRepBuild_FaceAreaBuilder  : public TopOpeBRepBuild_Area2dBuilder
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_FaceAreaBuilder();
  
  //! Creates a FaceAreaBuilder to build faces on
  //! the (wires,blocks of edge) of <LS>, using the classifier <LC>.
  Standard_EXPORT TopOpeBRepBuild_FaceAreaBuilder(TopOpeBRepBuild_LoopSet& LS, TopOpeBRepBuild_LoopClassifier& LC, const Standard_Boolean ForceClass = Standard_False);
  
  Standard_EXPORT   void InitFaceAreaBuilder (TopOpeBRepBuild_LoopSet& LS, TopOpeBRepBuild_LoopClassifier& LC, const Standard_Boolean ForceClass = Standard_False) ;




protected:





private:





};







#endif // _TopOpeBRepBuild_FaceAreaBuilder_HeaderFile
