// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_Array1OfBox2d_HeaderFile
#define _Bnd_Array1OfBox2d_HeaderFile

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
class Bnd_Box2d;



class Bnd_Array1OfBox2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Bnd_Array1OfBox2d(const Standard_Integer Low, const Standard_Integer Up);
  
    Bnd_Array1OfBox2d(const Bnd_Box2d& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Bnd_Box2d& V) ;
  
      void Destroy() ;
~Bnd_Array1OfBox2d()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Bnd_Array1OfBox2d& Assign (const Bnd_Array1OfBox2d& Other) ;
 const  Bnd_Array1OfBox2d& operator = (const Bnd_Array1OfBox2d& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Bnd_Box2d& Value) ;
  
     const  Bnd_Box2d& Value (const Standard_Integer Index)  const;
   const  Bnd_Box2d& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Bnd_Box2d& ChangeValue (const Standard_Integer Index) ;
    Bnd_Box2d& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Bnd_Array1OfBox2d(const Bnd_Array1OfBox2d& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Bnd_Box2d
#define Array1Item_hxx <Bnd_Box2d.hxx>
#define TCollection_Array1 Bnd_Array1OfBox2d
#define TCollection_Array1_hxx <Bnd_Array1OfBox2d.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Bnd_Array1OfBox2d_HeaderFile
