// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_SeqNodeOfHSequenceOfVec_HeaderFile
#define _PColgp_SeqNodeOfHSequenceOfVec_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PColgp_SeqNodeOfHSequenceOfVec.hxx>

#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Handle_PColgp_SeqNodeOfHSequenceOfVec.hxx>
#include <OCAF/PMMgt/PMMgt_PManaged.hxx>
#include <Handle_PColgp_HSequenceOfVec.hxx>
class PColgp_HSequenceOfVec;
class PColgp_SeqExplorerOfHSequenceOfVec;
class gp_Vec;


class PColgp_SeqNodeOfHSequenceOfVec : public PMMgt_PManaged
{

public:

  
  Standard_EXPORT PColgp_SeqNodeOfHSequenceOfVec(const Handle(PColgp_SeqNodeOfHSequenceOfVec)& TheLast, const gp_Vec& TheItem);
  
  Standard_EXPORT PColgp_SeqNodeOfHSequenceOfVec(const gp_Vec& TheItem, const Handle(PColgp_SeqNodeOfHSequenceOfVec)& TheFirst);
  
  Standard_EXPORT PColgp_SeqNodeOfHSequenceOfVec(const Handle(PColgp_SeqNodeOfHSequenceOfVec)& ThePrevious, const Handle(PColgp_SeqNodeOfHSequenceOfVec)& TheNext, const gp_Vec& TheItem);
  
  Standard_EXPORT   gp_Vec Value()  const;
  
  Standard_EXPORT   Handle(PColgp_SeqNodeOfHSequenceOfVec) Next()  const;
  
  Standard_EXPORT   Handle(PColgp_SeqNodeOfHSequenceOfVec) Previous()  const;
  
  Standard_EXPORT   void SetValue (const gp_Vec& AnItem) ;
  
  Standard_EXPORT   void SetNext (const Handle(PColgp_SeqNodeOfHSequenceOfVec)& ANode) ;
  
  Standard_EXPORT   void SetPrevious (const Handle(PColgp_SeqNodeOfHSequenceOfVec)& ANode) ;

PColgp_SeqNodeOfHSequenceOfVec( )
{
  
}
PColgp_SeqNodeOfHSequenceOfVec(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(PColgp_SeqNodeOfHSequenceOfVec) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfVecMyPrevious() const { return MyPrevious; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfVecMyPrevious(const Handle(PColgp_SeqNodeOfHSequenceOfVec)& p) { MyPrevious = p; }
    const gp_Vec& _CSFDB_GetPColgp_SeqNodeOfHSequenceOfVecMyItem() const { return MyItem; }
    Handle(PColgp_SeqNodeOfHSequenceOfVec) _CSFDB_GetPColgp_SeqNodeOfHSequenceOfVecMyNext() const { return MyNext; }
    void _CSFDB_SetPColgp_SeqNodeOfHSequenceOfVecMyNext(const Handle(PColgp_SeqNodeOfHSequenceOfVec)& p) { MyNext = p; }

friend class PColgp_HSequenceOfVec;
friend class PColgp_SeqExplorerOfHSequenceOfVec;


  DEFINE_STANDARD_RTTI(PColgp_SeqNodeOfHSequenceOfVec)

protected:




private: 


  Handle(PColgp_SeqNodeOfHSequenceOfVec) MyPrevious;
  gp_Vec MyItem;
  Handle(PColgp_SeqNodeOfHSequenceOfVec) MyNext;


};







#endif // _PColgp_SeqNodeOfHSequenceOfVec_HeaderFile
