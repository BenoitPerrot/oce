// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_Triangulation_HeaderFile
#define _AIS_Triangulation_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_AIS_Triangulation.hxx>

#include <Handle_Poly_Triangulation.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Visualization/AIS/AIS_InteractiveObject.hxx>
#include <Visualization/PrsMgr/PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_SelectMgr_Selection.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class Poly_Triangulation;
class TColStd_HArray1OfInteger;
class Prs3d_Presentation;
class SelectMgr_Selection;


//! Interactive object that draws data from  Poly_Triangulation, optionally with colors associated
//! with each triangulation vertex. For maximum efficiency colors are represented as 32-bit integers
//! instead of classic Quantity_Color values.
//! Interactive selection of triangles and vertices is not yet implemented.
class AIS_Triangulation : public AIS_InteractiveObject
{

public:

  
  //! Constructs the Triangulation display object
  Standard_EXPORT AIS_Triangulation(const Handle(Poly_Triangulation)& aTriangulation);
  

  //! Set the color for each node.
  //! Each 32-bit color is Alpha << 24 + Blue << 16 + Green << 8 + Red
  //! Order of color components is essential for further usage by OpenGL
  Standard_EXPORT   void SetColors (const Handle(TColStd_HArray1OfInteger)& aColor) ;
  

  //! Get the color for each node.
  //! Each 32-bit color is Alpha << 24 + Blue << 16 + Green << 8 + Red
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) GetColors()  const;
  
  Standard_EXPORT   void SetTriangulation (const Handle(Poly_Triangulation)& aTriangulation) ;
  
  //! Returns Poly_Triangulation .
  Standard_EXPORT   Handle(Poly_Triangulation) GetTriangulation()  const;




  DEFINE_STANDARD_RTTI(AIS_Triangulation)

protected:




private: 

  
  Standard_EXPORT virtual   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT virtual   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;
  
  //! Attenuates 32-bit color by a given attenuation factor (0...1):
  //! aColor = Alpha << 24 + Blue << 16 + Green << 8 + Red
  //! All color components are multiplied by aComponent, the result is then packed again as 32-bit integer.
  //! Color attenuation is applied to the vertex colors in order to have correct visual result
  //! after glColorMaterial(GL_AMBIENT_AND_DIFFUSE). Without it, colors look unnatural and flat.
  Standard_EXPORT   Standard_Integer AttenuateColor (const Standard_Integer aColor, const Standard_Real aComponent) ;

  Handle(Poly_Triangulation) myTriangulation;
  Handle(TColStd_HArray1OfInteger) myColor;
  Standard_Integer myFlagColor;
  Standard_Integer myNbNodes;
  Standard_Integer myNbTriangles;


};







#endif // _AIS_Triangulation_HeaderFile
