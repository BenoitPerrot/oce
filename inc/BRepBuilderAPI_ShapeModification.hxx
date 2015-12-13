// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_ShapeModification_HeaderFile
#define _BRepBuilderAPI_ShapeModification_HeaderFile

#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>

//! Lists the possible types of modification to a shape
//! following a topological operation: Preserved, Deleted,
//! Trimmed, Merged or BoundaryModified.
//! This enumeration enables you to assign a "state" to the
//! different shapes that are on the list of operands for
//! each API function. The MakeShape class then uses this
//! to determine what has happened to the shapes which
//! constitute the list of operands.
enum BRepBuilderAPI_ShapeModification
{
BRepBuilderAPI_Preserved,
BRepBuilderAPI_Deleted,
BRepBuilderAPI_Trimmed,
BRepBuilderAPI_Merged,
BRepBuilderAPI_BoundaryModified
};

#endif // _BRepBuilderAPI_ShapeModification_HeaderFile
