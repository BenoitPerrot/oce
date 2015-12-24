// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMNaming_NamedShapeDriver_HeaderFile
#define _XmlMNaming_NamedShapeDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <OCAF/XmlMNaming/Handle_XmlMNaming_NamedShapeDriver.hxx>

#include <ModelingData/BRepTools/BRepTools_ShapeSet.hxx>
#include <OCAF/XmlMDF/XmlMDF_ADriver.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
#include <OCAF/TDF/Handle_TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_RRelocationTable.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_SRelocationTable.hxx>
#include <OCAF/XmlObjMgt/XmlObjMgt_Element.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class XmlObjMgt_Persistent;
class TopTools_LocationSet;



class XmlMNaming_NamedShapeDriver : public XmlMDF_ADriver
{

public:

  
  Standard_EXPORT XmlMNaming_NamedShapeDriver(const Handle(CDM_MessageDriver)& aMessageDriver);
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   Standard_Boolean Paste (const XmlObjMgt_Persistent& theSource, const Handle(TDF_Attribute)& theTarget, XmlObjMgt_RRelocationTable& theRelocTable)  const;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& theSource, XmlObjMgt_Persistent& theTarget, XmlObjMgt_SRelocationTable& theRelocTable)  const;
  
  //! Input the shapes from DOM element
  Standard_EXPORT   void ReadShapeSection (const XmlObjMgt_Element& anElement) ;
  
  //! Output the shapes into DOM element
  Standard_EXPORT   void WriteShapeSection (XmlObjMgt_Element& anElement) ;
  
  //! Clear myShapeSet
  Standard_EXPORT   void Clear() ;
  
  //! get the format of topology
      TopTools_LocationSet& GetShapesLocations() ;




  DEFINE_STANDARD_RTTI(XmlMNaming_NamedShapeDriver)

protected:




private: 


  BRepTools_ShapeSet myShapeSet;


};


#include <OCAF/XmlMNaming/XmlMNaming_NamedShapeDriver.lxx>





#endif // _XmlMNaming_NamedShapeDriver_HeaderFile
