// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectFromDrawing_HeaderFile
#define _IGESSelect_SelectFromDrawing_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SelectFromDrawing.hxx>

#include <IFSelect_SelectDeduct.hxx>
class Interface_InterfaceError;
class Interface_EntityIterator;
class Interface_Graph;
class TCollection_AsciiString;


//! This selection gets in all the model, the entities which are
//! attached to the drawing(s) given as input. This includes :
//! - Drawing Frame (Annotations directky referenced by Drawings)
//! - Entities attached to the single Views referenced by Drawings
class IGESSelect_SelectFromDrawing : public IFSelect_SelectDeduct
{

public:

  
  //! Creates a SelectFromDrawing
  Standard_EXPORT IGESSelect_SelectFromDrawing();
  
  //! Selects the Entities which are attached to the Drawing(s)
  //! present in the Input
  Standard_EXPORT   Interface_EntityIterator RootResult (const Interface_Graph& G)  const;
  
  //! Returns the label, with is "Entities attached to Drawing"
  Standard_EXPORT   TCollection_AsciiString Label()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectFromDrawing)

protected:




private: 




};







#endif // _IGESSelect_SelectFromDrawing_HeaderFile
