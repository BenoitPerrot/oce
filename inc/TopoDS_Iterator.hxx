// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_Iterator_HeaderFile
#define _TopoDS_Iterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>
#include <TopoDS_ListIteratorOfListOfShape.hxx>
#include <TopAbs_Orientation.hxx>
#include <TopLoc_Location.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopoDS_Shape;


//! Iterates on the underlying shape underlying a given
//! TopoDS_Shape object, providing access to its
//! component sub-shapes. Each component shape is
//! returned as a TopoDS_Shape with an orientation,
//! and a compound of the original values and the relative values.
class TopoDS_Iterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an empty Iterator.
    TopoDS_Iterator();
  
  //! Creates an Iterator on <S> sub-shapes.
  //! Note:
  //! - If cumOri is true, the function composes all
  //! sub-shapes with the orientation of S.
  //! - If cumLoc is true, the function multiplies all
  //! sub-shapes by the location of S, i.e. it applies to
  //! each sub-shape the transformation that is associated with S.
    TopoDS_Iterator(const TopoDS_Shape& S, const Standard_Boolean cumOri = Standard_True, const Standard_Boolean cumLoc = Standard_True);
  
  //! Initializes this iterator with shape S.
  //! Note:
  //! - If cumOri is true, the function composes all
  //! sub-shapes with the orientation of S.
  //! - If cumLoc is true, the function multiplies all
  //! sub-shapes by the location of S, i.e. it applies to
  //! each sub-shape the transformation that is associated with S.
  Standard_EXPORT   void Initialize (const TopoDS_Shape& S, const Standard_Boolean cumOri = Standard_True, const Standard_Boolean cumLoc = Standard_True) ;
  
  //! Returns true if there is another sub-shape in the
  //! shape which this iterator is scanning.
      Standard_Boolean More()  const;
  
  //! Moves on to the next sub-shape in the shape which
  //! this iterator is scanning.
  //! Exceptions
  //! Standard_NoMoreObject if there are no more sub-shapes in the shape.
  Standard_EXPORT   void Next() ;
  
  //! Returns the current sub-shape in the shape which
  //! this iterator is scanning.
  //! Exceptions
  //! Standard_NoSuchObject if there is no current sub-shape.
     const  TopoDS_Shape& Value()  const;




protected:





private:



  TopoDS_Shape myShape;
  TopoDS_ListIteratorOfListOfShape myShapes;
  TopAbs_Orientation myOrientation;
  TopLoc_Location myLocation;


};


#include <TopoDS_Iterator.lxx>





#endif // _TopoDS_Iterator_HeaderFile
