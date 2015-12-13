// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPolyh_SectionLine_HeaderFile
#define _IntPolyh_SectionLine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <IntPolyh_SeqOfStartPoints.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class IntPolyh_StartPoint;



class IntPolyh_SectionLine 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntPolyh_SectionLine();
  
  Standard_EXPORT IntPolyh_SectionLine(const Standard_Integer nn);
  
  Standard_EXPORT   void Init (const Standard_Integer nn) ;
  
  Standard_EXPORT  const  IntPolyh_StartPoint& Value (const Standard_Integer nn)  const;
 const  IntPolyh_StartPoint& operator [] (const Standard_Integer nn)  const
{
  return Value(nn);
}
  
  Standard_EXPORT   IntPolyh_StartPoint& ChangeValue (const Standard_Integer nn) ;
  IntPolyh_StartPoint& operator [] (const Standard_Integer nn) 
{
  return ChangeValue(nn);
}
  
  Standard_EXPORT   IntPolyh_SectionLine& Copy (const IntPolyh_SectionLine& Other) ;
  IntPolyh_SectionLine& operator = (const IntPolyh_SectionLine& Other) 
{
  return Copy(Other);
}
  
  Standard_EXPORT   Standard_Integer GetN()  const;
  
  Standard_EXPORT   Standard_Integer NbStartPoints()  const;
  
  Standard_EXPORT   void IncrementNbStartPoints() ;
  
  Standard_EXPORT   void Destroy() ;
~IntPolyh_SectionLine()
{
  Destroy();
}
  
  Standard_EXPORT   void Dump()  const;
  
  Standard_EXPORT   void Prepend (const IntPolyh_StartPoint& SP) ;




protected:





private:



  IntPolyh_SeqOfStartPoints mySeqOfSPoints;


};







#endif // _IntPolyh_SectionLine_HeaderFile
