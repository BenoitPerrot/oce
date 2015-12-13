// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewBRepNaming_Gluing_HeaderFile
#define _QANewBRepNaming_Gluing_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>
#include <TopoDS_Shape.hxx>
#include <TDF_LabelMap.hxx>
#include <QANewBRepNaming_TopNaming.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NullObject;
class TDF_Label;
class QANewModTopOpe_Glue;
class TopoDS_Shape;
class TDF_LabelMap;
class TopTools_DataMapOfShapeInteger;


//! Loads a result of Gluing operation in  Data Framework
class QANewBRepNaming_Gluing  : public QANewBRepNaming_TopNaming
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT QANewBRepNaming_Gluing();
  
  Standard_EXPORT QANewBRepNaming_Gluing(const TDF_Label& theResultLabel);
  
  Standard_EXPORT   void Init (const TDF_Label& theResultLabel) ;
  
  //! Loads a Gluing in a data framework
  Standard_EXPORT   void Load (QANewModTopOpe_Glue& theMkGluing) ;
  
  Standard_EXPORT   TDF_Label Content()  const;
  
  Standard_EXPORT   void SetContext (const TopoDS_Shape& theObject, const TopoDS_Shape& theTool) ;
  
  Standard_EXPORT   void SetLog (const TDF_LabelMap& theLog) ;




protected:





private:

  
  //! If the shape is a compound the method
  //! returns the underlying shape type.
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType (const TopoDS_Shape& theShape)  const;
  
  //! If the shape is a compound the method
  //! returns the underlying shape.
  Standard_EXPORT   TopoDS_Shape GetShape (const TopoDS_Shape& theShape)  const;
  
  //! A default implementation for naming of modified shapes of the operation
  Standard_EXPORT   void LoadModifiedShapes (QANewModTopOpe_Glue& theMakeShape)  const;
  
  //! A default implementation for naming of modified shapes of the operation
  Standard_EXPORT   void LoadDeletedShapes (QANewModTopOpe_Glue& theMakeShape)  const;
  
  //! Loads the content of the result.
  Standard_EXPORT   void LoadContent (QANewModTopOpe_Glue& theMakeShape)  const;
  
  //! Loads the result.
  Standard_EXPORT   void LoadResult (QANewModTopOpe_Glue& theMakeShape)  const;
  
  //! Returns true if the result is not the same as the object shape.
  Standard_EXPORT   Standard_Boolean IsResultChanged (QANewModTopOpe_Glue& theMakeShape)  const;
  
  //! Loads the deletion of the degenerated edges.
  Standard_EXPORT   void LoadSectionEdges (QANewModTopOpe_Glue& theMakeShape)  const;
  
  Standard_EXPORT   void AddToTheUnique (const TopoDS_Shape& theUnique, const TopoDS_Shape& theIdentifier) ;
  
  //! Reset myShared map - shapes, which are modified by both object and tool.
  Standard_EXPORT   void RecomputeUnique (QANewModTopOpe_Glue& theMakeShape) ;
  
  Standard_EXPORT   void LoadSourceShapes (TopTools_DataMapOfShapeInteger& theSources)  const;
  
  //! A default implementation for naming of generated  shapes of the operation
  Standard_EXPORT   void LoadUniqueShapes (QANewModTopOpe_Glue& theMakeShape, const TopTools_DataMapOfShapeInteger& theSources) ;


  TopTools_IndexedDataMapOfShapeListOfShape myUnique;
  TopoDS_Shape myContext;
  TDF_LabelMap myLog;


};







#endif // _QANewBRepNaming_Gluing_HeaderFile
