// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GProp_CelGProps_HeaderFile
#define _GProp_CelGProps_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <GProp_GProps.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class gp_Circ;
class gp_Pnt;
class gp_Lin;



//! Computes the  global properties of bounded curves
//! in 3D space.
//! It can be an elementary curve from package gp such as
//! Lin, Circ, Elips, Parab .
class GProp_CelGProps  : public GProp_GProps
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GProp_CelGProps();
  
  Standard_EXPORT GProp_CelGProps(const gp_Circ& C, const gp_Pnt& CLocation);
  
  Standard_EXPORT GProp_CelGProps(const gp_Circ& C, const Standard_Real U1, const Standard_Real U2, const gp_Pnt& CLocation);
  
  Standard_EXPORT GProp_CelGProps(const gp_Lin& C, const Standard_Real U1, const Standard_Real U2, const gp_Pnt& CLocation);
  
  Standard_EXPORT   void SetLocation (const gp_Pnt& CLocation) ;
  
  Standard_EXPORT   void Perform (const gp_Circ& C, const Standard_Real U1, const Standard_Real U2) ;
  
  Standard_EXPORT   void Perform (const gp_Lin& C, const Standard_Real U1, const Standard_Real U2) ;




protected:





private:





};







#endif // _GProp_CelGProps_HeaderFile
