// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_TShape1_HeaderFile
#define _PTopoDS_TShape1_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PTopoDS_TShape1.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_PTopoDS_HArray1OfShape1.hxx>
#include <PTopoDS_Shape1.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Persistent.hxx>

// The Convex method can conflict with Convex defined as an integer
// in X.h
#ifdef Convex
#undef Convex
#endif

class PTopoDS_HArray1OfShape1;
class PTopoDS_Shape1;


class PTopoDS_TShape1 : public Standard_Persistent
{

public:

  
  //! Returns the type as a term of the ShapeEnum enum :
  //! VERTEX, EDGE, WIRE, FACE, ....
  Standard_EXPORT virtual   TopAbs_ShapeEnum ShapeType()  const = 0;
  
  //! Returns the modification flag.
  Standard_EXPORT   Standard_Boolean Modified()  const;
  
  //! Sets the modification flag.
  Standard_EXPORT   void Modified (const Standard_Boolean M) ;
  
  //! Returns the checked flag.
  Standard_EXPORT   Standard_Boolean Checked()  const;
  
  //! Sets the checked flag.
  Standard_EXPORT   void Checked (const Standard_Boolean C) ;
  
  //! Returns the orientability flag.
  Standard_EXPORT   Standard_Boolean Orientable()  const;
  
  //! Sets the orientability flag.
  Standard_EXPORT   void Orientable (const Standard_Boolean C) ;
  
  //! Returns the closedness flag.
  Standard_EXPORT   Standard_Boolean Closed()  const;
  
  //! Sets the closedness flag.
  Standard_EXPORT   void Closed (const Standard_Boolean C) ;
  
  //! Returns the infinity flag.
  Standard_EXPORT   Standard_Boolean Infinite()  const;
  
  //! Sets the infinity flag.
  Standard_EXPORT   void Infinite (const Standard_Boolean C) ;
  
  //! Returns the convexness flag.
  Standard_EXPORT   Standard_Boolean Convex()  const;
  
  //! Sets the convexness flag.
  Standard_EXPORT   void Convex (const Standard_Boolean C) ;
  
  //! Returns the hshape list
  Standard_EXPORT   Handle(PTopoDS_HArray1OfShape1) Shapes()  const;
  
  //! Returns the i th element of the Shape1 list
  Standard_EXPORT   PTopoDS_Shape1 Shapes (const Standard_Integer I)  const;
  
  //! Sets the Shape1 list
  Standard_EXPORT   void Shapes (const Handle(PTopoDS_HArray1OfShape1)& S) ;
  
  //! Sets the i th element of the hshape list
  Standard_EXPORT   void Shapes (const Standard_Integer I, const PTopoDS_Shape1& S) ;

PTopoDS_TShape1(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Handle(PTopoDS_HArray1OfShape1) _CSFDB_GetPTopoDS_TShape1myShapes() const { return myShapes; }
    void _CSFDB_SetPTopoDS_TShape1myShapes(const Handle(PTopoDS_HArray1OfShape1)& p) { myShapes = p; }
    Standard_Integer _CSFDB_GetPTopoDS_TShape1myFlags() const { return myFlags; }
    void _CSFDB_SetPTopoDS_TShape1myFlags(const Standard_Integer p) { myFlags = p; }



  DEFINE_STANDARD_RTTI(PTopoDS_TShape1)

protected:

  
  Standard_EXPORT PTopoDS_TShape1();



private: 


  Handle(PTopoDS_HArray1OfShape1) myShapes;
  Standard_Integer myFlags;


};







#endif // _PTopoDS_TShape1_HeaderFile
