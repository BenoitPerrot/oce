// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeWedge_HeaderFile
#define _BRepPrimAPI_MakeWedge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BRepPrim_Wedge.hxx>
#include <ModelingAlgorithms/BRepBuilderAPI/BRepBuilderAPI_MakeShape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Standard_DomainError;
class StdFail_NotDone;
class gp_Ax2;
class BRepPrim_Wedge;
class TopoDS_Shell;
class TopoDS_Solid;


//! Describes functions to build wedges, i.e. boxes with inclined faces.
//! A MakeWedge object provides a framework for:
//! -   defining the construction of a wedge,
//! -   implementing the construction algorithm, and
//! -   consulting the result.
class BRepPrimAPI_MakeWedge  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Make a STEP right angular wedge. (ltx >= 0)
  Standard_EXPORT BRepPrimAPI_MakeWedge(const Standard_Real dx, const Standard_Real dy, const Standard_Real dz, const Standard_Real ltx);
  
  //! Make a STEP right angular wedge. (ltx >= 0)
  Standard_EXPORT BRepPrimAPI_MakeWedge(const gp_Ax2& Axes, const Standard_Real dx, const Standard_Real dy, const Standard_Real dz, const Standard_Real ltx);
  
  //! Make a wedge. The face at dy is xmin,zmin xmax,zmax
  Standard_EXPORT BRepPrimAPI_MakeWedge(const Standard_Real dx, const Standard_Real dy, const Standard_Real dz, const Standard_Real xmin, const Standard_Real zmin, const Standard_Real xmax, const Standard_Real zmax);
  
  //! Make a wedge. The face at dy is xmin,zmin xmax,zmax
  Standard_EXPORT BRepPrimAPI_MakeWedge(const gp_Ax2& Axes, const Standard_Real dx, const Standard_Real dy, const Standard_Real dz, const Standard_Real xmin, const Standard_Real zmin, const Standard_Real xmax, const Standard_Real zmax);
  
  //! Returns the internal algorithm.
  Standard_EXPORT   BRepPrim_Wedge& Wedge() ;
  
  //! Stores the solid in myShape.
  Standard_EXPORT virtual   void Build() ;
  
  //! Returns the constructed box in the form of a shell.
  Standard_EXPORT  const  TopoDS_Shell& Shell() ;
Standard_EXPORT operator TopoDS_Shell();
  
  //! Returns the constructed box in the form of a solid.
  Standard_EXPORT  const  TopoDS_Solid& Solid() ;
Standard_EXPORT operator TopoDS_Solid();




protected:





private:



  BRepPrim_Wedge myWedge;


};







#endif // _BRepPrimAPI_MakeWedge_HeaderFile
