// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepSweep_Iterator_HeaderFile
#define _BRepSweep_Iterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Iterator.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TopoDS_Shape;


//! This class provides iteration services required by
//! the Generating Line (TopoDS Shape) of a BRepSweep.
//! This   tool is  used  to   iterate  on the  direct
//! sub-shapes of a Shape.
class BRepSweep_Iterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepSweep_Iterator();
  
  //! Resest the Iterator on sub-shapes of <aShape>.
  Standard_EXPORT   void Init (const TopoDS_Shape& aShape) ;
  
  //! Returns True if there is a current sub-shape.
      Standard_Boolean More()  const;
  
  //! Moves to the next sub-shape.
  Standard_EXPORT   void Next() ;
  
  //! Returns the current sub-shape.
     const  TopoDS_Shape& Value()  const;
  
  //! Returns the orientation of the current sub-shape.
      TopAbs_Orientation Orientation()  const;




protected:





private:



  TopoDS_Iterator myIterator;


};


#include <BRepSweep_Iterator.lxx>





#endif // _BRepSweep_Iterator_HeaderFile
