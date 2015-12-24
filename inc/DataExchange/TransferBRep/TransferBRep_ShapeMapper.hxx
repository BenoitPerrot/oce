// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TransferBRep_ShapeMapper_HeaderFile
#define _TransferBRep_ShapeMapper_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/TransferBRep/Handle_TransferBRep_ShapeMapper.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <DataExchange/Transfer/Transfer_Finder.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/Transfer/Handle_Transfer_Finder.hxx>
#include <Foundation/Standard/Handle_Standard_Type.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TransferBRep_ShapeInfo;
class Transfer_Finder;
class Standard_Type;



class TransferBRep_ShapeMapper : public Transfer_Finder
{

public:

  
  Standard_EXPORT TransferBRep_ShapeMapper(const TopoDS_Shape& akey);
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;
  
  Standard_EXPORT   Standard_Boolean Equates (const Handle(Transfer_Finder)& other)  const;
  
  Standard_EXPORT virtual   Handle(Standard_Type) ValueType()  const;
  
  Standard_EXPORT virtual   Standard_CString ValueTypeName()  const;




  DEFINE_STANDARD_RTTI(TransferBRep_ShapeMapper)

protected:




private: 


  TopoDS_Shape theval;


};







#endif // _TransferBRep_ShapeMapper_HeaderFile
