// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntSurf_PathPoint_HeaderFile
#define _IntSurf_PathPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <gp_Pnt.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <gp_Vec.hxx>
#include <gp_Dir2d.hxx>
#include <Handle_TColgp_HSequenceOfXY.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TColgp_HSequenceOfXY;
class StdFail_UndefinedDerivative;
class Standard_OutOfRange;
class gp_Pnt;
class gp_Vec;
class gp_Dir2d;



class IntSurf_PathPoint 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntSurf_PathPoint();
  
  Standard_EXPORT IntSurf_PathPoint(const gp_Pnt& P, const Standard_Real U, const Standard_Real V);
  
  Standard_EXPORT   void SetValue (const gp_Pnt& P, const Standard_Real U, const Standard_Real V) ;
  
      void AddUV (const Standard_Real U, const Standard_Real V) ;
  
      void SetDirections (const gp_Vec& V, const gp_Dir2d& D) ;
  
      void SetTangency (const Standard_Boolean Tang) ;
  
      void SetPassing (const Standard_Boolean Pass) ;
  
     const  gp_Pnt& Value()  const;
  
      void Value2d (Standard_Real& U, Standard_Real& V)  const;
  
      Standard_Boolean IsPassingPnt()  const;
  
      Standard_Boolean IsTangent()  const;
  
     const  gp_Vec& Direction3d()  const;
  
     const  gp_Dir2d& Direction2d()  const;
  
      Standard_Integer Multiplicity()  const;
  
      void Parameters (const Standard_Integer Index, Standard_Real& U, Standard_Real& V)  const;




protected:





private:



  gp_Pnt pt;
  Standard_Boolean ispass;
  Standard_Boolean istgt;
  gp_Vec vectg;
  gp_Dir2d dirtg;
  Handle(TColgp_HSequenceOfXY) sequv;


};


#include <IntSurf_PathPoint.lxx>





#endif // _IntSurf_PathPoint_HeaderFile
