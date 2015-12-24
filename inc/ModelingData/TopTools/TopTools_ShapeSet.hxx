// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_ShapeSet_HeaderFile
#define _TopTools_ShapeSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopTools/TopTools_IndexedMapOfShape.hxx>
#include <ModelingData/TopTools/TopTools_LocationSet.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Message/Handle_Message_ProgressIndicator.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Foundation/Standard/Standard_IStream.hxx>
#include <ModelingData/TopAbs/TopAbs_ShapeEnum.hxx>
class Message_ProgressIndicator;
class TopoDS_Shape;
class TopTools_LocationSet;
class TCollection_AsciiString;


//! A ShapeSets    contains  a  Shape    and all   its
//! sub-shapes and locations.  It  can be dump,  write
//! and read.
//!
//! Methods to handle the geometry can be redefined.
class TopTools_ShapeSet 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Builds an empty ShapeSet.
  Standard_EXPORT TopTools_ShapeSet();
  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~TopTools_ShapeSet(){Delete() ; }
  
  Standard_EXPORT   void SetFormatNb (const Standard_Integer theFormatNb) ;
  
  //! two formats available for the moment:
  //! First: does not write CurveOnSurface UV Points into the file
  //! on reading calls Check() method.
  //! Second: stores CurveOnSurface UV Points.
  //! On reading format is recognized from Version string.
  Standard_EXPORT   Standard_Integer FormatNb()  const;
  
  //! Clears the content of the set.  This method can be
  //! redefined.
  Standard_EXPORT virtual   void Clear() ;
  
  //! Stores <S> and its sub-shape. Returns the index of <S>.
  //! The method AddGeometry is called on each sub-shape.
  Standard_EXPORT   Standard_Integer Add (const TopoDS_Shape& S) ;
  
  //! Returns the sub-shape of index <I>.
  Standard_EXPORT  const  TopoDS_Shape& Shape (const Standard_Integer I)  const;
  
  //! Returns the index of <S>.
  Standard_EXPORT   Standard_Integer Index (const TopoDS_Shape& S)  const;
  
  Standard_EXPORT  const  TopTools_LocationSet& Locations()  const;
  
  Standard_EXPORT   TopTools_LocationSet& ChangeLocations() ;
  
  //! Dumps the number of objects in me on the stream <OS>.
  //! (Number of shapes of each type)
  Standard_EXPORT   Standard_OStream& DumpExtent (Standard_OStream& OS)  const;
  
  //! Dumps the number of objects in me in the string S
  //! (Number of shapes of each type)
  Standard_EXPORT   void DumpExtent (TCollection_AsciiString& S)  const;
  
  //! Dumps the content of me on the stream <OS>.
  //!
  //! Dumps the shapes from first to last.
  //! For each Shape
  //! Dump the type, the flags, the subshapes
  //! calls DumpGeometry(S)
  //!
  //! Dumps the geometry calling DumpGeometry.
  //!
  //! Dumps the locations.
  Standard_EXPORT virtual   void Dump (Standard_OStream& OS)  const;
  
  //! Writes the content of  me  on the stream <OS> in a
  //! format that can be read back by Read.
  //!
  //! Writes the locations.
  //!
  //! Writes the geometry calling WriteGeometry.
  //!
  //! Dumps the shapes from last to first.
  //! For each shape  :
  //! Write the type.
  //! calls WriteGeometry(S).
  //! Write the flags, the subshapes.
  Standard_EXPORT virtual   void Write (Standard_OStream& OS) ;
  
  //! Reads the content of me from the  stream  <IS>. me
  //! is first cleared.
  //!
  //! Reads the locations.
  //!
  //! Reads the geometry calling ReadGeometry.
  //!
  //! Reads the shapes.
  //! For each shape
  //! Reads the type.
  //! calls ReadGeometry(T,S).
  //! Reads the flag, the subshapes.
  Standard_EXPORT virtual   void Read (Standard_IStream& IS) ;
  
  //! Dumps   on  <OS>    the  shape  <S>.   Dumps   the
  //! orientation, the index of the TShape and the index
  //! of the Location.
  Standard_EXPORT   void Dump (const TopoDS_Shape& S, Standard_OStream& OS)  const;
  
  //! Writes   on  <OS>   the shape   <S>.    Writes the
  //! orientation, the index of the TShape and the index
  //! of the Location.
  Standard_EXPORT   void Write (const TopoDS_Shape& S, Standard_OStream& OS)  const;
  
  //! Reads from <IS> a shape and returns it in S.
  Standard_EXPORT   void Read (TopoDS_Shape& S, Standard_IStream& IS)  const;
  
  //! Stores the geometry of <S>.
  Standard_EXPORT virtual   void AddGeometry (const TopoDS_Shape& S) ;
  
  //! Dumps the geometry of me on the stream <OS>.
  Standard_EXPORT virtual   void DumpGeometry (Standard_OStream& OS)  const;
  
  //! Writes the geometry of  me  on the stream <OS> in a
  //! format that can be read back by Read.
  Standard_EXPORT virtual   void WriteGeometry (Standard_OStream& OS) ;
  
  //! Reads the geometry of me from the  stream  <IS>.
  Standard_EXPORT virtual   void ReadGeometry (Standard_IStream& IS) ;
  
  //! Dumps the geometry of <S> on the stream <OS>.
  Standard_EXPORT virtual   void DumpGeometry (const TopoDS_Shape& S, Standard_OStream& OS)  const;
  
  //! Writes the geometry of <S>  on the stream <OS> in a
  //! format that can be read back by Read.
  Standard_EXPORT virtual   void WriteGeometry (const TopoDS_Shape& S, Standard_OStream& OS)  const;
  
  //! Reads the geometry of a shape of type <T> from the
  //! stream <IS> and returns it in <S>.
  Standard_EXPORT virtual   void ReadGeometry (const TopAbs_ShapeEnum T, Standard_IStream& IS, TopoDS_Shape& S) ;
  
  //! Inserts  the shape <S2> in  the  shape <S1>.  This
  //! method must be   redefined  to  use   the  correct
  //! builder.
  Standard_EXPORT virtual   void AddShapes (TopoDS_Shape& S1, const TopoDS_Shape& S2) ;
  
  //! This method is   called after  each  new  completed
  //! shape. <T> is the  type. <S> is  the shape. In this
  //! class it does nothing, but it gives the opportunity
  //! in derived  classes to perform  extra  treatment on
  //! shapes.
  Standard_EXPORT virtual   void Check (const TopAbs_ShapeEnum T, TopoDS_Shape& S) ;
  
  //! Returns number of shapes read from file.
  Standard_EXPORT   Standard_Integer NbShapes()  const;
  
  Standard_EXPORT   void SetProgress (const Handle(Message_ProgressIndicator)& PR) ;
  
  Standard_EXPORT   Handle(Message_ProgressIndicator) GetProgress()  const;




protected:





private:

  
  //! Reads  from <IS>  a shape  and  returns  it in  S.
  //! <NbShapes> is the number of tshapes in the set.
  Standard_EXPORT   void Read (TopoDS_Shape& S, Standard_IStream& IS, const Standard_Integer NbShapes)  const;


  TopTools_IndexedMapOfShape myShapes;
  TopTools_LocationSet myLocations;
  Standard_Integer myFormatNb;
  Handle(Message_ProgressIndicator) myProgress;


};







#endif // _TopTools_ShapeSet_HeaderFile
