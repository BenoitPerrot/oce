// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_FuseFace_HeaderFile
#define _TopOpeBRepBuild_FuseFace_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>



class TopOpeBRepBuild_FuseFace 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TopOpeBRepBuild_FuseFace();
  
    TopOpeBRepBuild_FuseFace(const TopTools_ListOfShape& LIF, const TopTools_ListOfShape& LRF, const Standard_Integer CXM);
  
  Standard_EXPORT   void Init (const TopTools_ListOfShape& LIF, const TopTools_ListOfShape& LRF, const Standard_Integer CXM) ;
  
  Standard_EXPORT   void PerformFace() ;
  
  Standard_EXPORT   void PerformEdge() ;
  
  Standard_EXPORT   void ClearEdge() ;
  
  Standard_EXPORT   void ClearVertex() ;
  
      Standard_Boolean IsDone()  const;
  
      Standard_Boolean IsModified()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& LFuseFace()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& LInternEdge()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& LExternEdge()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& LModifEdge()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& LInternVertex()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& LExternVertex()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& LModifVertex()  const;




protected:



  TopTools_ListOfShape myLIE;
  TopTools_ListOfShape myLEE;
  TopTools_ListOfShape myLME;
  TopTools_ListOfShape myLIV;
  TopTools_ListOfShape myLEV;
  TopTools_ListOfShape myLMV;


private:



  TopTools_ListOfShape myLIF;
  TopTools_ListOfShape myLRF;
  TopTools_ListOfShape myLFF;
  Standard_Boolean myInternal;
  Standard_Boolean myModified;
  Standard_Boolean myDone;


};


#include <ModelingAlgorithms/TopOpeBRepBuild/TopOpeBRepBuild_FuseFace.lxx>





#endif // _TopOpeBRepBuild_FuseFace_HeaderFile
