// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_SeqNodeOfHSequenceOfDir_HeaderFile
#define _PColgp_SeqNodeOfHSequenceOfDir_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_SeqNodeOfHSequenceOfDir.hxx>

#include <gp_Dir.hxx>
#include <Handle_PColgp_SeqNodeOfHSequenceOfDir.hxx>
#include <PMMgt_PManaged.hxx>
#include <Handle_PColgp_HSequenceOfDir.hxx>
class PColgp_HSequenceOfDir;
class PColgp_SeqExplorerOfHSequenceOfDir;
class gp_Dir;


class PColgp_SeqNodeOfHSequenceOfDir : public PMMgt_PManaged
{

public:

  
  Standard_EXPORT PColgp_SeqNodeOfHSequenceOfDir(const Handle(PColgp_SeqNodeOfHSequenceOfDir)& TheLast, const gp_Dir& TheItem);
  
  Standard_EXPORT PColgp_SeqNodeOfHSequenceOfDir(const gp_Dir& TheItem, const Handle(PColgp_SeqNodeOfHSequenceOfDir)& TheFirst);
  
  Standard_EXPORT PColgp_SeqNodeOfHSequenceOfDir(const Handle(PColgp_SeqNodeOfHSequenceOfDir)& ThePrevious, const Handle(PColgp_SeqNodeOfHSequenceOfDir)& TheNext, const gp_Dir& TheItem);
  
  Standard_EXPORT   gp_Dir Value()  const;
  
  Standard_EXPORT   Handle(PColgp_SeqNodeOfHSequenceOfDir) Next()  const;
  
  Standard_EXPORT   Handle(PColgp_SeqNodeOfHSequenceOfDir) Previous()  const;
  
  Standard_EXPORT   void SetValue (const gp_Dir& AnItem) ;
  
  Standard_EXPORT   void SetNext (const Handle(PColgp_SeqNodeOfHSequenceOfDir)& ANode) ;
  
  Standard_EXPORT   void SetPrevious (const Handle(PColgp_SeqNodeOfHSequenceOfDir)& ANode) ;

PColgp_SeqNodeOfHSequenceOfDir( )
{
  
}
PColgp_SeqNodeOfHSequenceOfDir(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(PColgp_SeqNodeOfHSequenceOfDir) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfDirMyPrevious() const { return MyPrevious; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfDirMyPrevious(const Handle(PColgp_SeqNodeOfHSequenceOfDir)& p) { MyPrevious = p; }
    const gp_Dir& _CSFDB_GetPColgp_SeqNodeOfHSequenceOfDirMyItem() const { return MyItem; }
    Handle(PColgp_SeqNodeOfHSequenceOfDir) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfDirMyNext() const { return MyNext; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfDirMyNext(const Handle(PColgp_SeqNodeOfHSequenceOfDir)& p) { MyNext = p; }

friend class PColgp_HSequenceOfDir;
friend class PColgp_SeqExplorerOfHSequenceOfDir;


  DEFINE_STANDARD_RTTI(PColgp_SeqNodeOfHSequenceOfDir)

protected:




private: 


  Handle(PColgp_SeqNodeOfHSequenceOfDir) MyPrevious;
  gp_Dir MyItem;
  Handle(PColgp_SeqNodeOfHSequenceOfDir) MyNext;


};







#endif // _PColgp_SeqNodeOfHSequenceOfDir_HeaderFile
