// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntAna_Int3Pln_HeaderFile
#define _IntAna_Int3Pln_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <gp_Pnt.hxx>
class StdFail_NotDone;
class Standard_DomainError;
class gp_Pln;
class gp_Pnt;


//! Intersection between 3 planes. The algorithm searches
//! for an intersection point. If two of the planes are
//! parallel or identical, IsEmpty returns TRUE.
class IntAna_Int3Pln 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntAna_Int3Pln();
  
  //! Determination of the intersection point between
  //! 3 planes.
  Standard_EXPORT IntAna_Int3Pln(const gp_Pln& P1, const gp_Pln& P2, const gp_Pln& P3);
  
  //! Determination of the intersection point between
  //! 3 planes.
  Standard_EXPORT   void Perform (const gp_Pln& P1, const gp_Pln& P2, const gp_Pln& P3) ;
  
  //! Returns True if the computation was successful.
      Standard_Boolean IsDone()  const;
  
  //! Returns TRUE if there is no intersection POINT.
  //! If 2 planes are identical or parallel, IsEmpty
  //! will return TRUE.
      Standard_Boolean IsEmpty()  const;
  
  //! Returns the intersection point.
     const  gp_Pnt& Value()  const;




protected:





private:



  Standard_Boolean done;
  Standard_Boolean empt;
  gp_Pnt pnt;


};


#include <IntAna_Int3Pln.lxx>





#endif // _IntAna_Int3Pln_HeaderFile
