// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeOneAxis_HeaderFile
#define _BRepPrimAPI_MakeOneAxis_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BRepBuilderAPI_MakeShape.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class StdFail_NotDone;
class TopoDS_Face;
class TopoDS_Shell;
class TopoDS_Solid;


//! The abstract class MakeOneAxis is the root class of
//! algorithms used to construct rotational primitives.
class BRepPrimAPI_MakeOneAxis  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! The inherited commands should provide the algorithm.
  //! Returned as a pointer.
  Standard_EXPORT virtual   Standard_Address OneAxis()  = 0;
  
  //! Stores the solid in myShape.
  Standard_EXPORT virtual   void Build() ;
  
  //! Returns the lateral face of the rotational primitive.
  Standard_EXPORT  const  TopoDS_Face& Face() ;
Standard_EXPORT operator TopoDS_Face();
  
  //! Returns the constructed rotational primitive as a shell.
  Standard_EXPORT  const  TopoDS_Shell& Shell() ;
Standard_EXPORT operator TopoDS_Shell();
  
  //! Returns the constructed rotational primitive as a solid.
  Standard_EXPORT  const  TopoDS_Solid& Solid() ;
Standard_EXPORT operator TopoDS_Solid();




protected:





private:





};







#endif // _BRepPrimAPI_MakeOneAxis_HeaderFile
