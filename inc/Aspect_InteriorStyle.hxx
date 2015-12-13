// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_InteriorStyle_HeaderFile
#define _Aspect_InteriorStyle_HeaderFile

#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>

//! Definition of interior types for primitive
//! faces.
//!
//! IS_EMPTY    no interior.
//! IS_HOLLOW   display the boundaries of the surface.
//! IS_HATCH    display hatched with a hatch style.
//! IS_SOLID    display the interior entirely filled.
//! IS_HIDDENLINE       display in hidden lines removed.
//! IS_POINT            display only vertices.
enum Aspect_InteriorStyle
{
Aspect_IS_EMPTY,
Aspect_IS_HOLLOW,
Aspect_IS_HATCH,
Aspect_IS_SOLID,
Aspect_IS_HIDDENLINE,
Aspect_IS_POINT
};

#endif // _Aspect_InteriorStyle_HeaderFile
