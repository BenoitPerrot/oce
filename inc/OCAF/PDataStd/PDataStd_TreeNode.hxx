// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_TreeNode_HeaderFile
#define _PDataStd_TreeNode_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PDataStd/Handle_PDataStd_TreeNode.hxx>

#include <OCAF/PDataStd/Handle_PDataStd_TreeNode.hxx>
#include <Foundation/Standard/Standard_GUID.hxx>
#include <OCAF/PDF/PDF_Attribute.hxx>
class Standard_GUID;


class PDataStd_TreeNode : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_TreeNode();
  
  Standard_EXPORT   Handle(PDataStd_TreeNode) First()  const;
  
  Standard_EXPORT   void SetFirst (const Handle(PDataStd_TreeNode)& F) ;
  
  Standard_EXPORT   Handle(PDataStd_TreeNode) Next()  const;
  
  Standard_EXPORT   void SetNext (const Handle(PDataStd_TreeNode)& F) ;
  
  Standard_EXPORT   void SetTreeID (const Standard_GUID& GUID) ;
  
  Standard_EXPORT   Standard_GUID GetTreeID()  const;

PDataStd_TreeNode(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PDataStd_TreeNode) _CSFDB_GetPDataStd_TreeNodemyFirst() const { return myFirst; }
    void _CSFDB_SetPDataStd_TreeNodemyFirst(const Handle(PDataStd_TreeNode)& p) { myFirst = p; }
    Handle(PDataStd_TreeNode) _CSFDB_GetPDataStd_TreeNodemyNext() const { return myNext; }
    void _CSFDB_SetPDataStd_TreeNodemyNext(const Handle(PDataStd_TreeNode)& p) { myNext = p; }
    const Standard_GUID& _CSFDB_GetPDataStd_TreeNodemyTreeID() const { return myTreeID; }



  DEFINE_STANDARD_RTTI(PDataStd_TreeNode)

protected:




private: 


  Handle(PDataStd_TreeNode) myFirst;
  Handle(PDataStd_TreeNode) myNext;
  Standard_GUID myTreeID;


};







#endif // _PDataStd_TreeNode_HeaderFile
