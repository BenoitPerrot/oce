// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_CircSection_HeaderFile
#define _ChFiDS_CircSection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Circ.hxx>
#include <Mathematics/Primitives/gp_Lin.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class gp_Circ;
class gp_Lin;


//! A Section of fillet.
class ChFiDS_CircSection 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ChFiDS_CircSection();
  
  Standard_EXPORT   void Set (const gp_Circ& C, const Standard_Real F, const Standard_Real L) ;
  
  Standard_EXPORT   void Set (const gp_Lin& C, const Standard_Real F, const Standard_Real L) ;
  
  Standard_EXPORT   void Get (gp_Circ& C, Standard_Real& F, Standard_Real& L)  const;
  
  Standard_EXPORT   void Get (gp_Lin& C, Standard_Real& F, Standard_Real& L)  const;




protected:





private:



  gp_Circ myCirc;
  gp_Lin myLin;
  Standard_Real myF;
  Standard_Real myL;


};







#endif // _ChFiDS_CircSection_HeaderFile
