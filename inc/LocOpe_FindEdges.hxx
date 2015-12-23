// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_FindEdges_HeaderFile
#define _LocOpe_FindEdges_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListIteratorOfListOfShape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_ConstructionError;
class Standard_NoSuchObject;
class Standard_NoMoreObject;
class TopoDS_Shape;
class TopoDS_Edge;



class LocOpe_FindEdges 
{
public:

  DEFINE_STANDARD_ALLOC

  
    LocOpe_FindEdges();
  
    LocOpe_FindEdges(const TopoDS_Shape& FFrom, const TopoDS_Shape& FTo);
  
  Standard_EXPORT   void Set (const TopoDS_Shape& FFrom, const TopoDS_Shape& FTo) ;
  
      void InitIterator() ;
  
      Standard_Boolean More()  const;
  
     const  TopoDS_Edge& EdgeFrom()  const;
  
     const  TopoDS_Edge& EdgeTo()  const;
  
      void Next() ;




protected:





private:



  TopoDS_Shape myFFrom;
  TopoDS_Shape myFTo;
  TopTools_ListOfShape myLFrom;
  TopTools_ListOfShape myLTo;
  TopTools_ListIteratorOfListOfShape myItFrom;
  TopTools_ListIteratorOfListOfShape myItTo;


};


#include <LocOpe_FindEdges.lxx>





#endif // _LocOpe_FindEdges_HeaderFile
