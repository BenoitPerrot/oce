// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HPackedMapOfInteger_HeaderFile
#define _TColStd_HPackedMapOfInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColStd_HPackedMapOfInteger.hxx>

#include <TColStd_PackedMapOfInteger.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>


//! Extension of TColStd_PackedMapOfInteger class to be manipulated by handle.
class TColStd_HPackedMapOfInteger : public MMgt_TShared
{

public:

  
  Standard_EXPORT TColStd_HPackedMapOfInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT TColStd_HPackedMapOfInteger(const TColStd_PackedMapOfInteger& theOther);
  
     const  TColStd_PackedMapOfInteger& Map()  const;
  
      TColStd_PackedMapOfInteger& ChangeMap() ;




  DEFINE_STANDARD_RTTI(TColStd_HPackedMapOfInteger)

protected:




private: 


  TColStd_PackedMapOfInteger myMap;


};


#include <TColStd_HPackedMapOfInteger.lxx>





#endif // _TColStd_HPackedMapOfInteger_HeaderFile
