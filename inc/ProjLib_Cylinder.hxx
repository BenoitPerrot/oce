// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ProjLib_Cylinder_HeaderFile
#define _ProjLib_Cylinder_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Cylinder.hxx>
#include <ProjLib_Projector.hxx>
class Standard_NoSuchObject;
class gp_Cylinder;
class gp_Lin;
class gp_Circ;
class gp_Elips;
class gp_Parab;
class gp_Hypr;


//! Projects elementary curves on a cylinder.
class ProjLib_Cylinder  : public ProjLib_Projector
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Undefined projection.
  Standard_EXPORT ProjLib_Cylinder();
  
  //! Projection on the cylinder <Cyl>.
  Standard_EXPORT ProjLib_Cylinder(const gp_Cylinder& Cyl);
  
  //! Projection of the line <L> on the cylinder <Cyl>.
  Standard_EXPORT ProjLib_Cylinder(const gp_Cylinder& Cyl, const gp_Lin& L);
  
  //! Projection of the circle <C> on the cylinder <Cyl>.
  Standard_EXPORT ProjLib_Cylinder(const gp_Cylinder& Cyl, const gp_Circ& C);
  
  //! Projection of the ellipse <E> on the cylinder <Cyl>.
  Standard_EXPORT ProjLib_Cylinder(const gp_Cylinder& Cyl, const gp_Elips& E);
  
  Standard_EXPORT   void Init (const gp_Cylinder& Cyl) ;
  
  Standard_EXPORT virtual   void Project (const gp_Lin& L) ;
  
  Standard_EXPORT virtual   void Project (const gp_Circ& C) ;
  
  Standard_EXPORT virtual   void Project (const gp_Elips& E) ;
  
  Standard_EXPORT virtual   void Project (const gp_Parab& P) ;
  
  Standard_EXPORT virtual   void Project (const gp_Hypr& H) ;




protected:





private:



  gp_Cylinder myCylinder;


};







#endif // _ProjLib_Cylinder_HeaderFile
