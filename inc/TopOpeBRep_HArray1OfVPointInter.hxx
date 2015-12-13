// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_HArray1OfVPointInter_HeaderFile
#define _TopOpeBRep_HArray1OfVPointInter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRep_HArray1OfVPointInter.hxx>

#include <TopOpeBRep_Array1OfVPointInter.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TopOpeBRep_VPointInter;
class TopOpeBRep_Array1OfVPointInter;



class TopOpeBRep_HArray1OfVPointInter : public MMgt_TShared
{

public:

  
    TopOpeBRep_HArray1OfVPointInter(const Standard_Integer Low, const Standard_Integer Up);
  
    TopOpeBRep_HArray1OfVPointInter(const Standard_Integer Low, const Standard_Integer Up, const TopOpeBRep_VPointInter& V);
  
      void Init (const TopOpeBRep_VPointInter& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TopOpeBRep_VPointInter& Value) ;
  
     const  TopOpeBRep_VPointInter& Value (const Standard_Integer Index)  const;
  
      TopOpeBRep_VPointInter& ChangeValue (const Standard_Integer Index) ;
  
     const  TopOpeBRep_Array1OfVPointInter& Array1()  const;
  
      TopOpeBRep_Array1OfVPointInter& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TopOpeBRep_HArray1OfVPointInter)

protected:




private: 


  TopOpeBRep_Array1OfVPointInter myArray;


};

#define ItemHArray1 TopOpeBRep_VPointInter
#define ItemHArray1_hxx <TopOpeBRep_VPointInter.hxx>
#define TheArray1 TopOpeBRep_Array1OfVPointInter
#define TheArray1_hxx <TopOpeBRep_Array1OfVPointInter.hxx>
#define TCollection_HArray1 TopOpeBRep_HArray1OfVPointInter
#define TCollection_HArray1_hxx <TopOpeBRep_HArray1OfVPointInter.hxx>
#define Handle_TCollection_HArray1 Handle_TopOpeBRep_HArray1OfVPointInter
#define TCollection_HArray1_Type_() TopOpeBRep_HArray1OfVPointInter_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TopOpeBRep_HArray1OfVPointInter_HeaderFile
