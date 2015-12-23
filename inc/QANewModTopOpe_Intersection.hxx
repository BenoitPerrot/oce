// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewModTopOpe_Intersection_HeaderFile
#define _QANewModTopOpe_Intersection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>
#include <ModelingAlgorithms/BRepAlgoAPI/BRepAlgoAPI_BooleanOperation.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopoDS_Shape;
class TopTools_ListOfShape;


//! provides  intersection  of  two  shapes;
class QANewModTopOpe_Intersection  : public BRepAlgoAPI_BooleanOperation
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT QANewModTopOpe_Intersection(const TopoDS_Shape& theObject1, const TopoDS_Shape& theObject2);
  
  //! Returns the list  of shapes generated from the shape <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& theS) ;
  
  //! Returns true if there is at least one generated shape.
  //! For use in BRepNaming.
  Standard_EXPORT virtual   Standard_Boolean HasGenerated()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsDeleted (const TopoDS_Shape& aS) ;
  
  //! Returns true if there is at least one deleted shape.
  //! For use in BRepNaming.
  Standard_EXPORT virtual   Standard_Boolean HasDeleted()  const;




protected:





private:



  TopTools_DataMapOfShapeListOfShape myMapGener;


};







#endif // _QANewModTopOpe_Intersection_HeaderFile
