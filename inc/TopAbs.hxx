// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopAbs_HeaderFile
#define _TopAbs_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopAbs_Orientation.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <TopAbs_State.hxx>



class TopAbs 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Compose  the Orientation    <Or1>  and  <Or2>.    This
  //! composition is not symmetric (if  you switch <Or1> and
  //! <Or2> the result  is different). It assumes that <Or1>
  //! is the Orientation of a Shape S1 containing a Shape S2
  //! of Orientation   Or2.  The result    is the  cumulated
  //! orientation of S2 in S1.  The composition law is :
  //!
  //! \ Or2     FORWARD  REVERSED INTERNAL EXTERNAL
  //! Or1       -------------------------------------
  //! FORWARD   | FORWARD  REVERSED INTERNAL EXTERNAL
  //! |
  //! REVERSED  | REVERSED FORWARD  INTERNAL EXTERNAL
  //! |
  //! INTERNAL  | INTERNAL INTERNAL INTERNAL INTERNAL
  //! |
  //! EXTERNAL  | EXTERNAL EXTERNAL EXTERNAL EXTERNAL
  //! Note: The top corner in the table is the most important
  //! for the purposes of Open CASCADE topology and shape sharing.
  Standard_EXPORT static   TopAbs_Orientation Compose (const TopAbs_Orientation Or1, const TopAbs_Orientation Or2) ;
  
  //! xchanges the interior/exterior status of the two
  //! sides. This is what happens when the sense of
  //! direction is reversed. The following rules apply:
  //!
  //! FORWARD          REVERSED
  //! REVERSED         FORWARD
  //! INTERNAL         INTERNAL
  //! EXTERNAL         EXTERNAL
  //!
  //! Reverse exchange the material sides.
  Standard_EXPORT static   TopAbs_Orientation Reverse (const TopAbs_Orientation Or) ;
  
  //! Reverses the interior/exterior status of each side of
  //! the object. So, to take the complement of an object
  //! means to reverse the interior/exterior status of its
  //! boundary, i.e. inside becomes outside.
  //! The method returns the complementary orientation,
  //! following the rules in the table below:
  //! FORWARD          REVERSED
  //! REVERSED         FORWARD
  //! INTERNAL         EXTERNAL
  //! EXTERNAL         INTERNAL
  //!
  //! Complement  complements   the  material  side.  Inside
  //! becomes outside.
  Standard_EXPORT static   TopAbs_Orientation Complement (const TopAbs_Orientation Or) ;
  
  //! Prints the name  of Shape  <SEq>  as  a String  on the
  //! Stream <S> and returns <S>.
  Standard_EXPORT static   Standard_OStream& Print (const TopAbs_ShapeEnum SE, Standard_OStream& S) ;
  
  //! Prints the name of the Orientation <Or> as a String on
  //! the Stream <S> and returns <S>.
  Standard_EXPORT static   Standard_OStream& Print (const TopAbs_Orientation Or, Standard_OStream& S) ;
  
  //! Prints the name of the State <St> as a String on
  //! the Stream <S> and returns <S>.
  Standard_EXPORT static   Standard_OStream& Print (const TopAbs_State St, Standard_OStream& S) ;




protected:





private:





};







#endif // _TopAbs_HeaderFile
