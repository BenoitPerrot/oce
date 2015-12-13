// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_Edge_HeaderFile
#define _TopoDS_Edge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>


//! Describes an edge which
//! - references an underlying edge with the potential to
//! be given a location and an orientation
//! - has a location for the underlying edge, giving its
//! placement in the local coordinate system
//! - has an orientation for the underlying edge, in terms
//! of its geometry (as opposed to orientation in
//! relation to other shapes).
class TopoDS_Edge  : public TopoDS_Shape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Undefined Edge.
    TopoDS_Edge();




protected:





private:





};


#include <TopoDS_Edge.lxx>





#endif // _TopoDS_Edge_HeaderFile
