// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_LocalStatus_HeaderFile
#define _AIS_LocalStatus_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_LocalStatus.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TColStd/TColStd_ListOfInteger.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class Standard_Transient;
class TColStd_ListOfInteger;


//! Stored Info about temporary objects.
class AIS_LocalStatus : public MMgt_TShared
{

public:

  
  Standard_EXPORT AIS_LocalStatus(const Standard_Boolean IsTemporary = Standard_True, const Standard_Boolean Decompose = Standard_False, const Standard_Integer DisplayMode = -1, const Standard_Integer SelectionMode = -1, const Standard_Integer HilightMode = 0, const Standard_Boolean SubIntensity = 0, const Quantity_NameOfColor TheHiCol = Quantity_NOC_WHITE);
  
      Standard_Boolean Decomposed()  const;
  
      Standard_Boolean IsTemporary()  const;
  
      Standard_Integer DisplayMode()  const;
  
     const  TColStd_ListOfInteger& SelectionModes()  const;
  
  Standard_EXPORT   Standard_Boolean IsActivated (const Standard_Integer aSelMode)  const;
  
      Standard_Integer HilightMode()  const;
  
      Standard_Boolean IsSubIntensityOn()  const;
  
      Quantity_NameOfColor HilightColor()  const;
  
      void SetDecomposition (const Standard_Boolean astatus) ;
  
      void SetTemporary (const Standard_Boolean astatus) ;
  
      void SetDisplayMode (const Standard_Integer aMode) ;
  
      void SetFirstDisplay (const Standard_Boolean aStatus) ;
  
      Standard_Boolean IsFirstDisplay()  const;
  
  Standard_EXPORT   void AddSelectionMode (const Standard_Integer aMode) ;
  
  Standard_EXPORT   void RemoveSelectionMode (const Standard_Integer aMode) ;
  
  Standard_EXPORT   void ClearSelectionModes() ;
  
  Standard_EXPORT   Standard_Boolean IsSelModeIn (const Standard_Integer aMode)  const;
  
      void SetHilightMode (const Standard_Integer aMode) ;
  
      void SetHilightColor (const Quantity_NameOfColor aHiCol) ;
  
      void SubIntensityOn() ;
  
      void SubIntensityOff() ;
  
      void SetPreviousState (const Handle(Standard_Transient)& aStatus) ;
  
     const  Handle(Standard_Transient)& PreviousState()  const;




  DEFINE_STANDARD_RTTI(AIS_LocalStatus)

protected:




private: 


  Standard_Boolean myDecomposition;
  Standard_Boolean myIsTemporary;
  Standard_Integer myDMode;
  Standard_Boolean myFirstDisplay;
  Standard_Integer myHMode;
  TColStd_ListOfInteger mySModes;
  Standard_Boolean mySubIntensity;
  Quantity_NameOfColor myHiCol;
  Handle(Standard_Transient) myPreviousState;


};


#include <AIS_LocalStatus.lxx>





#endif // _AIS_LocalStatus_HeaderFile
