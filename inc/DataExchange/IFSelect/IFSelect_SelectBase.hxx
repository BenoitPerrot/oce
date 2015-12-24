// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SelectBase_HeaderFile
#define _IFSelect_SelectBase_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IFSelect/Handle_IFSelect_SelectBase.hxx>

#include <DataExchange/IFSelect/IFSelect_Selection.hxx>
class IFSelect_SelectionIterator;


//! SelectBase works directly from an InterfaceModel : it is the
//! first base for other Selections.
class IFSelect_SelectBase : public IFSelect_Selection
{

public:

  
  //! Puts in an Iterator the Selections from which "me" depends
  //! This list is empty for all SelectBase type Selections
  Standard_EXPORT   void FillIterator (IFSelect_SelectionIterator& iter)  const;




  DEFINE_STANDARD_RTTI(IFSelect_SelectBase)

protected:




private: 




};







#endif // _IFSelect_SelectBase_HeaderFile
