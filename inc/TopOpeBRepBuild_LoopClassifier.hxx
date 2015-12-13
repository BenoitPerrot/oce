// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_LoopClassifier_HeaderFile
#define _TopOpeBRepBuild_LoopClassifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopAbs_State.hxx>
#include <Handle_TopOpeBRepBuild_Loop.hxx>
class TopOpeBRepBuild_Loop;


//! classify loops in order to build Areas
class TopOpeBRepBuild_LoopClassifier 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~TopOpeBRepBuild_LoopClassifier(){Delete() ; }
  
  //! Returns the state of loop <L1> compared with loop <L2>.
  Standard_EXPORT virtual   TopAbs_State Compare (const Handle(TopOpeBRepBuild_Loop)& L1, const Handle(TopOpeBRepBuild_Loop)& L2)  = 0;




protected:





private:





};







#endif // _TopOpeBRepBuild_LoopClassifier_HeaderFile
