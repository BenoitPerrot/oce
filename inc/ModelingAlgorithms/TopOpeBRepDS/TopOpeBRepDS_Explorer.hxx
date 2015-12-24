// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_Explorer_HeaderFile
#define _TopOpeBRepDS_Explorer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/TopOpeBRepDS/Handle_TopOpeBRepDS_HDataStructure.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopOpeBRepDS_HDataStructure;
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopoDS_Face;
class TopoDS_Edge;
class TopoDS_Vertex;



class TopOpeBRepDS_Explorer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_Explorer();
  
  Standard_EXPORT TopOpeBRepDS_Explorer(const Handle(TopOpeBRepDS_HDataStructure)& HDS, const TopAbs_ShapeEnum T = TopAbs_SHAPE, const Standard_Boolean findkeep = Standard_True);
  
  Standard_EXPORT   void Init (const Handle(TopOpeBRepDS_HDataStructure)& HDS, const TopAbs_ShapeEnum T = TopAbs_SHAPE, const Standard_Boolean findkeep = Standard_True) ;
  
  Standard_EXPORT   TopAbs_ShapeEnum Type()  const;
  
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT  const  TopoDS_Shape& Current()  const;
  
  Standard_EXPORT   Standard_Integer Index()  const;
  
  Standard_EXPORT  const  TopoDS_Face& Face()  const;
  
  Standard_EXPORT  const  TopoDS_Edge& Edge()  const;
  
  Standard_EXPORT  const  TopoDS_Vertex& Vertex()  const;




protected:





private:

  
  Standard_EXPORT   void Find() ;


  Handle(TopOpeBRepDS_HDataStructure) myHDS;
  TopAbs_ShapeEnum myT;
  Standard_Integer myI;
  Standard_Integer myN;
  Standard_Boolean myB;
  Standard_Boolean myFK;


};







#endif // _TopOpeBRepDS_Explorer_HeaderFile
