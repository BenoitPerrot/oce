// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_Domain_HeaderFile
#define _BRepGProp_Domain_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopExp/TopExp_Explorer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class TopoDS_Face;
class TopoDS_Edge;


//! Arc iterator. Returns only Forward and Reversed edges from
//! the face in an undigested order.
class BRepGProp_Domain 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
    BRepGProp_Domain();
  
  //! Constructor. Initializes the domain with the face.
    BRepGProp_Domain(const TopoDS_Face& F);
  
  //! Initializes the domain with the face.
      void Init (const TopoDS_Face& F) ;
  

  //! Returns True if there is another arc of curve in the list.
      Standard_Boolean More() ;
  
  //! Initializes the exploration with the face already set.
      void Init() ;
  
  //! Returns the current edge.
     const  TopoDS_Edge& Value() ;
  

  //! Sets the index of the arc iterator to the next arc of
  //! curve.
  Standard_EXPORT   void Next() ;




protected:





private:



  TopExp_Explorer myExplorer;


};


#include <BRepGProp_Domain.lxx>





#endif // _BRepGProp_Domain_HeaderFile
