// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMPrsStd_HeaderFile
#define _XmlMPrsStd_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/XmlMDF/Handle_XmlMDF_ADriverTable.hxx>
#include <OCAF/CDM/Handle_CDM_MessageDriver.hxx>
class XmlMDF_ADriverTable;
class CDM_MessageDriver;
class XmlMPrsStd_PositionDriver;
class XmlMPrsStd_AISPresentationDriver;



class XmlMPrsStd 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Adds the attribute storage drivers to <aDriverTable>.
  Standard_EXPORT static   void AddDrivers (const Handle(XmlMDF_ADriverTable)& aDriverTable, const Handle(CDM_MessageDriver)& theMessageDriver) ;




protected:





private:




friend class XmlMPrsStd_PositionDriver;
friend class XmlMPrsStd_AISPresentationDriver;

};







#endif // _XmlMPrsStd_HeaderFile
