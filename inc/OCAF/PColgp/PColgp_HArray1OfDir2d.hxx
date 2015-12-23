// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray1OfDir2d_HeaderFile
#define _PColgp_HArray1OfDir2d_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_HArray1OfDir2d.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#include <OCAF/PColgp/PColgp_FieldOfHArray1OfDir2d.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir2d.hxx>
class Standard_OutOfRange;
class Standard_RangeError;
class gp_Dir2d;
class PColgp_FieldOfHArray1OfDir2d;
class PColgp_VArrayNodeOfFieldOfHArray1OfDir2d;
class PColgp_VArrayTNodeOfFieldOfHArray1OfDir2d;


class PColgp_HArray1OfDir2d : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColgp_HArray1OfDir2d(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PColgp_HArray1OfDir2d(const Standard_Integer Low, const Standard_Integer Up, const gp_Dir2d& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Dir2d& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   gp_Dir2d Value (const Standard_Integer Index)  const;

PColgp_HArray1OfDir2d( )
{
  
}
PColgp_HArray1OfDir2d(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray1OfDir2dLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColgp_HArray1OfDir2dLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray1OfDir2dUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColgp_HArray1OfDir2dUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColgp_FieldOfHArray1OfDir2d& _CSFDB_GetPColgp_HArray1OfDir2dData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray1OfDir2d)

protected:




private: 

  
  Standard_EXPORT   PColgp_FieldOfHArray1OfDir2d Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PColgp_FieldOfHArray1OfDir2d Data;


};

#define Item gp_Dir2d
#define Item_hxx <Mathematics/Primitives/gp_Dir2d.hxx>
#define PCollection_FieldOfHArray1 PColgp_FieldOfHArray1OfDir2d
#define PCollection_FieldOfHArray1_hxx <OCAF/PColgp/PColgp_FieldOfHArray1OfDir2d.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfDir2d
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray1OfDir2d.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfDir2d
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray1OfDir2d.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfDir2d
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray1OfDir2d.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfDir2d
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray1OfDir2d.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir2d
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfDir2d_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir2d
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfDir2d_Type_()
#define PCollection_HArray1 PColgp_HArray1OfDir2d
#define PCollection_HArray1_hxx <OCAF/PColgp/PColgp_HArray1OfDir2d.hxx>
#define Handle_PCollection_HArray1 Handle_PColgp_HArray1OfDir2d
#define PCollection_HArray1_Type_() PColgp_HArray1OfDir2d_Type_()

#include <OCAF/PCollection/PCollection_HArray1.lxx>

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




#endif // _PColgp_HArray1OfDir2d_HeaderFile
