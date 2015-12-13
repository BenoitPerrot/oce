// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_WPointInterIterator_HeaderFile
#define _TopOpeBRep_WPointInterIterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopOpeBRep_PLineInter.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopOpeBRep_LineInter;
class TopOpeBRep_WPointInter;



class TopOpeBRep_WPointInterIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRep_WPointInterIterator();
  
  Standard_EXPORT TopOpeBRep_WPointInterIterator(const TopOpeBRep_LineInter& LI);
  
  Standard_EXPORT   void Init (const TopOpeBRep_LineInter& LI) ;
  
  Standard_EXPORT   void Init() ;
  
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT  const  TopOpeBRep_WPointInter& CurrentWP() ;
  
  Standard_EXPORT   TopOpeBRep_PLineInter PLineInterDummy()  const;




protected:





private:



  TopOpeBRep_PLineInter myLineInter;
  Standard_Integer myWPointIndex;
  Standard_Integer myWPointNb;


};







#endif // _TopOpeBRep_WPointInterIterator_HeaderFile
