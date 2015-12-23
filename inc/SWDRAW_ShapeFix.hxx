// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SWDRAW_ShapeFix_HeaderFile
#define _SWDRAW_ShapeFix_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Viewer/Draw/Draw_Interpretor.hxx>


//! Contains commands to activate package ShapeFix
//! List of DRAW commands and corresponding functionalities:
//! edgesameparam - ShapeFix::SameParameter
//! settolerance  - ShapeFix_ShapeTolerance
//! stwire        - ShapeFix_Wire
//! reface        - ShapeFix_Face
//! repcurve      - ShapeFix_PCurves
class SWDRAW_ShapeFix 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Loads commands defined in ShapeFix
  Standard_EXPORT static   void InitCommands (Draw_Interpretor& theCommands) ;




protected:





private:





};







#endif // _SWDRAW_ShapeFix_HeaderFile
