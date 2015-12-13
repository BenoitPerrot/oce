// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_HArray1OfOrganization_HeaderFile
#define _StepBasic_HArray1OfOrganization_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_StepBasic_HArray1OfOrganization.hxx>

#include <StepBasic_Array1OfOrganization.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_StepBasic_Organization.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_Organization;
class StepBasic_Array1OfOrganization;



class StepBasic_HArray1OfOrganization : public MMgt_TShared
{

public:

  
    StepBasic_HArray1OfOrganization(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_HArray1OfOrganization(const Standard_Integer Low, const Standard_Integer Up, const Handle(StepBasic_Organization)& V);
  
      void Init (const Handle(StepBasic_Organization)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_Organization)& Value) ;
  
     const  Handle(StepBasic_Organization)& Value (const Standard_Integer Index)  const;
  
      Handle(StepBasic_Organization)& ChangeValue (const Standard_Integer Index) ;
  
     const  StepBasic_Array1OfOrganization& Array1()  const;
  
      StepBasic_Array1OfOrganization& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepBasic_HArray1OfOrganization)

protected:




private: 


  StepBasic_Array1OfOrganization myArray;


};

#define ItemHArray1 Handle(StepBasic_Organization)
#define ItemHArray1_hxx <StepBasic_Organization.hxx>
#define TheArray1 StepBasic_Array1OfOrganization
#define TheArray1_hxx <StepBasic_Array1OfOrganization.hxx>
#define TCollection_HArray1 StepBasic_HArray1OfOrganization
#define TCollection_HArray1_hxx <StepBasic_HArray1OfOrganization.hxx>
#define Handle_TCollection_HArray1 Handle_StepBasic_HArray1OfOrganization
#define TCollection_HArray1_Type_() StepBasic_HArray1OfOrganization_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _StepBasic_HArray1OfOrganization_HeaderFile
