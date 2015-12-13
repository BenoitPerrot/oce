// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_DraftAngle_HeaderFile
#define _BRepOffsetAPI_DraftAngle_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopTools_ListOfShape.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Draft_ErrorStatus.hxx>
class StdFail_NotDone;
class Standard_NullObject;
class Standard_NoSuchObject;
class Standard_ConstructionError;
class TopoDS_Shape;
class TopoDS_Face;
class gp_Dir;
class gp_Pln;
class TopTools_ListOfShape;


//! Taper-adding transformations on a shape.
//! The resulting shape is constructed by defining one face
//! to be tapered after another one, as well as the
//! geometric properties of their tapered transformation.
//! Each tapered transformation is propagated along the
//! series of faces which are tangential to one another and
//! which contains the face to be tapered.
//! This algorithm is useful in the construction of molds or
//! dies. It facilitates the removal of the article being produced.
//! A DraftAngle object provides a framework for:
//! - initializing the construction algorithm with a given shape,
//! - acquiring the data characterizing the faces to be tapered,
//! - implementing the construction algorithm, and
//! - consulting the results.
//! Warning
//! - This algorithm treats planar, cylindrical and conical faces.
//! - Do not use shapes, which with a draft angle added to
//! a face would modify the topology. This would, for
//! example, involve creation of new vertices, edges or
//! faces, or suppression of existing vertices, edges or faces.
//! - Any face, which is continuous in tangency with the
//! face to be tapered, will also be tapered. These
//! connected faces must also respect the above criteria.
class BRepOffsetAPI_DraftAngle  : public BRepBuilderAPI_ModifyShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs an empty algorithm to perform
  //! taper-adding transformations on faces of a shape.
  //! Use the Init function to define the shape to be tapered.
  Standard_EXPORT BRepOffsetAPI_DraftAngle();
  
  //! Initializes an algorithm to perform taper-adding
  //! transformations on faces of the shape S.
  //! S will be referred to as the initial shape of the algorithm.
  Standard_EXPORT BRepOffsetAPI_DraftAngle(const TopoDS_Shape& S);
  
  //! Cancels the results of all taper-adding transformations
  //! performed by this algorithm on the initial shape. These
  //! results will have been defined by successive calls to the function Add.
  Standard_EXPORT   void Clear() ;
  
  //! Initializes, or reinitializes this taper-adding algorithm with the shape S.
  //! S will be referred to as the initial shape of this algorithm.
  Standard_EXPORT   void Init (const TopoDS_Shape& S) ;
  
  //! Adds the face F, the direction
  //! Direction, the angle Angle, the plane NeutralPlane, and the flag
  //! Flag to the framework created at construction time, and with this
  //! data, defines the taper-adding transformation.
  //! F is a face, which belongs to the initial shape of this algorithm or
  //! to the shape loaded by the function Init.
  //! Only planar, cylindrical or conical faces can be tapered:
  //! - If the face F is planar, it is tapered by inclining it
  //! through the angle Angle about the line of intersection between the
  //! plane NeutralPlane and F.
  //! Direction indicates the side of NeutralPlane from which matter is
  //! removed if Angle is positive or added if Angle is negative.
  //! - If F is cylindrical or conical, it is transformed in the
  //! same way on a single face, resulting in a conical face if F
  //! is cylindrical, and a conical or cylindrical face if it is already conical.
  //! The taper-adding transformation is propagated from the face F along
  //! the series of planar, cylindrical or conical faces containing F,
  //! which are tangential to one another.
  //! Use the function AddDone to check if this taper-adding transformation is successful.
  //! Warning
  //! Nothing is done if:
  //! - the face F does not belong to the initial shape of this algorithm, or
  //! - the face F is not planar, cylindrical or conical.
  //! Exceptions
  //! - Standard_NullObject if the initial shape is not
  //! defined, i.e. if this algorithm has not been initialized
  //! with the non-empty constructor or the Init function.
  //! - Standard_ConstructionError if the previous call to
  //! Add has failed. The function AddDone ought to have
  //! been used to check for this, and the function Remove
  //! to cancel the results of the unsuccessful taper-adding
  //! transformation and to retrieve the previous shape.
  Standard_EXPORT   void Add (const TopoDS_Face& F, const gp_Dir& Direction, const Standard_Real Angle, const gp_Pln& NeutralPlane, const Standard_Boolean Flag = Standard_True) ;
  
  //! Returns true if the previous taper-adding
  //! transformation performed by this algorithm in the last
  //! call to Add, was successful.
  //! If AddDone returns false:
  //! - the function ProblematicShape returns the face
  //! on which the error occurred,
  //! - the function Remove has to be used to cancel the
  //! results of the unsuccessful taper-adding
  //! transformation and to retrieve the previous shape.
  //! Exceptions
  //! Standard_NullObject if the initial shape has not
  //! been defined, i.e. if this algorithm has not been
  //! initialized with the non-empty constructor or the .Init function.
  Standard_EXPORT   Standard_Boolean AddDone()  const;
  
  //! Cancels the taper-adding transformation previously
  //! performed by this algorithm on the face F and the
  //! series of tangential faces which contain F, and retrieves
  //! the shape before the last taper-adding transformation.
  //! Warning
  //! You will have to use this function if the previous call to
  //! Add fails. Use the function AddDone to check it.
  //! Exceptions
  //! - Standard_NullObject if the initial shape has not
  //! been defined, i.e. if this algorithm has not been
  //! initialized with the non-empty constructor or the Init function.
  //! - Standard_NoSuchObject if F has not been added
  //! or has already been removed.
  Standard_EXPORT   void Remove (const TopoDS_Face& F) ;
  
  //! Returns the shape on which an error occurred after an
  //! unsuccessful call to Add or when IsDone returns false.
  //! Exceptions
  //! Standard_NullObject if the initial shape has not been
  //! defined, i.e. if this algorithm has not been initialized with
  //! the non-empty constructor or the Init function.
  Standard_EXPORT  const  TopoDS_Shape& ProblematicShape()  const;
  
  //! Returns an error  status when an error has occured
  //! (Face,   Edge    or Vertex  recomputaion problem).
  //! Otherwise returns Draft_NoError. The method may be
  //! called if AddDone  returns Standard_False, or when
  //! IsDone returns Standard_False.
  Standard_EXPORT   Draft_ErrorStatus Status()  const;
  
  //! Returns all  the  faces   which  have been   added
  //! together with the face <F>.
  Standard_EXPORT  const  TopTools_ListOfShape& ConnectedFaces (const TopoDS_Face& F)  const;
  
  //! Returns all the faces  on which a modification has
  //! been given.
  Standard_EXPORT  const  TopTools_ListOfShape& ModifiedFaces()  const;
  
  //! Builds the resulting shape (redefined from MakeShape).
  Standard_EXPORT virtual   void Build() ;
  
  Standard_EXPORT   void CorrectWires() ;
  
  //! Returns the  list   of shapes generated   from the
  //! shape <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  //! Returns the list  of shapes modified from the shape
  //! <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& S) ;




protected:





private:



  TopTools_ListOfShape myModifiedShapes;


};







#endif // _BRepOffsetAPI_DraftAngle_HeaderFile
