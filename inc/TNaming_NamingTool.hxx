// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_NamingTool_HeaderFile
#define _TNaming_NamingTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_TNaming_NamedShape.hxx>
class TDF_LabelMap;
class TNaming_NamedShape;
class TopTools_MapOfShape;
class TDF_Label;
class TopoDS_Shape;



class TNaming_NamingTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void CurrentShape (const TDF_LabelMap& Valid, const TDF_LabelMap& Forbiden, const Handle(TNaming_NamedShape)& NS, TopTools_MapOfShape& MS) ;
  
  Standard_EXPORT static   void CurrentShapeFromShape (const TDF_LabelMap& Valid, const TDF_LabelMap& Forbiden, const TDF_Label& Acces, const TopoDS_Shape& S, TopTools_MapOfShape& MS) ;
  
  Standard_EXPORT static   void BuildDescendants (const Handle(TNaming_NamedShape)& NS, TDF_LabelMap& Labels) ;




protected:





private:





};







#endif // _TNaming_NamingTool_HeaderFile
