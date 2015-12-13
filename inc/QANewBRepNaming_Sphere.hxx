// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewBRepNaming_Sphere_HeaderFile
#define _QANewBRepNaming_Sphere_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <QANewBRepNaming_TopNaming.hxx>
#include <QANewBRepNaming_TypeOfPrimitive3D.hxx>
class TDF_Label;
class BRepPrimAPI_MakeSphere;


//! To load the Sphere results
class QANewBRepNaming_Sphere  : public QANewBRepNaming_TopNaming
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT QANewBRepNaming_Sphere();
  
  Standard_EXPORT QANewBRepNaming_Sphere(const TDF_Label& ResultLabel);
  
  Standard_EXPORT   void Init (const TDF_Label& ResultLabel) ;
  
  Standard_EXPORT   void Load (BRepPrimAPI_MakeSphere& mkSphere, const QANewBRepNaming_TypeOfPrimitive3D Type)  const;
  
  //! Returns the label of the bottom
  //! face of the Sphere.
  Standard_EXPORT   TDF_Label Bottom()  const;
  
  //! Returns the label of the top
  //! face of the Sphere.
  Standard_EXPORT   TDF_Label Top()  const;
  
  //! Returns the label of the lateral
  //! face of the Sphere.
  Standard_EXPORT   TDF_Label Lateral()  const;
  
  //! Returns the label of the first
  //! side of the Sphere.
  Standard_EXPORT   TDF_Label StartSide()  const;
  
  //! Returns the label of the second
  //! side of the Sphere.
  Standard_EXPORT   TDF_Label EndSide()  const;
  
  //! Returns the label of the meridian
  //! edges of the Sphere.
  Standard_EXPORT   TDF_Label Meridian()  const;
  
  //! Returns the label of the degenerated
  //! edges of the Sphere.
  Standard_EXPORT   TDF_Label Degenerated()  const;




protected:





private:





};







#endif // _QANewBRepNaming_Sphere_HeaderFile
