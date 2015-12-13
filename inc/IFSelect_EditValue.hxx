// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_EditValue_HeaderFile
#define _IFSelect_EditValue_HeaderFile

#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>

//! Controls access on Values by an Editor
//! EditOptional  : normal access, in addition may be removed
//! Editable      : normal access, must be present
//! EditProtected : access must be validated
//! EditComputed  : why write it ?  it will be recomputed
//! EditRead      : no way to write it, only for read
//! EditDynamic   : not a field, only to be displayed
enum IFSelect_EditValue
{
IFSelect_Optional,
IFSelect_Editable,
IFSelect_EditProtected,
IFSelect_EditComputed,
IFSelect_EditRead,
IFSelect_EditDynamic
};

#endif // _IFSelect_EditValue_HeaderFile
