// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Array2OfSurfacePatch_HeaderFile
#define _StepGeom_Array2OfSurfacePatch_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Handle_StepGeom_SurfacePatch.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class StepGeom_SurfacePatch;



class StepGeom_Array2OfSurfacePatch 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT StepGeom_Array2OfSurfacePatch(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT StepGeom_Array2OfSurfacePatch(const Handle(StepGeom_SurfacePatch)& Item, const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
  Standard_EXPORT   void Init (const Handle(StepGeom_SurfacePatch)& V) ;
  
  Standard_EXPORT   void Destroy() ;
~StepGeom_Array2OfSurfacePatch()
{
  Destroy();
}
  
  Standard_EXPORT  const  StepGeom_Array2OfSurfacePatch& Assign (const StepGeom_Array2OfSurfacePatch& Other) ;
 const  StepGeom_Array2OfSurfacePatch& operator = (const StepGeom_Array2OfSurfacePatch& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Handle(StepGeom_SurfacePatch)& Value) ;
  
     const  Handle(StepGeom_SurfacePatch)& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
   const  Handle(StepGeom_SurfacePatch)& operator() (const Standard_Integer Row, const Standard_Integer Col)  const
{
  return Value(Row,Col);
}
  
      Handle(StepGeom_SurfacePatch)& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
    Handle(StepGeom_SurfacePatch)& operator() (const Standard_Integer Row, const Standard_Integer Col) 
{
  return ChangeValue(Row,Col);
}




protected:





private:

  
  Standard_EXPORT StepGeom_Array2OfSurfacePatch(const StepGeom_Array2OfSurfacePatch& AnArray);
  
  Standard_EXPORT   void Allocate() ;


  Standard_Integer myLowerRow;
  Standard_Integer myLowerColumn;
  Standard_Integer myUpperRow;
  Standard_Integer myUpperColumn;
  Standard_Boolean myDeletable;
  Standard_Address myData;


};

#define Array2Item Handle(StepGeom_SurfacePatch)
#define Array2Item_hxx <StepGeom_SurfacePatch.hxx>
#define TCollection_Array2 StepGeom_Array2OfSurfacePatch
#define TCollection_Array2_hxx <StepGeom_Array2OfSurfacePatch.hxx>

#include <TCollection_Array2.lxx>

#undef Array2Item
#undef Array2Item_hxx
#undef TCollection_Array2
#undef TCollection_Array2_hxx




#endif // _StepGeom_Array2OfSurfacePatch_HeaderFile
