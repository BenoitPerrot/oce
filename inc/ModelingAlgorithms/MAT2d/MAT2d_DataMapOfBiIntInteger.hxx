// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapOfBiIntInteger_HeaderFile
#define _MAT2d_DataMapOfBiIntInteger_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMap.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/MAT2d/Handle_MAT2d_DataMapNodeOfDataMapOfBiIntInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class MAT2d_BiInt;
class MAT2d_MapBiIntHasher;
class MAT2d_DataMapNodeOfDataMapOfBiIntInteger;
class MAT2d_DataMapIteratorOfDataMapOfBiIntInteger;



class MAT2d_DataMapOfBiIntInteger  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_DataMapOfBiIntInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MAT2d_DataMapOfBiIntInteger& Assign (const MAT2d_DataMapOfBiIntInteger& Other) ;
  MAT2d_DataMapOfBiIntInteger& operator = (const MAT2d_DataMapOfBiIntInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MAT2d_DataMapOfBiIntInteger()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const MAT2d_BiInt& K, const Standard_Integer& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const MAT2d_BiInt& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const MAT2d_BiInt& K) ;
  
  Standard_EXPORT  const  Standard_Integer& Find (const MAT2d_BiInt& K)  const;
 const  Standard_Integer& operator() (const MAT2d_BiInt& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Integer& ChangeFind (const MAT2d_BiInt& K) ;
  Standard_Integer& operator() (const MAT2d_BiInt& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const MAT2d_BiInt& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const MAT2d_BiInt& K) ;




protected:





private:

  
  Standard_EXPORT MAT2d_DataMapOfBiIntInteger(const MAT2d_DataMapOfBiIntInteger& Other);




};







#endif // _MAT2d_DataMapOfBiIntInteger_HeaderFile
