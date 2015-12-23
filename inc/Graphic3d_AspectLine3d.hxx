// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_AspectLine3d_HeaderFile
#define _Graphic3d_AspectLine3d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Graphic3d_AspectLine3d.hxx>

#include <Graphic3d_ShaderProgram_Handle.hxx>
#include <Visualization/Aspect/Aspect_AspectLine.hxx>
#include <Visualization/Aspect/Aspect_TypeOfLine.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Quantity_Color;


//! Creates and updates a group of attributes
//! for 3d line primitives. This group contains the
//! colour, the type of line, and its thickness.
class Graphic3d_AspectLine3d : public Aspect_AspectLine
{

public:

  
  //! Creates a context table for line primitives
  //! defined with the following default values:
  //!
  //! Colour	: NOC_YELLOW
  //! Line type	: TOL_SOLID
  //! Width	: 1.0
  Standard_EXPORT Graphic3d_AspectLine3d();
  
  //! Creates a context table for line primitives
  //! defined with the specified values.
  //! Warning: <AWidth> is the "linewidth scale factor".
  //! The nominal line width is 1 pixel. The width of
  //! the line is determined by applying the linewidth scale
  //! factor to this nominal line width.
  //! The supported linewidths vary by 1-pixel units.
  Standard_EXPORT Graphic3d_AspectLine3d(const Quantity_Color& AColor, const Aspect_TypeOfLine AType, const Standard_Real AWidth);
  
  //! Sets up OpenGL/GLSL shader program.
  Standard_EXPORT   void SetShaderProgram (const Graphic3d_ShaderProgram_Handle& theProgram) ;
  
  Standard_EXPORT  const  Graphic3d_ShaderProgram_Handle& ShaderProgram()  const;




  DEFINE_STANDARD_RTTI(Graphic3d_AspectLine3d)

protected:




private: 


  Graphic3d_ShaderProgram_Handle MyShaderProgram;


};







#endif // _Graphic3d_AspectLine3d_HeaderFile
