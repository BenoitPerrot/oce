// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QADNaming_HeaderFile
#define _QADNaming_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_CString.hxx>
#include <OCAF/TDF/Handle_TDF_Data.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Viewer/Draw/Draw_Interpretor.hxx>
class TopoDS_Shape;
class TDF_Data;
class TopTools_ListOfShape;
class TCollection_AsciiString;
class TDF_Label;



class QADNaming 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   TopoDS_Shape CurrentShape (const Standard_CString ShapeEntry, const Handle(TDF_Data)& Data) ;
  
  Standard_EXPORT static   void GetShape (const Standard_CString ShapeEntry, const Handle(TDF_Data)& Data, TopTools_ListOfShape& Shapes) ;
  
  //! Status = 0  Not  found,
  //! Status = 1  One  shape,
  //! Status = 2  More than one shape.
  Standard_EXPORT static   TCollection_AsciiString GetEntry (const TopoDS_Shape& Shape, const Handle(TDF_Data)& Data, Standard_Integer& Status) ;
  
  //! returns label by first two arguments (df and entry string)
  Standard_EXPORT static   Standard_Boolean Entry (const Standard_Address theArguments, TDF_Label& theLabel) ;
  
  Standard_EXPORT static   void AllCommands (Draw_Interpretor& DI) ;
  
  //! commands relatives to NamedShape
  Standard_EXPORT static   void BasicCommands (Draw_Interpretor& DI) ;
  
  //! loading NamedShape to the Data Framework
  Standard_EXPORT static   void BuilderCommands (Draw_Interpretor& DI) ;
  
  //! loading NamedShape to the Data Framework
  Standard_EXPORT static   void IteratorsCommands (Draw_Interpretor& DI) ;
  
  Standard_EXPORT static   void ToolsCommands (Draw_Interpretor& DI) ;
  
  //! commands relatives to Naming
  Standard_EXPORT static   void SelectionCommands (Draw_Interpretor& DI) ;




protected:





private:





};







#endif // _QADNaming_HeaderFile
