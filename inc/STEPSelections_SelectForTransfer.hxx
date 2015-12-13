// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPSelections_SelectForTransfer_HeaderFile
#define _STEPSelections_SelectForTransfer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_STEPSelections_SelectForTransfer.hxx>

#include <XSControl_SelectForTransfer.hxx>
#include <Handle_XSControl_TransferReader.hxx>
class XSControl_TransferReader;
class Interface_EntityIterator;
class Interface_Graph;



class STEPSelections_SelectForTransfer : public XSControl_SelectForTransfer
{

public:

  
  Standard_EXPORT STEPSelections_SelectForTransfer();
  
  Standard_EXPORT STEPSelections_SelectForTransfer(const Handle(XSControl_TransferReader)& TR);
  
  Standard_EXPORT virtual   Interface_EntityIterator RootResult (const Interface_Graph& G)  const;




  DEFINE_STANDARD_RTTI(STEPSelections_SelectForTransfer)

protected:




private: 




};







#endif // _STEPSelections_SelectForTransfer_HeaderFile
