// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_ShapeExplorer_HeaderFile
#define _TopOpeBRepTool_ShapeExplorer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopExp_Explorer.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TopoDS_Shape;



class TopOpeBRepTool_ShapeExplorer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an empty explorer, becomes usefull after Init.
  Standard_EXPORT TopOpeBRepTool_ShapeExplorer();
  
  //! Creates an Explorer on the Shape <S>.
  //!
  //! <ToFind> is the type of shapes to search.
  //! TopAbs_VERTEX, TopAbs_EDGE, ...
  //!
  //! <ToAvoid>   is the type   of shape to  skip in the
  //! exploration.   If   <ToAvoid>  is  equal  or  less
  //! complex than <ToFind> or if  <ToAVoid> is SHAPE it
  //! has no effect on the exploration.
  Standard_EXPORT TopOpeBRepTool_ShapeExplorer(const TopoDS_Shape& S, const TopAbs_ShapeEnum ToFind, const TopAbs_ShapeEnum ToAvoid = TopAbs_SHAPE);
  
  Standard_EXPORT   void Init (const TopoDS_Shape& S, const TopAbs_ShapeEnum ToFind, const TopAbs_ShapeEnum ToAvoid = TopAbs_SHAPE) ;
  
  //! Returns  True if  there are   more  shapes in  the
  //! exploration.
  Standard_EXPORT   Standard_Boolean More()  const;
  
  //! Moves to the next Shape in the exploration.
  Standard_EXPORT   void Next() ;
  
  //! Returns the current shape in the exploration.
  Standard_EXPORT  const  TopoDS_Shape& Current()  const;
  
  Standard_EXPORT   Standard_Integer NbShapes()  const;
  
  Standard_EXPORT   Standard_Integer Index()  const;
  
  Standard_EXPORT   Standard_OStream& DumpCurrent (Standard_OStream& OS)  const;




protected:





private:



  TopExp_Explorer myExplorer;
  Standard_Integer myIndex;
  Standard_Integer myNbShapes;


};







#endif // _TopOpeBRepTool_ShapeExplorer_HeaderFile
