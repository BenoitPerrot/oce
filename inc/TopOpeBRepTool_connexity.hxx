// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_connexity_HeaderFile
#define _TopOpeBRepTool_connexity_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>
#include <TopTools_Array1OfListOfShape.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopoDS_Shape;
class TopTools_ListOfShape;



class TopOpeBRepTool_connexity 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepTool_connexity();
  
  Standard_EXPORT TopOpeBRepTool_connexity(const TopoDS_Shape& Key);
  
  Standard_EXPORT   void SetKey (const TopoDS_Shape& Key) ;
  
  Standard_EXPORT  const  TopoDS_Shape& Key()  const;
  
  Standard_EXPORT   Standard_Integer Item (const Standard_Integer OriKey, TopTools_ListOfShape& Item)  const;
  
  Standard_EXPORT   Standard_Integer AllItems (TopTools_ListOfShape& Item)  const;
  
  Standard_EXPORT   void AddItem (const Standard_Integer OriKey, const TopTools_ListOfShape& Item) ;
  
  Standard_EXPORT   void AddItem (const Standard_Integer OriKey, const TopoDS_Shape& Item) ;
  
  Standard_EXPORT   Standard_Boolean RemoveItem (const Standard_Integer OriKey, const TopoDS_Shape& Item) ;
  
  Standard_EXPORT   Standard_Boolean RemoveItem (const TopoDS_Shape& Item) ;
  
  Standard_EXPORT   TopTools_ListOfShape& ChangeItem (const Standard_Integer OriKey) ;
  
  Standard_EXPORT   Standard_Boolean IsMultiple()  const;
  
  Standard_EXPORT   Standard_Boolean IsFaulty()  const;
  
  Standard_EXPORT   Standard_Integer IsInternal (TopTools_ListOfShape& Item)  const;




protected:





private:



  TopoDS_Shape theKey;
  TopTools_Array1OfListOfShape theItems;


};







#endif // _TopOpeBRepTool_connexity_HeaderFile
