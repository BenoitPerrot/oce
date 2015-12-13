// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPDS_Tools_HeaderFile
#define _BOPDS_Tools_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>



//! The class BOPDS_Tools contains
//! a set auxiliary static functions
//! of the package BOPDS
class BOPDS_Tools 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Converts the conmbination of two types
  //! of shape <theT1>,<theT2>
  //! to the one integer value, that is returned
    static   Standard_Integer TypeToInteger (const TopAbs_ShapeEnum theT1, const TopAbs_ShapeEnum theT2) ;
  

  //! Converts the type of shape <theT>,
  //! to integer value, that is returned
    static   Standard_Integer TypeToInteger (const TopAbs_ShapeEnum theT) ;
  

  //! Returns true if the type  <theT> correspond
  //! to a shape having boundary representation
    static   Standard_Boolean HasBRep (const TopAbs_ShapeEnum theT) ;
  

  //! Returns true if the type <theT> can be participant of
  //! an interference
    static   Standard_Boolean IsInterfering (const TopAbs_ShapeEnum theT) ;




protected:





private:





};


#include <BOPDS_Tools.lxx>





#endif // _BOPDS_Tools_HeaderFile
