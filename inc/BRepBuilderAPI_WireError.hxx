// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_WireError_HeaderFile
#define _BRepBuilderAPI_WireError_HeaderFile

#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>

//! Indicates the outcome of wire
//! construction, i.e. whether it is successful or not, as explained below:
//! -      BRepBuilderAPI_WireDone No
//! error occurred. The wire is correctly built.
//! -      BRepBuilderAPI_EmptyWire No
//! initialization of the algorithm. Only an empty constructor was used.
//! -      BRepBuilderAPI_DisconnectedWire
//! The last edge which you attempted to add was not connected to the wire.
//! -      BRepBuilderAPI_NonManifoldWire
//! The wire with some singularity.
enum BRepBuilderAPI_WireError
{
BRepBuilderAPI_WireDone,
BRepBuilderAPI_EmptyWire,
BRepBuilderAPI_DisconnectedWire,
BRepBuilderAPI_NonManifoldWire
};

#endif // _BRepBuilderAPI_WireError_HeaderFile
