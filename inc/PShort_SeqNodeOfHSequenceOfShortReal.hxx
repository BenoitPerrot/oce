// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PShort_SeqNodeOfHSequenceOfShortReal_HeaderFile
#define _PShort_SeqNodeOfHSequenceOfShortReal_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PShort_SeqNodeOfHSequenceOfShortReal.hxx>

#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <Handle_PShort_SeqNodeOfHSequenceOfShortReal.hxx>
#include <OCAF/PMMgt/PMMgt_PManaged.hxx>
#include <Handle_PShort_HSequenceOfShortReal.hxx>
class PShort_HSequenceOfShortReal;
class PShort_SeqExplorerOfHSequenceOfShortReal;


class PShort_SeqNodeOfHSequenceOfShortReal : public PMMgt_PManaged
{

public:

  
  Standard_EXPORT PShort_SeqNodeOfHSequenceOfShortReal(const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& TheLast, const Standard_ShortReal& TheItem);
  
  Standard_EXPORT PShort_SeqNodeOfHSequenceOfShortReal(const Standard_ShortReal& TheItem, const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& TheFirst);
  
  Standard_EXPORT PShort_SeqNodeOfHSequenceOfShortReal(const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& ThePrevious, const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& TheNext, const Standard_ShortReal& TheItem);
  
  Standard_EXPORT   Standard_ShortReal Value()  const;
  
  Standard_EXPORT   Handle(PShort_SeqNodeOfHSequenceOfShortReal) Next()  const;
  
  Standard_EXPORT   Handle(PShort_SeqNodeOfHSequenceOfShortReal) Previous()  const;
  
  Standard_EXPORT   void SetValue (const Standard_ShortReal& AnItem) ;
  
  Standard_EXPORT   void SetNext (const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& ANode) ;
  
  Standard_EXPORT   void SetPrevious (const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& ANode) ;

PShort_SeqNodeOfHSequenceOfShortReal( )
{
  
}
PShort_SeqNodeOfHSequenceOfShortReal(const Storage_stCONSTclCOM& a) : PMMgt_PManaged(a)
{
  
}
    Handle(PShort_SeqNodeOfHSequenceOfShortReal) _CSFDB_GetPShort_SeqNodeOfHSequenceOfShortRealMyPrevious() const { return MyPrevious; }
    void _CSFDB_SetPShort_SeqNodeOfHSequenceOfShortRealMyPrevious(const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& p) { MyPrevious = p; }
    Standard_ShortReal _CSFDB_GetPShort_SeqNodeOfHSequenceOfShortRealMyItem() const { return MyItem; }
    void _CSFDB_SetPShort_SeqNodeOfHSequenceOfShortRealMyItem(const Standard_ShortReal p) { MyItem = p; }
    Handle(PShort_SeqNodeOfHSequenceOfShortReal) _CSFDB_GetPShort_SeqNodeOfHSequenceOfShortRealMyNext() const { return MyNext; }
    void _CSFDB_SetPShort_SeqNodeOfHSequenceOfShortRealMyNext(const Handle(PShort_SeqNodeOfHSequenceOfShortReal)& p) { MyNext = p; }

friend class PShort_HSequenceOfShortReal;
friend class PShort_SeqExplorerOfHSequenceOfShortReal;


  DEFINE_STANDARD_RTTI(PShort_SeqNodeOfHSequenceOfShortReal)

protected:




private: 


  Handle(PShort_SeqNodeOfHSequenceOfShortReal) MyPrevious;
  Standard_ShortReal MyItem;
  Handle(PShort_SeqNodeOfHSequenceOfShortReal) MyNext;


};







#endif // _PShort_SeqNodeOfHSequenceOfShortReal_HeaderFile
