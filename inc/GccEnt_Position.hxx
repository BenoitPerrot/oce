// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccEnt_Position_HeaderFile
#define _GccEnt_Position_HeaderFile

#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>


//! Qualifies the position of a solution of a construction
//! algorithm with respect to one of its arguments. This is one of the following:
//! -   GccEnt_unqualified: the position of the solution
//! is undefined with respect to the argument,
//! -   GccEnt_enclosing: the solution encompasses the argument,
//! -   GccEnt_enclosed: the solution is encompassed by the argument,
//! -   GccEnt_outside: the solution and the argument
//! are external to one another,
//! -   GccEnt_noqualifier: the value returned during a
//! consultation of the qualifier when the argument is
//! defined as GccEnt_unqualified.
//! Note: the interior of a line or any open curve is
//! defined as the left-hand side of the line or curve in
//! relation to its orientation.
enum GccEnt_Position
{
GccEnt_unqualified,
GccEnt_enclosing,
GccEnt_enclosed,
GccEnt_outside,
GccEnt_noqualifier
};

#endif // _GccEnt_Position_HeaderFile
