// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_HLabelArray1_HeaderFile
#define _TDataStd_HLabelArray1_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_HLabelArray1.hxx>

#include <TDataStd_LabelArray1.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class TDF_Label;
class TDataStd_LabelArray1;



class TDataStd_HLabelArray1 : public MMgt_TShared
{

public:

  
    TDataStd_HLabelArray1(const Standard_Integer Low, const Standard_Integer Up);
  
    TDataStd_HLabelArray1(const Standard_Integer Low, const Standard_Integer Up, const TDF_Label& V);
  
      void Init (const TDF_Label& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const TDF_Label& Value) ;
  
     const  TDF_Label& Value (const Standard_Integer Index)  const;
  
      TDF_Label& ChangeValue (const Standard_Integer Index) ;
  
     const  TDataStd_LabelArray1& Array1()  const;
  
      TDataStd_LabelArray1& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TDataStd_HLabelArray1)

protected:




private: 


  TDataStd_LabelArray1 myArray;


};

#define ItemHArray1 TDF_Label
#define ItemHArray1_hxx <TDF_Label.hxx>
#define TheArray1 TDataStd_LabelArray1
#define TheArray1_hxx <TDataStd_LabelArray1.hxx>
#define TCollection_HArray1 TDataStd_HLabelArray1
#define TCollection_HArray1_hxx <TDataStd_HLabelArray1.hxx>
#define Handle_TCollection_HArray1 Handle_TDataStd_HLabelArray1
#define TCollection_HArray1_Type_() TDataStd_HLabelArray1_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TDataStd_HLabelArray1_HeaderFile
