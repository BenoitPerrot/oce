// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTopoBRep_FaceData_HeaderFile
#define _HLRTopoBRep_FaceData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopTools_ListOfShape.hxx>
class TopTools_ListOfShape;


//! Contains the  3 ListOfShape of  a Face  ( Internal
//! OutLines, OutLines on restriction and IsoLines ).
class HLRTopoBRep_FaceData 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRTopoBRep_FaceData();
  
     const  TopTools_ListOfShape& FaceIntL()  const;
  
     const  TopTools_ListOfShape& FaceOutL()  const;
  
     const  TopTools_ListOfShape& FaceIsoL()  const;
  
      TopTools_ListOfShape& AddIntL() ;
  
      TopTools_ListOfShape& AddOutL() ;
  
      TopTools_ListOfShape& AddIsoL() ;




protected:





private:



  TopTools_ListOfShape myIntL;
  TopTools_ListOfShape myOutL;
  TopTools_ListOfShape myIsoL;


};


#include <HLRTopoBRep_FaceData.lxx>





#endif // _HLRTopoBRep_FaceData_HeaderFile
