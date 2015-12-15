// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_Array1OfDir_HeaderFile
#define _TColgp_Array1OfDir_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class gp_Dir;



class TColgp_Array1OfDir 
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColgp_Array1OfDir(const Standard_Integer Low, const Standard_Integer Up);
  
    TColgp_Array1OfDir(const gp_Dir& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const gp_Dir& V) ;
  
      void Destroy() ;
~TColgp_Array1OfDir()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  TColgp_Array1OfDir& Assign (const TColgp_Array1OfDir& Other) ;
 const  TColgp_Array1OfDir& operator = (const TColgp_Array1OfDir& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const gp_Dir& Value) ;
  
     const  gp_Dir& Value (const Standard_Integer Index)  const;
   const  gp_Dir& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      gp_Dir& ChangeValue (const Standard_Integer Index) ;
    gp_Dir& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT TColgp_Array1OfDir(const TColgp_Array1OfDir& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item gp_Dir
#define Array1Item_hxx <Mathematics/Primitives/gp_Dir.hxx>
#define TCollection_Array1 TColgp_Array1OfDir
#define TCollection_Array1_hxx <Mathematics/Collections/TColgp_Array1OfDir.hxx>

#include <Foundation/TCollection/TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _TColgp_Array1OfDir_HeaderFile
