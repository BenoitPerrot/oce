// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_HArray1OfLineInter_HeaderFile
#define _TopOpeBRep_HArray1OfLineInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/TopOpeBRep/Handle_TopOpeBRep_HArray1OfLineInter.hxx>

#include <ModelingAlgorithms/TopOpeBRep/TopOpeBRep_Array1OfLineInter.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TopOpeBRep_LineInter;
class TopOpeBRep_Array1OfLineInter;



class TopOpeBRep_HArray1OfLineInter : public MMgt_TShared
{

public:

  
    TopOpeBRep_HArray1OfLineInter(const Standard_Integer Low, const Standard_Integer Up);
  
    TopOpeBRep_HArray1OfLineInter(const Standard_Integer Low, const Standard_Integer Up, const TopOpeBRep_LineInter& V);
  
      void Init (const TopOpeBRep_LineInter& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TopOpeBRep_LineInter& Value) ;
  
     const  TopOpeBRep_LineInter& Value (const Standard_Integer Index)  const;
  
      TopOpeBRep_LineInter& ChangeValue (const Standard_Integer Index) ;
  
     const  TopOpeBRep_Array1OfLineInter& Array1()  const;
  
      TopOpeBRep_Array1OfLineInter& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TopOpeBRep_HArray1OfLineInter)

protected:




private: 


  TopOpeBRep_Array1OfLineInter myArray;


};

#define ItemHArray1 TopOpeBRep_LineInter
#define ItemHArray1_hxx <ModelingAlgorithms/TopOpeBRep/TopOpeBRep_LineInter.hxx>
#define TheArray1 TopOpeBRep_Array1OfLineInter
#define TheArray1_hxx <ModelingAlgorithms/TopOpeBRep/TopOpeBRep_Array1OfLineInter.hxx>
#define TCollection_HArray1 TopOpeBRep_HArray1OfLineInter
#define TCollection_HArray1_hxx <ModelingAlgorithms/TopOpeBRep/TopOpeBRep_HArray1OfLineInter.hxx>
#define Handle_TCollection_HArray1 Handle_TopOpeBRep_HArray1OfLineInter
#define TCollection_HArray1_Type_() TopOpeBRep_HArray1OfLineInter_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TopOpeBRep_HArray1OfLineInter_HeaderFile
