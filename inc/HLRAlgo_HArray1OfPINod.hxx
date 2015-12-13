// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_HArray1OfPINod_HeaderFile
#define _HLRAlgo_HArray1OfPINod_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_HArray1OfPINod.hxx>

#include <HLRAlgo_Array1OfPINod.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_HLRAlgo_PolyInternalNode.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class HLRAlgo_PolyInternalNode;
class HLRAlgo_Array1OfPINod;



class HLRAlgo_HArray1OfPINod : public MMgt_TShared
{

public:

  
    HLRAlgo_HArray1OfPINod(const Standard_Integer Low, const Standard_Integer Up);
  
    HLRAlgo_HArray1OfPINod(const Standard_Integer Low, const Standard_Integer Up, const Handle(HLRAlgo_PolyInternalNode)& V);
  
      void Init (const Handle(HLRAlgo_PolyInternalNode)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(HLRAlgo_PolyInternalNode)& Value) ;
  
     const  Handle(HLRAlgo_PolyInternalNode)& Value (const Standard_Integer Index)  const;
  
      Handle(HLRAlgo_PolyInternalNode)& ChangeValue (const Standard_Integer Index) ;
  
     const  HLRAlgo_Array1OfPINod& Array1()  const;
  
      HLRAlgo_Array1OfPINod& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(HLRAlgo_HArray1OfPINod)

protected:




private: 


  HLRAlgo_Array1OfPINod myArray;


};

#define ItemHArray1 Handle(HLRAlgo_PolyInternalNode)
#define ItemHArray1_hxx <HLRAlgo_PolyInternalNode.hxx>
#define TheArray1 HLRAlgo_Array1OfPINod
#define TheArray1_hxx <HLRAlgo_Array1OfPINod.hxx>
#define TCollection_HArray1 HLRAlgo_HArray1OfPINod
#define TCollection_HArray1_hxx <HLRAlgo_HArray1OfPINod.hxx>
#define Handle_TCollection_HArray1 Handle_HLRAlgo_HArray1OfPINod
#define TCollection_HArray1_Type_() HLRAlgo_HArray1OfPINod_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _HLRAlgo_HArray1OfPINod_HeaderFile
