// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <Mathematics/BoundingVolumes/Bnd_HArray1OfSphere.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <Foundation/Standard/Standard_RangeError.hxx>
#include <Foundation/Standard/Standard_DimensionMismatch.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <Foundation/Standard/Standard_OutOfMemory.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Sphere.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Array1OfSphere.hxx>

 


IMPLEMENT_STANDARD_TYPE(Bnd_HArray1OfSphere)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(Bnd_HArray1OfSphere)


IMPLEMENT_DOWNCAST(Bnd_HArray1OfSphere,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(Bnd_HArray1OfSphere)


#define ItemHArray1 Bnd_Sphere
#define ItemHArray1_hxx <Mathematics/BoundingVolumes/Bnd_Sphere.hxx>
#define TheArray1 Bnd_Array1OfSphere
#define TheArray1_hxx <Mathematics/BoundingVolumes/Bnd_Array1OfSphere.hxx>
#define TCollection_HArray1 Bnd_HArray1OfSphere
#define TCollection_HArray1_hxx <Mathematics/BoundingVolumes/Bnd_HArray1OfSphere.hxx>
#define Handle_TCollection_HArray1 Handle_Bnd_HArray1OfSphere
#define TCollection_HArray1_Type_() Bnd_HArray1OfSphere_Type_()
#include <Foundation/TCollection/TCollection_HArray1.gxx>

