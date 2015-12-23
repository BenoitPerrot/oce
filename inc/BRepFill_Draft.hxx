// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Draft_HeaderFile
#define _BRepFill_Draft_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Dir.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_BRepFill_DraftLaw.hxx>
#include <Handle_BRepFill_SectionLaw.hxx>
#include <Handle_TopTools_HArray2OfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopoDS/TopoDS_Shell.hxx>
#include <ModelingData/TopoDS/TopoDS_Wire.hxx>
#include <GeomAbs_Shape.hxx>
#include <BRepFill_TransitionStyle.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Handle_Geom_Surface.hxx>
class BRepFill_DraftLaw;
class BRepFill_SectionLaw;
class TopTools_HArray2OfShape;
class StdFail_NotDone;
class TopoDS_Shape;
class gp_Dir;
class Geom_Surface;
class TopoDS_Shell;
class TopTools_ListOfShape;
class Bnd_Box;



class BRepFill_Draft 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_Draft(const TopoDS_Shape& Shape, const gp_Dir& Dir, const Standard_Real Angle);
  
  Standard_EXPORT   void SetOptions (const BRepFill_TransitionStyle Style = BRepFill_Right, const Standard_Real AngleMin = 0.01, const Standard_Real AngleMax = 3.0) ;
  
  Standard_EXPORT   void SetDraft (const Standard_Boolean IsInternal = Standard_False) ;
  
  Standard_EXPORT   void Perform (const Standard_Real LengthMax) ;
  
  Standard_EXPORT   void Perform (const Handle(Geom_Surface)& Surface, const Standard_Boolean KeepInsideSurface = Standard_True) ;
  
  Standard_EXPORT   void Perform (const TopoDS_Shape& StopShape, const Standard_Boolean KeepOutSide = Standard_True) ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns the draft surface
  //! To have the complete shape
  //! you have to use the Shape() methode.
  Standard_EXPORT   TopoDS_Shell Shell()  const;
  
  //! Returns the  list   of shapes generated   from the
  //! shape <S>.
  Standard_EXPORT  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  Standard_EXPORT   TopoDS_Shape Shape()  const;




protected:





private:

  
  Standard_EXPORT   void Init (const Handle(Geom_Surface)& Surf, const Standard_Real Length, const Bnd_Box& Box) ;
  
  Standard_EXPORT   void BuildShell (const Handle(Geom_Surface)& Surf, const Standard_Boolean KeepOutSide = Standard_False) ;
  
  Standard_EXPORT   Standard_Boolean Fuse (const TopoDS_Shape& S, const Standard_Boolean KeepOutSide) ;
  
  Standard_EXPORT   Standard_Boolean Sewing() ;


  gp_Dir myDir;
  Standard_Real myAngle;
  Standard_Real angmin;
  Standard_Real angmax;
  Standard_Real myTol;
  Handle(BRepFill_DraftLaw) myLoc;
  Handle(BRepFill_SectionLaw) mySec;
  Handle(TopTools_HArray2OfShape) mySections;
  Handle(TopTools_HArray2OfShape) myFaces;
  TopTools_ListOfShape myGenerated;
  TopoDS_Shape myShape;
  TopoDS_Shape myTop;
  TopoDS_Shell myShell;
  TopoDS_Wire myWire;
  GeomAbs_Shape myCont;
  BRepFill_TransitionStyle myStyle;
  Standard_Boolean IsInternal;
  Standard_Boolean myDone;


};







#endif // _BRepFill_Draft_HeaderFile
