// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_HAssemblyTable_HeaderFile
#define _FEmTool_HAssemblyTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_FEmTool_HAssemblyTable.hxx>

#include <FEmTool_AssemblyTable.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class TColStd_HArray1OfInteger;
class FEmTool_AssemblyTable;



class FEmTool_HAssemblyTable : public MMgt_TShared
{

public:

  
    FEmTool_HAssemblyTable(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2);
  
    FEmTool_HAssemblyTable(const Standard_Integer R1, const Standard_Integer R2, const Standard_Integer C1, const Standard_Integer C2, const Handle(TColStd_HArray1OfInteger)& V);
  
      void Init (const Handle(TColStd_HArray1OfInteger)& V) ;
  
      Standard_Integer ColLength()  const;
  
      Standard_Integer RowLength()  const;
  
      Standard_Integer LowerCol()  const;
  
      Standard_Integer LowerRow()  const;
  
      Standard_Integer UpperCol()  const;
  
      Standard_Integer UpperRow()  const;
  
      void SetValue (const Standard_Integer Row, const Standard_Integer Col, const Handle(TColStd_HArray1OfInteger)& Value) ;
  
     const  Handle(TColStd_HArray1OfInteger)& Value (const Standard_Integer Row, const Standard_Integer Col)  const;
  
      Handle(TColStd_HArray1OfInteger)& ChangeValue (const Standard_Integer Row, const Standard_Integer Col) ;
  
     const  FEmTool_AssemblyTable& Array2()  const;
  
      FEmTool_AssemblyTable& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(FEmTool_HAssemblyTable)

protected:




private: 


  FEmTool_AssemblyTable myArray;


};

#define ItemHArray2 Handle(TColStd_HArray1OfInteger)
#define ItemHArray2_hxx <TColStd_HArray1OfInteger.hxx>
#define TheArray2 FEmTool_AssemblyTable
#define TheArray2_hxx <FEmTool_AssemblyTable.hxx>
#define TCollection_HArray2 FEmTool_HAssemblyTable
#define TCollection_HArray2_hxx <FEmTool_HAssemblyTable.hxx>
#define Handle_TCollection_HArray2 Handle_FEmTool_HAssemblyTable
#define TCollection_HArray2_Type_() FEmTool_HAssemblyTable_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_




#endif // _FEmTool_HAssemblyTable_HeaderFile
