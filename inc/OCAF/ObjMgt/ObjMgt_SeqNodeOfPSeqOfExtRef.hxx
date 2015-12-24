// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ObjMgt_SeqNodeOfPSeqOfExtRef_HeaderFile
#define _ObjMgt_SeqNodeOfPSeqOfExtRef_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/ObjMgt/Handle_ObjMgt_SeqNodeOfPSeqOfExtRef.hxx>

#include <OCAF/ObjMgt/Handle_ObjMgt_ExternRef.hxx>
#include <OCAF/ObjMgt/Handle_ObjMgt_SeqNodeOfPSeqOfExtRef.hxx>
#include <OCAF/PMMgt/PMMgt_PManaged.hxx>
#include <OCAF/ObjMgt/Handle_ObjMgt_PSeqOfExtRef.hxx>
class ObjMgt_ExternRef;
class ObjMgt_PSeqOfExtRef;
class ObjMgt_SeqExplorerOfPSeqOfExtRef;


class ObjMgt_SeqNodeOfPSeqOfExtRef : public PMMgt_PManaged
{

public:

  
  Standard_EXPORT ObjMgt_SeqNodeOfPSeqOfExtRef(const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& TheLast, const Handle(ObjMgt_ExternRef)& TheItem);
  
  Standard_EXPORT ObjMgt_SeqNodeOfPSeqOfExtRef(const Handle(ObjMgt_ExternRef)& TheItem, const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& TheFirst);
  
  Standard_EXPORT ObjMgt_SeqNodeOfPSeqOfExtRef(const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& ThePrevious, const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& TheNext, const Handle(ObjMgt_ExternRef)& TheItem);
  
  Standard_EXPORT   Handle(ObjMgt_ExternRef) Value()  const;
  
  Standard_EXPORT   Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) Next()  const;
  
  Standard_EXPORT   Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) Previous()  const;
  
  Standard_EXPORT   void SetValue (const Handle(ObjMgt_ExternRef)& AnItem) ;
  
  Standard_EXPORT   void SetNext (const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& ANode) ;
  
  Standard_EXPORT   void SetPrevious (const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& ANode) ;

ObjMgt_SeqNodeOfPSeqOfExtRef( )
{
  
}
ObjMgt_SeqNodeOfPSeqOfExtRef(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) _CSFDB_GetObjMgt_SeqNodeOfPSeqOfExtRefMyPrevious() const { return MyPrevious; }
    void _CSFDB_SetObjMgt_SeqNodeOfPSeqOfExtRefMyPrevious(const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& p) { MyPrevious = p; }
    Handle(ObjMgt_ExternRef) _CSFDB_GetObjMgt_SeqNodeOfPSeqOfExtRefMyItem() const { return MyItem; }
    void _CSFDB_SetObjMgt_SeqNodeOfPSeqOfExtRefMyItem(const Handle(ObjMgt_ExternRef)& p) { MyItem = p; }
    Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) _CSFDB_GetObjMgt_SeqNodeOfPSeqOfExtRefMyNext() const { return MyNext; }
    void _CSFDB_SetObjMgt_SeqNodeOfPSeqOfExtRefMyNext(const Handle(ObjMgt_SeqNodeOfPSeqOfExtRef)& p) { MyNext = p; }

friend class ObjMgt_PSeqOfExtRef;
friend class ObjMgt_SeqExplorerOfPSeqOfExtRef;


  DEFINE_STANDARD_RTTI(ObjMgt_SeqNodeOfPSeqOfExtRef)

protected:




private: 


  Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) MyPrevious;
  Handle(ObjMgt_ExternRef) MyItem;
  Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) MyNext;


};







#endif // _ObjMgt_SeqNodeOfPSeqOfExtRef_HeaderFile
