// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_TListNodeOfListOfEdge_HeaderFile
#define _MAT_TListNodeOfListOfEdge_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MAT_TListNodeOfListOfEdge.hxx>

#include <Handle_MAT_TListNodeOfListOfEdge.hxx>
#include <Handle_MAT_Edge.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_MAT_ListOfEdge.hxx>
class MAT_Edge;
class MAT_ListOfEdge;



class MAT_TListNodeOfListOfEdge : public MMgt_TShared
{

public:

  
    MAT_TListNodeOfListOfEdge();
  
    MAT_TListNodeOfListOfEdge(const Handle(MAT_Edge)& anitem);
  
      Handle(MAT_Edge) GetItem()  const;
  
      Handle(MAT_TListNodeOfListOfEdge) Next()  const;
  
      Handle(MAT_TListNodeOfListOfEdge) Previous()  const;
  
      void SetItem (const Handle(MAT_Edge)& anitem) ;
  
      void Next (const Handle(MAT_TListNodeOfListOfEdge)& atlistnode) ;
  
      void Previous (const Handle(MAT_TListNodeOfListOfEdge)& atlistnode) ;
  
  Standard_EXPORT   void Dummy()  const;




  DEFINE_STANDARD_RTTI(MAT_TListNodeOfListOfEdge)

protected:




private: 


  Handle(MAT_TListNodeOfListOfEdge) thenext;
  Handle(MAT_TListNodeOfListOfEdge) theprevious;
  Handle(MAT_Edge) theitem;


};

#define Item Handle(MAT_Edge)
#define Item_hxx <MAT_Edge.hxx>
#define MAT_TListNode MAT_TListNodeOfListOfEdge
#define MAT_TListNode_hxx <MAT_TListNodeOfListOfEdge.hxx>
#define Handle_MAT_TListNode Handle_MAT_TListNodeOfListOfEdge
#define MAT_TListNode_Type_() MAT_TListNodeOfListOfEdge_Type_()
#define MAT_TList MAT_ListOfEdge
#define MAT_TList_hxx <MAT_ListOfEdge.hxx>
#define Handle_MAT_TList Handle_MAT_ListOfEdge
#define MAT_TList_Type_() MAT_ListOfEdge_Type_()

#include <MAT_TListNode.lxx>

#undef Item
#undef Item_hxx
#undef MAT_TListNode
#undef MAT_TListNode_hxx
#undef Handle_MAT_TListNode
#undef MAT_TListNode_Type_
#undef MAT_TList
#undef MAT_TList_hxx
#undef Handle_MAT_TList
#undef MAT_TList_Type_




#endif // _MAT_TListNodeOfListOfEdge_HeaderFile
