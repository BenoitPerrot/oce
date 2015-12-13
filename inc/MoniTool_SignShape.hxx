// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_SignShape_HeaderFile
#define _MoniTool_SignShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MoniTool_SignShape.hxx>

#include <MoniTool_SignText.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_Standard_Transient.hxx>
class TCollection_AsciiString;
class Standard_Transient;


//! Signs HShape according to its real content (type of Shape)
//! Context is not used
class MoniTool_SignShape : public MoniTool_SignText
{

public:

  
  Standard_EXPORT MoniTool_SignShape();
  
  //! Returns "SHAPE"
  Standard_EXPORT   Standard_CString Name()  const;
  
  //! Returns for a HShape, the string of its ShapeEnum
  //! The Model is absolutely useless (may be null)
  Standard_EXPORT   TCollection_AsciiString Text (const Handle(Standard_Transient)& ent, const Handle(Standard_Transient)& context)  const;




  DEFINE_STANDARD_RTTI(MoniTool_SignShape)

protected:




private: 




};







#endif // _MoniTool_SignShape_HeaderFile
