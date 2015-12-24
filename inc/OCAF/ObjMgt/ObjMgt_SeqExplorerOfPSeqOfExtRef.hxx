// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ObjMgt_SeqExplorerOfPSeqOfExtRef_HeaderFile
#define _ObjMgt_SeqExplorerOfPSeqOfExtRef_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/ObjMgt/Handle_ObjMgt_SeqNodeOfPSeqOfExtRef.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/ObjMgt/Handle_ObjMgt_PSeqOfExtRef.hxx>
#include <OCAF/ObjMgt/Handle_ObjMgt_ExternRef.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class ObjMgt_SeqNodeOfPSeqOfExtRef;
class ObjMgt_PSeqOfExtRef;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class ObjMgt_ExternRef;



class ObjMgt_SeqExplorerOfPSeqOfExtRef 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ObjMgt_SeqExplorerOfPSeqOfExtRef(const Handle(ObjMgt_PSeqOfExtRef)& S);
  
  Standard_EXPORT   Handle(ObjMgt_ExternRef) Value (const Standard_Integer Index) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Handle(ObjMgt_ExternRef)& T) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Handle(ObjMgt_ExternRef)& T, const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const Handle(ObjMgt_ExternRef)& T) ;




protected:





private:



  Handle(ObjMgt_SeqNodeOfPSeqOfExtRef) CurrentItem;
  Standard_Integer CurrentIndex;
  Handle(ObjMgt_PSeqOfExtRef) TheSequence;


};







#endif // _ObjMgt_SeqExplorerOfPSeqOfExtRef_HeaderFile
