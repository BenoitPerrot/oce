// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_AspectMarker_HeaderFile
#define _Aspect_AspectMarker_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Aspect_AspectMarker.hxx>

#include <Foundation/Quantity/Quantity_Color.hxx>
#include <Aspect_TypeOfMarker.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class Aspect_AspectMarkerDefinitionError;
class Quantity_Color;


//! This class allows the definition of a group
//! of attributes for the primitive MARKER.
//! the attributes are:
//! * Colour
//! * Type
//! * Scale factor
//! When any value of the group is modified
//! all graphic objects using the group are modified
class Aspect_AspectMarker : public MMgt_TShared
{

public:

  
  //! Modifies the colour of <me>.
  Standard_EXPORT   void SetColor (const Quantity_Color& AColor) ;
  
  //! Modifies the scale factor of <me>.
  //! Marker type Aspect_TOM_POINT is not affected
  //! by the marker size scale factor. It is always
  //! the smallest displayable dot.
  //! Warning: Raises AspectMarkerDefinitionError if the
  //! scale is a negative value.
  Standard_EXPORT   void SetScale (const Standard_Real AScale) ;
  
  //! Modifies the type of marker <me>.
  Standard_EXPORT   void SetType (const Aspect_TypeOfMarker AType) ;
  
  //! Returns the current values of the group <me>.
  Standard_EXPORT   void Values (Quantity_Color& AColor, Aspect_TypeOfMarker& AType, Standard_Real& AScale)  const;




  DEFINE_STANDARD_RTTI(Aspect_AspectMarker)

protected:

  
  //! Initialise the constructor for Graphic3d_AspectMarker3d.
  //!
  //! defaults values :
  //!
  //! Color	= Quantity_NOC_YELLOW;
  //! Type	= Aspect_TOM_X;
  //! Scale	= 1.0;
  Standard_EXPORT Aspect_AspectMarker();
  
  //! Initialise the values for the
  //! constructor of Graphic3d_AspectMarker3d.
  //! Warning: Raises AspectMarkerDefinitionError if the
  //! scale is a negative value.
  Standard_EXPORT Aspect_AspectMarker(const Quantity_Color& AColor, const Aspect_TypeOfMarker AType, const Standard_Real AScale);



private: 


  Quantity_Color MyColor;
  Aspect_TypeOfMarker MyType;
  Standard_Real MyScale;


};







#endif // _Aspect_AspectMarker_HeaderFile
