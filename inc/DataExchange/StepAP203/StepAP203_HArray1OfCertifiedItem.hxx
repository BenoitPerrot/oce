// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_HArray1OfCertifiedItem_HeaderFile
#define _StepAP203_HArray1OfCertifiedItem_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/StepAP203/Handle_StepAP203_HArray1OfCertifiedItem.hxx>

#include <DataExchange/StepAP203/StepAP203_Array1OfCertifiedItem.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP203_CertifiedItem;
class StepAP203_Array1OfCertifiedItem;



class StepAP203_HArray1OfCertifiedItem : public MMgt_TShared
{

public:

  
    StepAP203_HArray1OfCertifiedItem(const Standard_Integer Low, const Standard_Integer Up);
  
    StepAP203_HArray1OfCertifiedItem(const Standard_Integer Low, const Standard_Integer Up, const StepAP203_CertifiedItem& V);
  
      void Init (const StepAP203_CertifiedItem& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const StepAP203_CertifiedItem& Value) ;
  
     const  StepAP203_CertifiedItem& Value (const Standard_Integer Index)  const;
  
      StepAP203_CertifiedItem& ChangeValue (const Standard_Integer Index) ;
  
     const  StepAP203_Array1OfCertifiedItem& Array1()  const;
  
      StepAP203_Array1OfCertifiedItem& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepAP203_HArray1OfCertifiedItem)

protected:




private: 


  StepAP203_Array1OfCertifiedItem myArray;


};

#define ItemHArray1 StepAP203_CertifiedItem
#define ItemHArray1_hxx <DataExchange/StepAP203/StepAP203_CertifiedItem.hxx>
#define TheArray1 StepAP203_Array1OfCertifiedItem
#define TheArray1_hxx <DataExchange/StepAP203/StepAP203_Array1OfCertifiedItem.hxx>
#define TCollection_HArray1 StepAP203_HArray1OfCertifiedItem
#define TCollection_HArray1_hxx <DataExchange/StepAP203/StepAP203_HArray1OfCertifiedItem.hxx>
#define Handle_TCollection_HArray1 Handle_StepAP203_HArray1OfCertifiedItem
#define TCollection_HArray1_Type_() StepAP203_HArray1OfCertifiedItem_Type_()

#include <Foundation/TCollection/TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepAP203_HArray1OfCertifiedItem_HeaderFile
