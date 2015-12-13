// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccEnt_QualifiedCirc_HeaderFile
#define _GccEnt_QualifiedCirc_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <gp_Circ2d.hxx>
#include <GccEnt_Position.hxx>
#include <Foundation/Standard/Standard_Storable.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_PrimitiveTypes.hxx>
class gp_Circ2d;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(GccEnt_QualifiedCirc);

//! Creates a qualified 2d Circle.
//! A qualified 2D circle is a circle (gp_Circ2d circle) with a
//! qualifier which specifies whether the solution of a
//! construction algorithm using the qualified circle (as an argument):
//! -   encloses the circle, or
//! -   is enclosed by the circle, or
//! -   is built so that both the circle and it are external to   one another, or
//! -   is undefined (all solutions apply).
class GccEnt_QualifiedCirc 
{

public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a qualified circle by assigning the qualifier
  //! Qualifier to the circle Qualified. Qualifier may be:
  //! -   GccEnt_enclosing if the solution computed by a
  //! construction algorithm using the qualified circle
  //! encloses the circle, or
  //! -   GccEnt_enclosed if the solution is enclosed by the circle, or
  //! -   GccEnt_outside if both the solution and the circle
  //! are external to one another, or
  //! -   GccEnt_unqualified if all solutions apply.
  Standard_EXPORT GccEnt_QualifiedCirc(const gp_Circ2d& Qualified, const GccEnt_Position Qualifier);
  
  //! Returns a 2D circle to which the qualifier is assigned.
  Standard_EXPORT   gp_Circ2d Qualified()  const;
  
  //! Returns
  //! -   the qualifier of this qualified circle, if it is enclosing,
  //! enclosed or outside, or
  //! -   GccEnt_noqualifier if it is unqualified.
  Standard_EXPORT   GccEnt_Position Qualifier()  const;
  
  //! Returns true if the Circ2d is Unqualified and false in
  //! the other cases.
  Standard_EXPORT   Standard_Boolean IsUnqualified()  const;
  
  //! Returns true if the solution computed by a construction
  //! algorithm using this qualified circle encloses the circle.
  Standard_EXPORT   Standard_Boolean IsEnclosing()  const;
  
  //! Returns true if the solution computed by a construction
  //! algorithm using this qualified circle is enclosed by the circle.
  Standard_EXPORT   Standard_Boolean IsEnclosed()  const;
  
  //! Returns true if both the solution computed by a
  //! construction algorithm using this qualified circle and the
  //! circle are external to one another.
  Standard_EXPORT   Standard_Boolean IsOutside()  const;
GccEnt_QualifiedCirc( )
{
  
}
    const gp_Circ2d& _CSFDB_GetGccEnt_QualifiedCircTheQualified() const { return TheQualified; }
    GccEnt_Position _CSFDB_GetGccEnt_QualifiedCircTheQualifier() const { return TheQualifier; }
    void _CSFDB_SetGccEnt_QualifiedCircTheQualifier(const GccEnt_Position p) { TheQualifier = p; }



protected:




private: 


  gp_Circ2d TheQualified;
  GccEnt_Position TheQualifier;


};







#endif // _GccEnt_QualifiedCirc_HeaderFile
