// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_HSeqOfRoot_HeaderFile
#define _Storage_HSeqOfRoot_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Storage/Handle_Storage_HSeqOfRoot.hxx>

#include <Foundation/Storage/Storage_SeqOfRoot.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Storage/Handle_Storage_Root.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Storage_Root;
class Storage_SeqOfRoot;



class Storage_HSeqOfRoot : public MMgt_TShared
{

public:

  
    Storage_HSeqOfRoot();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(Storage_Root)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(Storage_HSeqOfRoot)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(Storage_Root)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(Storage_HSeqOfRoot)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Storage_Root)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Storage_HSeqOfRoot)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Storage_Root)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Storage_HSeqOfRoot)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(Storage_HSeqOfRoot) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(Storage_Root)& anItem) ;
  
  Standard_EXPORT  const  Handle(Storage_Root)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(Storage_Root)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  Storage_SeqOfRoot& Sequence()  const;
  
      Storage_SeqOfRoot& ChangeSequence() ;
  
  Standard_EXPORT   Handle(Storage_HSeqOfRoot) ShallowCopy()  const;




  DEFINE_STANDARD_RTTI(Storage_HSeqOfRoot)

protected:




private: 


  Storage_SeqOfRoot mySequence;


};

#define Item Handle(Storage_Root)
#define Item_hxx <Foundation/Storage/Storage_Root.hxx>
#define TheSequence Storage_SeqOfRoot
#define TheSequence_hxx <Foundation/Storage/Storage_SeqOfRoot.hxx>
#define TCollection_HSequence Storage_HSeqOfRoot
#define TCollection_HSequence_hxx <Foundation/Storage/Storage_HSeqOfRoot.hxx>
#define Handle_TCollection_HSequence Handle_Storage_HSeqOfRoot
#define TCollection_HSequence_Type_() Storage_HSeqOfRoot_Type_()

#include <Foundation/TCollection/TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


inline Handle(Storage_HSeqOfRoot) ShallowCopy(const Handle(Storage_HSeqOfRoot)& me) {
 return me->ShallowCopy();
}



#endif // _Storage_HSeqOfRoot_HeaderFile
