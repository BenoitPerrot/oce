// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_HeaderFile
#define _BRepBuilderAPI_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_Plane.hxx>
#include <Standard_Real.hxx>
class Geom_Plane;
class BRepBuilderAPI_Command;
class BRepBuilderAPI_MakeShape;
class BRepBuilderAPI_MakePolygon;
class BRepBuilderAPI_MakeFace;
class BRepBuilderAPI_FindPlane;
class BRepBuilderAPI_Sewing;
class BRepBuilderAPI_MakeWire;
class BRepBuilderAPI_MakeShell;
class BRepBuilderAPI_MakeSolid;
class BRepBuilderAPI_ModifyShape;
class BRepBuilderAPI_Transform;
class BRepBuilderAPI_NurbsConvert;
class BRepBuilderAPI_GTransform;
class BRepBuilderAPI_Copy;
class BRepBuilderAPI_Collect;


//! The  BRepBuilderAPI  package   provides  an   Application
//! Programming Interface  for the BRep  topology data
//! structure.
//!
//! The API is a set of classes aiming to provide :
//!
//! * High level and simple calls  for the most common
//! operations.
//!
//! *    Keeping   an   access  on    the    low-level
//! implementation of high-level calls.
//!
//! * Examples  of programming of high-level operations
//! from low-level operations.
//!
//! * A complete coverage of modelling :
//!
//! - Creating vertices ,edges, faces, solids.
//!
//! - Sweeping operations.
//!
//! - Boolean operations.
//!
//! - Global properties computation.
//!
//! The API provides  classes to  build  objects:
//!
//! * The  constructors  of the classes  provides  the
//! different constructions methods.
//!
//! * The  class keeps as fields the   different tools
//! used to build the object.
//!
//! *   The class  provides  a  casting  method to get
//! automatically the  result  with  a   function-like
//! call.
//!
//! For example to make a  vertex <V> from a point <P>
//! one can writes :
//!
//! V = BRepBuilderAPI_MakeVertex(P);
//!
//! or
//!
//! BRepBuilderAPI_MakeVertex MV(P);
//! V = MV.Vertex();
//!
//! For tolerances  a default precision is  used which
//! can    be   changed    by    the   packahe  method
//! BRepBuilderAPI::Precision.
//!
//! For error handling the BRepBuilderAPI commands raise only
//! the NotDone error. When Done is false on a command
//! the error description can be asked to the command.
//!
//! In  theory  the  comands can be    called with any
//! arguments, argument  checking  is performed by the
//! command.
class BRepBuilderAPI 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Sets    the current plane.
  Standard_EXPORT static   void Plane (const Handle(Geom_Plane)& P) ;
  
  //! Returns the current plane.
  Standard_EXPORT static  const  Handle(Geom_Plane)& Plane() ;
  
  //! Sets the default precision.  The current Precision
  //! is returned.
  Standard_EXPORT static   void Precision (const Standard_Real P) ;
  
  //! Returns the default precision.
  Standard_EXPORT static   Standard_Real Precision() ;




protected:





private:




friend class BRepBuilderAPI_Command;
friend class BRepBuilderAPI_MakeShape;
friend class BRepBuilderAPI_MakePolygon;
friend class BRepBuilderAPI_MakeFace;
friend class BRepBuilderAPI_FindPlane;
friend class BRepBuilderAPI_Sewing;
friend class BRepBuilderAPI_MakeWire;
friend class BRepBuilderAPI_MakeShell;
friend class BRepBuilderAPI_MakeSolid;
friend class BRepBuilderAPI_ModifyShape;
friend class BRepBuilderAPI_Transform;
friend class BRepBuilderAPI_NurbsConvert;
friend class BRepBuilderAPI_GTransform;
friend class BRepBuilderAPI_Copy;
friend class BRepBuilderAPI_Collect;

};







#endif // _BRepBuilderAPI_HeaderFile
