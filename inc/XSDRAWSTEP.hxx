// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWSTEP_HeaderFile
#define _XSDRAWSTEP_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Viewer/Draw/Draw_Interpretor.hxx>


//! XSDRAW for STEP AP214 and AP203
class XSDRAWSTEP 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void Init() ;
  
  //! Inits commands to access product data and to write shapes
  Standard_EXPORT static   void InitCommands (Draw_Interpretor& theCommands) ;




protected:





private:





};







#endif // _XSDRAWSTEP_HeaderFile
