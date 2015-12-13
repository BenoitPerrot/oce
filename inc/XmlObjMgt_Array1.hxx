// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlObjMgt_Array1_HeaderFile
#define _XmlObjMgt_Array1_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <XmlObjMgt_Element.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <XmlObjMgt_DOMString.hxx>


//! The class Array1 represents unidimensionnal
//! array of fixed size known at run time.
//! The range of the index is user defined.
//! Warning: Programs clients of such class must be independant
//! of the range of the first element. Then, a C++ for
//! loop must be written like this
//! for (i = A->Lower(); i <= A->Upper(); i++)
class XmlObjMgt_Array1 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Create an array of lower bound <Low> and
  //! upper bound <Up>. Range error is raised
  //! when <Up> is less than <Low>.
  Standard_EXPORT XmlObjMgt_Array1(const Standard_Integer Low, const Standard_Integer Up);
  
  //! for restoration from DOM_Element which is child of
  //! theParent:
  //! <theParent ...>
  //! <theName ...>
  Standard_EXPORT XmlObjMgt_Array1(const XmlObjMgt_Element& theParent, const XmlObjMgt_DOMString& theName);
  
  //! Create DOM_Element representing the array, under 'theParent'
  Standard_EXPORT   void CreateArrayElement (XmlObjMgt_Element& theParent, const XmlObjMgt_DOMString& theName) ;
  
  //! Returns the DOM element of <me>.
     const  XmlObjMgt_Element& Element()  const;
  
  //! Returns the number of elements of <me>.
      Standard_Integer Length()  const;
  
  //! Returns the lower bound.
      Standard_Integer Lower()  const;
  
  //! Returns the upper bound.
      Standard_Integer Upper()  const;
  
  //! Set the <Index>th element of the array to <Value>.
  Standard_EXPORT   void SetValue (const Standard_Integer Index, XmlObjMgt_Element& Value) ;
  
  //! Returns the value of <Index>th element of the array.
  Standard_EXPORT   XmlObjMgt_Element Value (const Standard_Integer Index)  const;




protected:





private:



  XmlObjMgt_Element myElement;
  Standard_Integer myFirst;
  Standard_Integer myLast;


};


#include <XmlObjMgt_Array1.lxx>





#endif // _XmlObjMgt_Array1_HeaderFile
