// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_SensitiveMesh_HeaderFile
#define _MeshVS_SensitiveMesh_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_MeshVS_SensitiveMesh.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Bnd_Box.hxx>
#include <Bnd_Box2d.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Handle_Select3D_SensitiveEntity.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <SelectBasics_PickArgs.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_Select3D_Projector.hxx>
class SelectBasics_EntityOwner;
class Select3D_SensitiveEntity;
class TopLoc_Location;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;
class Select3D_Projector;
class SelectBasics_ListOfBox2d;


//! This class provides custom mesh sensitive entity used in advanced mesh selection.
class MeshVS_SensitiveMesh : public Select3D_SensitiveEntity
{

public:

  
  Standard_EXPORT MeshVS_SensitiveMesh(const Handle(SelectBasics_EntityOwner)& theOwner, const Standard_Integer theMode = 0);
  
  Standard_EXPORT   Standard_Integer GetMode()  const;
  
  Standard_EXPORT virtual   Handle(Select3D_SensitiveEntity) GetConnected (const TopLoc_Location& aLocation) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const SelectBasics_PickArgs& thePickArgs, Standard_Real& theMatchDMin, Standard_Real& theMatchDepth) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol) ;
  
  Standard_EXPORT   void Project (const Handle(Select3D_Projector)& aProjector) ;
  
  Standard_EXPORT   void Areas (SelectBasics_ListOfBox2d& boxes) ;




  DEFINE_STANDARD_RTTI(MeshVS_SensitiveMesh)

protected:




private: 

  
  Standard_EXPORT   void ProjectOneCorner (const Handle(Select3D_Projector)& aProjector, const Standard_Real X, const Standard_Real Y, const Standard_Real Z) ;

  Standard_Integer myMode;
  Bnd_Box mybox;
  Bnd_Box2d mybox2d;


};







#endif // _MeshVS_SensitiveMesh_HeaderFile
