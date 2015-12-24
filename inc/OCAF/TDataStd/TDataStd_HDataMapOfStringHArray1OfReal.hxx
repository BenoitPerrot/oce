// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_HDataMapOfStringHArray1OfReal_HeaderFile
#define _TDataStd_HDataMapOfStringHArray1OfReal_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/TDataStd/Handle_TDataStd_HDataMapOfStringHArray1OfReal.hxx>

#include <OCAF/TDataStd/TDataStd_DataMapOfStringHArray1OfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TDataStd_DataMapOfStringHArray1OfReal;


//! Extension of TDataStd_DataMapOfStringHArray1OfReal class
//! to be manipulated by handle.
class TDataStd_HDataMapOfStringHArray1OfReal : public MMgt_TShared
{

public:

  
  Standard_EXPORT TDataStd_HDataMapOfStringHArray1OfReal(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TDataStd_HDataMapOfStringHArray1OfReal(const TDataStd_DataMapOfStringHArray1OfReal& theOther);
  
     const  TDataStd_DataMapOfStringHArray1OfReal& Map()  const;
  
      TDataStd_DataMapOfStringHArray1OfReal& ChangeMap() ;




  DEFINE_STANDARD_RTTI(TDataStd_HDataMapOfStringHArray1OfReal)

protected:




private: 


  TDataStd_DataMapOfStringHArray1OfReal myMap;


};


#include <OCAF/TDataStd/TDataStd_HDataMapOfStringHArray1OfReal.lxx>





#endif // _TDataStd_HDataMapOfStringHArray1OfReal_HeaderFile
