// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_HArray1OfConnectPoint_HeaderFile
#define _IGESDraw_HArray1OfConnectPoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDraw_HArray1OfConnectPoint.hxx>

#include <IGESDraw_Array1OfConnectPoint.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_IGESDraw_ConnectPoint.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESDraw_ConnectPoint;
class IGESDraw_Array1OfConnectPoint;



class IGESDraw_HArray1OfConnectPoint : public MMgt_TShared
{

public:

  
    IGESDraw_HArray1OfConnectPoint(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESDraw_HArray1OfConnectPoint(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESDraw_ConnectPoint)& V);
  
      void Init (const Handle(IGESDraw_ConnectPoint)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESDraw_ConnectPoint)& Value) ;
  
     const  Handle(IGESDraw_ConnectPoint)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESDraw_ConnectPoint)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESDraw_Array1OfConnectPoint& Array1()  const;
  
      IGESDraw_Array1OfConnectPoint& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESDraw_HArray1OfConnectPoint)

protected:




private: 


  IGESDraw_Array1OfConnectPoint myArray;


};

#define ItemHArray1 Handle(IGESDraw_ConnectPoint)
#define ItemHArray1_hxx <IGESDraw_ConnectPoint.hxx>
#define TheArray1 IGESDraw_Array1OfConnectPoint
#define TheArray1_hxx <IGESDraw_Array1OfConnectPoint.hxx>
#define TCollection_HArray1 IGESDraw_HArray1OfConnectPoint
#define TCollection_HArray1_hxx <IGESDraw_HArray1OfConnectPoint.hxx>
#define Handle_TCollection_HArray1 Handle_IGESDraw_HArray1OfConnectPoint
#define TCollection_HArray1_Type_() IGESDraw_HArray1OfConnectPoint_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESDraw_HArray1OfConnectPoint_HeaderFile
