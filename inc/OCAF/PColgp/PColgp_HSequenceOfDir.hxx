// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HSequenceOfDir_HeaderFile
#define _PColgp_HSequenceOfDir_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <OCAF/PColgp/Handle_PColgp_HSequenceOfDir.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
#include <OCAF/PColgp/Handle_PColgp_HSequenceOfDir.hxx>
#include <OCAF/PColgp/Handle_PColgp_SeqNodeOfHSequenceOfDir.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>
class PColgp_SeqNodeOfHSequenceOfDir;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PColgp_SeqExplorerOfHSequenceOfDir;
class gp_Dir;


class PColgp_HSequenceOfDir : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColgp_HSequenceOfDir();
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   Standard_Integer Length()  const;
  
  Standard_EXPORT   gp_Dir First()  const;
  
  Standard_EXPORT   gp_Dir Last()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const gp_Dir& T) ;
  
  Standard_EXPORT   void Append (const Handle(PColgp_HSequenceOfDir)& S) ;
  
  Standard_EXPORT   void Prepend (const gp_Dir& T) ;
  
  Standard_EXPORT   void Prepend (const Handle(PColgp_HSequenceOfDir)& S) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer Index, const gp_Dir& T) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer Index, const Handle(PColgp_HSequenceOfDir)& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const gp_Dir& T) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(PColgp_HSequenceOfDir)& S) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer I, const Standard_Integer J) ;
  
  Standard_EXPORT   Handle(PColgp_HSequenceOfDir) SubSequence (const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  Standard_EXPORT   Handle(PColgp_HSequenceOfDir) Split (const Standard_Integer Index) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_Dir& T) ;
  
  Standard_EXPORT   gp_Dir Value (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Boolean Contains (const gp_Dir& T)  const;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const gp_Dir& T, const Standard_Integer FromIndex, const Standard_Integer ToIndex)  const;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const gp_Dir& T)  const;
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   void Destroy() ;
~PColgp_HSequenceOfDir()
{
  Destroy();
}
PColgp_HSequenceOfDir(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Handle(PColgp_SeqNodeOfHSequenceOfDir) _CSFDB_GetPColgp_HSequenceOfDirFirstItem() const { return FirstItem; }
    void _CSFDB_SetPColgp_HSequenceOfDirFirstItem(const Handle(PColgp_SeqNodeOfHSequenceOfDir)& p) { FirstItem = p; }
    Handle(PColgp_SeqNodeOfHSequenceOfDir) _CSFDB_GetPColgp_HSequenceOfDirLastItem() const { return LastItem; }
    void _CSFDB_SetPColgp_HSequenceOfDirLastItem(const Handle(PColgp_SeqNodeOfHSequenceOfDir)& p) { LastItem = p; }
    Standard_Integer _CSFDB_GetPColgp_HSequenceOfDirSize() const { return Size; }
    void _CSFDB_SetPColgp_HSequenceOfDirSize(const Standard_Integer p) { Size = p; }

friend class PColgp_SeqExplorerOfHSequenceOfDir;


  DEFINE_STANDARD_RTTI(PColgp_HSequenceOfDir)

protected:




private: 

  
  Standard_EXPORT   Handle(PColgp_SeqNodeOfHSequenceOfDir) GetFirst()  const;
  
  Standard_EXPORT   Handle(PColgp_SeqNodeOfHSequenceOfDir) GetLast()  const;

  Handle(PColgp_SeqNodeOfHSequenceOfDir) FirstItem;
  Handle(PColgp_SeqNodeOfHSequenceOfDir) LastItem;
  Standard_Integer Size;


};







#endif // _PColgp_HSequenceOfDir_HeaderFile
