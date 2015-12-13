// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_HArray2OfSurface_HeaderFile
#define _TColGeom_HArray2OfSurface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TColGeom_HArray2OfSurface.hxx>

#include <TColGeom_Array2OfSurface.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class Geom_Surface;
class TColGeom_Array2OfSurface;



class TColGeom_HArray2OfSurface : public MMgt_TShared
{

public:

  
    TColGeom_HArray2OfSurface(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    TColGeom_HArray2OfSurface(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Handle(Geom_Surface)& V);
  
      void Init (const Handle(Geom_Surface)& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Handle(Geom_Surface)& Value) ;
  
     const  Handle(Geom_Surface)& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Handle(Geom_Surface)& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  TColGeom_Array2OfSurface& Array2()  const;
  
      TColGeom_Array2OfSurface& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColGeom_HArray2OfSurface)

protected:




private: 


  TColGeom_Array2OfSurface myArray;


};

#define ItemHArray2 Handle(Geom_Surface)
#define ItemHArray2_hxx <Geom_Surface.hxx>
#define TheArray2 TColGeom_Array2OfSurface
#define TheArray2_hxx <TColGeom_Array2OfSurface.hxx>
#define TCollection_HArray2 TColGeom_HArray2OfSurface
#define TCollection_HArray2_hxx <TColGeom_HArray2OfSurface.hxx>
#define Handle_TCollection_HArray2 Handle_TColGeom_HArray2OfSurface
#define TCollection_HArray2_Type_() TColGeom_HArray2OfSurface_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _TColGeom_HArray2OfSurface_HeaderFile
