// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_BiPoint_HeaderFile
#define _HLRAlgo_BiPoint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>



class HLRAlgo_BiPoint 
{
public:

  DEFINE_STANDARD_ALLOC

  
    HLRAlgo_BiPoint();
  
  Standard_EXPORT HLRAlgo_BiPoint(const Standard_Real X1, const Standard_Real Y1, const Standard_Real Z1, const Standard_Real X2, const Standard_Real Y2, const Standard_Real Z2, const Standard_Real XT1, const Standard_Real YT1, const Standard_Real ZT1, const Standard_Real XT2, const Standard_Real YT2, const Standard_Real ZT2, const Standard_Integer Index, const Standard_Boolean reg1, const Standard_Boolean regn, const Standard_Boolean outl, const Standard_Boolean intl);
  
  Standard_EXPORT HLRAlgo_BiPoint(const Standard_Real X1, const Standard_Real Y1, const Standard_Real Z1, const Standard_Real X2, const Standard_Real Y2, const Standard_Real Z2, const Standard_Real XT1, const Standard_Real YT1, const Standard_Real ZT1, const Standard_Real XT2, const Standard_Real YT2, const Standard_Real ZT2, const Standard_Integer Index, const Standard_Integer flag);
  
  Standard_EXPORT HLRAlgo_BiPoint(const Standard_Real X1, const Standard_Real Y1, const Standard_Real Z1, const Standard_Real X2, const Standard_Real Y2, const Standard_Real Z2, const Standard_Real XT1, const Standard_Real YT1, const Standard_Real ZT1, const Standard_Real XT2, const Standard_Real YT2, const Standard_Real ZT2, const Standard_Integer Index, const Standard_Integer i1, const Standard_Integer i1p1, const Standard_Integer i1p2, const Standard_Boolean reg1, const Standard_Boolean regn, const Standard_Boolean outl, const Standard_Boolean intl);
  
  Standard_EXPORT HLRAlgo_BiPoint(const Standard_Real X1, const Standard_Real Y1, const Standard_Real Z1, const Standard_Real X2, const Standard_Real Y2, const Standard_Real Z2, const Standard_Real XT1, const Standard_Real YT1, const Standard_Real ZT1, const Standard_Real XT2, const Standard_Real YT2, const Standard_Real ZT2, const Standard_Integer Index, const Standard_Integer i1, const Standard_Integer i1p1, const Standard_Integer i1p2, const Standard_Integer flag);
  
  Standard_EXPORT HLRAlgo_BiPoint(const Standard_Real X1, const Standard_Real Y1, const Standard_Real Z1, const Standard_Real X2, const Standard_Real Y2, const Standard_Real Z2, const Standard_Real XT1, const Standard_Real YT1, const Standard_Real ZT1, const Standard_Real XT2, const Standard_Real YT2, const Standard_Real ZT2, const Standard_Integer Index, const Standard_Integer i1, const Standard_Integer i1p1, const Standard_Integer i1p2, const Standard_Integer i2, const Standard_Integer i2p1, const Standard_Integer i2p2, const Standard_Boolean reg1, const Standard_Boolean regn, const Standard_Boolean outl, const Standard_Boolean intl);
  
  Standard_EXPORT HLRAlgo_BiPoint(const Standard_Real X1, const Standard_Real Y1, const Standard_Real Z1, const Standard_Real X2, const Standard_Real Y2, const Standard_Real Z2, const Standard_Real XT1, const Standard_Real YT1, const Standard_Real ZT1, const Standard_Real XT2, const Standard_Real YT2, const Standard_Real ZT2, const Standard_Integer Index, const Standard_Integer i1, const Standard_Integer i1p1, const Standard_Integer i1p2, const Standard_Integer i2, const Standard_Integer i2p1, const Standard_Integer i2p2, const Standard_Integer flag);
  
      Standard_Boolean Rg1Line()  const;
  
      void Rg1Line (const Standard_Boolean B) ;
  
      Standard_Boolean RgNLine()  const;
  
      void RgNLine (const Standard_Boolean B) ;
  
      Standard_Boolean OutLine()  const;
  
      void OutLine (const Standard_Boolean B) ;
  
      Standard_Boolean IntLine()  const;
  
      void IntLine (const Standard_Boolean B) ;
  
      Standard_Boolean Hidden()  const;
  
      void Hidden (const Standard_Boolean B) ;
  
      Standard_Address Indices()  const;
  
      Standard_Address Coordinates()  const;




protected:





private:



  Standard_Integer myIndices[10];
  Standard_Real myCoordinates[12];


};


#include <HLRAlgo_BiPoint.lxx>





#endif // _HLRAlgo_BiPoint_HeaderFile
