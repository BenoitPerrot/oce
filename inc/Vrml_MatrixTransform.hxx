// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_MatrixTransform_HeaderFile
#define _Vrml_MatrixTransform_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <gp_Trsf.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class gp_Trsf;


//! defines a MatrixTransform node of VRML specifying matrix and transform
//! properties.
//! This  node  defines  3D  transformation  with  a  4  by  4  matrix.
//! By  default  :
//! a11=1  a12=0  a13=0  a14=0
//! a21=0  a22=1  a23=0  a24=0
//! a31=0  a32=0  a33=1  a34=0
//! a41=0  a42=0  a43=0  a44=1
//! It  is  written  to  the  file  in  row-major  order  as  16  Real numbers
//! separated  by  whitespace.  For  example ,  matrix  expressing  a  translation
//! of  7.3  units  along  the  X  axis  is  written  as:
//! 1  0  0  0   0  1  0  0   0  0  1  0   7.3 0  0  1
class Vrml_MatrixTransform 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_MatrixTransform();
  
  Standard_EXPORT Vrml_MatrixTransform(const gp_Trsf& aMatrix);
  
  Standard_EXPORT   void SetMatrix (const gp_Trsf& aMatrix) ;
  
  Standard_EXPORT   gp_Trsf Matrix()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  gp_Trsf myMatrix;


};







#endif // _Vrml_MatrixTransform_HeaderFile
