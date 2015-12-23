// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_BiPoint_HeaderFile
#define _HLRBRep_BiPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TopoDS_Shape;
class gp_Pnt;


//! Contains the colors of a shape.
class HLRBRep_BiPoint 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_BiPoint();
  
  Standard_EXPORT HLRBRep_BiPoint(const Standard_Real x1, const Standard_Real y1, const Standard_Real z1, const Standard_Real x2, const Standard_Real y2, const Standard_Real z2, const TopoDS_Shape& S, const Standard_Boolean reg1, const Standard_Boolean regn, const Standard_Boolean outl, const Standard_Boolean intl);
  
     const  gp_Pnt& P1()  const;
  
     const  gp_Pnt& P2()  const;
  
     const  TopoDS_Shape& Shape()  const;
  
      void Shape (const TopoDS_Shape& S) ;
  
      Standard_Boolean Rg1Line()  const;
  
      void Rg1Line (const Standard_Boolean B) ;
  
      Standard_Boolean RgNLine()  const;
  
      void RgNLine (const Standard_Boolean B) ;
  
      Standard_Boolean OutLine()  const;
  
      void OutLine (const Standard_Boolean B) ;
  
      Standard_Boolean IntLine()  const;
  
      void IntLine (const Standard_Boolean B) ;




protected:





private:



  gp_Pnt myP1;
  gp_Pnt myP2;
  TopoDS_Shape myShape;
  Standard_Integer myFlags;


};


#include <HLRBRep_BiPoint.lxx>





#endif // _HLRBRep_BiPoint_HeaderFile
