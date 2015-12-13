// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_HArray1OfPISeg_HeaderFile
#define _HLRAlgo_HArray1OfPISeg_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_HArray1OfPISeg.hxx>

#include <HLRAlgo_Array1OfPISeg.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class HLRAlgo_PolyInternalSegment;
class HLRAlgo_Array1OfPISeg;



class HLRAlgo_HArray1OfPISeg : public MMgt_TShared
{

public:

  
    HLRAlgo_HArray1OfPISeg(const Standard_Integer Low, const Standard_Integer Up);
  
    HLRAlgo_HArray1OfPISeg(const Standard_Integer Low, const Standard_Integer Up, const HLRAlgo_PolyInternalSegment& V);
  
      void Init (const HLRAlgo_PolyInternalSegment& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const HLRAlgo_PolyInternalSegment& Value) ;
  
     const  HLRAlgo_PolyInternalSegment& Value (const Standard_Integer Index)  const;
  
      HLRAlgo_PolyInternalSegment& ChangeValue (const Standard_Integer Index) ;
  
     const  HLRAlgo_Array1OfPISeg& Array1()  const;
  
      HLRAlgo_Array1OfPISeg& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(HLRAlgo_HArray1OfPISeg)

protected:




private: 


  HLRAlgo_Array1OfPISeg myArray;


};

#define ItemHArray1 HLRAlgo_PolyInternalSegment
#define ItemHArray1_hxx <HLRAlgo_PolyInternalSegment.hxx>
#define TheArray1 HLRAlgo_Array1OfPISeg
#define TheArray1_hxx <HLRAlgo_Array1OfPISeg.hxx>
#define TCollection_HArray1 HLRAlgo_HArray1OfPISeg
#define TCollection_HArray1_hxx <HLRAlgo_HArray1OfPISeg.hxx>
#define Handle_TCollection_HArray1 Handle_HLRAlgo_HArray1OfPISeg
#define TCollection_HArray1_Type_() HLRAlgo_HArray1OfPISeg_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _HLRAlgo_HArray1OfPISeg_HeaderFile
