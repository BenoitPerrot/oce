// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_PolyInternalData_HeaderFile
#define _HLRAlgo_PolyInternalData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_PolyInternalData.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_HLRAlgo_HArray1OfTData.hxx>
#include <Handle_HLRAlgo_HArray1OfPISeg.hxx>
#include <Handle_HLRAlgo_HArray1OfPINod.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class HLRAlgo_HArray1OfTData;
class HLRAlgo_HArray1OfPISeg;
class HLRAlgo_HArray1OfPINod;
class HLRAlgo_Array1OfTData;
class HLRAlgo_Array1OfPISeg;
class HLRAlgo_Array1OfPINod;


//! to Update OutLines.
class HLRAlgo_PolyInternalData : public MMgt_TShared
{

public:

  
  Standard_EXPORT HLRAlgo_PolyInternalData(const Standard_Integer nbNod, const Standard_Integer nbTri);
  
  Standard_EXPORT   void UpdateLinks (Standard_Address& TData, Standard_Address& PISeg, Standard_Address& PINod) ;
  
  Standard_EXPORT   Standard_Integer AddNode (const Standard_Address Nod1RValues, const Standard_Address Nod2RValues, Standard_Address& PINod1, Standard_Address& PINod2, const Standard_Real coef1, const Standard_Real X3, const Standard_Real Y3, const Standard_Real Z3) ;
  
  Standard_EXPORT   void UpdateLinks (const Standard_Integer ip1, const Standard_Integer ip2, const Standard_Integer ip3, Standard_Address& TData1, Standard_Address& TData2, Standard_Address& PISeg1, Standard_Address& PISeg2, Standard_Address& PINod1, Standard_Address& PINod2) ;
  
  Standard_EXPORT   void Dump()  const;
  
  Standard_EXPORT   void IncTData (Standard_Address& TData1, Standard_Address& TData2) ;
  
  Standard_EXPORT   void IncPISeg (Standard_Address& PISeg1, Standard_Address& PISeg2) ;
  
  Standard_EXPORT   void IncPINod (Standard_Address& PINod1, Standard_Address& PINod2) ;
  
      void DecTData() ;
  
      void DecPISeg() ;
  
      void DecPINod() ;
  
      Standard_Integer NbTData()  const;
  
      Standard_Integer NbPISeg()  const;
  
      Standard_Integer NbPINod()  const;
  
      Standard_Boolean Planar()  const;
  
      void Planar (const Standard_Boolean B) ;
  
      Standard_Boolean IntOutL()  const;
  
      void IntOutL (const Standard_Boolean B) ;
  
      HLRAlgo_Array1OfTData& TData()  const;
  
      HLRAlgo_Array1OfPISeg& PISeg()  const;
  
      HLRAlgo_Array1OfPINod& PINod()  const;




  DEFINE_STANDARD_RTTI(HLRAlgo_PolyInternalData)

protected:




private: 


  Standard_Integer myNbTData;
  Standard_Integer myNbPISeg;
  Standard_Integer myNbPINod;
  Standard_Integer myMxTData;
  Standard_Integer myMxPISeg;
  Standard_Integer myMxPINod;
  Standard_Boolean myIntOutL;
  Standard_Boolean myPlanar;
  Handle(HLRAlgo_HArray1OfTData) myTData;
  Handle(HLRAlgo_HArray1OfPISeg) myPISeg;
  Handle(HLRAlgo_HArray1OfPINod) myPINod;


};


#include <HLRAlgo_PolyInternalData.lxx>





#endif // _HLRAlgo_PolyInternalData_HeaderFile
