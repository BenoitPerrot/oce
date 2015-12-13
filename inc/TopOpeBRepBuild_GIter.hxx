// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_GIter_HeaderFile
#define _TopOpeBRepBuild_GIter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TopAbs_State.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TopOpeBRepBuild_GTopo;



class TopOpeBRepBuild_GIter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_GIter();
  
  Standard_EXPORT TopOpeBRepBuild_GIter(const TopOpeBRepBuild_GTopo& G);
  
  Standard_EXPORT   void Init() ;
  
  Standard_EXPORT   void Init (const TopOpeBRepBuild_GTopo& G) ;
  
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   void Current (TopAbs_State& s1, TopAbs_State& s2)  const;
  
  Standard_EXPORT   void Dump (Standard_OStream& OS)  const;




protected:





private:

  
  Standard_EXPORT   void Find() ;


  Standard_Integer myII;
  Standard_Address mypG;


};







#endif // _TopOpeBRepBuild_GIter_HeaderFile
