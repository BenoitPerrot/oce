// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PPoly_HArray1OfTriangle_HeaderFile
#define _PPoly_HArray1OfTriangle_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PPoly_HArray1OfTriangle.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <PPoly_Triangle.hxx>
#include <PPoly_FieldOfHArray1OfTriangle.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle.hxx>
class Standard_OutOfRange;
class Standard_RangeError;
class PPoly_Triangle;
class PPoly_FieldOfHArray1OfTriangle;
class PPoly_VArrayNodeOfFieldOfHArray1OfTriangle;
class PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle;


class PPoly_HArray1OfTriangle : public Standard_Persistent
{

public:

  
  Standard_EXPORT PPoly_HArray1OfTriangle(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PPoly_HArray1OfTriangle(const Standard_Integer Low, const Standard_Integer Up, const PPoly_Triangle& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const PPoly_Triangle& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   PPoly_Triangle Value (const Standard_Integer Index)  const;

PPoly_HArray1OfTriangle( )
{
  
}
PPoly_HArray1OfTriangle(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPPoly_HArray1OfTriangleLowerBound() const { return LowerBound; }
    void _CSFDB_SetPPoly_HArray1OfTriangleLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPPoly_HArray1OfTriangleUpperBound() const { return UpperBound; }
    void _CSFDB_SetPPoly_HArray1OfTriangleUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PPoly_FieldOfHArray1OfTriangle& _CSFDB_GetPPoly_HArray1OfTriangleData() const { return Data; }



  DEFINE_STANDARD_RTTI(PPoly_HArray1OfTriangle)

protected:




private: 

  
  Standard_EXPORT   PPoly_FieldOfHArray1OfTriangle Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PPoly_FieldOfHArray1OfTriangle Data;


};

#define Item PPoly_Triangle
#define Item_hxx <PPoly_Triangle.hxx>
#define PCollection_FieldOfHArray1 PPoly_FieldOfHArray1OfTriangle
#define PCollection_FieldOfHArray1_hxx <PPoly_FieldOfHArray1OfTriangle.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PPoly_VArrayNodeOfFieldOfHArray1OfTriangle
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PPoly_VArrayNodeOfFieldOfHArray1OfTriangle.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PPoly_VArrayNodeOfFieldOfHArray1OfTriangle
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PPoly_VArrayNodeOfFieldOfHArray1OfTriangle.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PPoly_VArrayTNodeOfFieldOfHArray1OfTriangle.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PPoly_VArrayNodeOfFieldOfHArray1OfTriangle
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PPoly_VArrayNodeOfFieldOfHArray1OfTriangle_Type_()
#define PCollection_HArray1 PPoly_HArray1OfTriangle
#define PCollection_HArray1_hxx <PPoly_HArray1OfTriangle.hxx>
#define Handle_PCollection_HArray1 Handle_PPoly_HArray1OfTriangle
#define PCollection_HArray1_Type_() PPoly_HArray1OfTriangle_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_




#endif // _PPoly_HArray1OfTriangle_HeaderFile
