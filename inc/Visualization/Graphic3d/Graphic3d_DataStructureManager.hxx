// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_DataStructureManager_HeaderFile
#define _Graphic3d_DataStructureManager_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Visualization/Graphic3d/Handle_Graphic3d_DataStructureManager.hxx>

#include <Foundation/MMgt/MMgt_TShared.hxx>


//! This class allows the definition of a manager to
//! which the graphic objects are associated.
//! It allows them to be globally manipulated.
//! It defines the global attributes.
class Graphic3d_DataStructureManager : public MMgt_TShared
{

public:

  
  //! Deletes the manager <me>.
  Standard_EXPORT virtual   void Destroy() ;
~Graphic3d_DataStructureManager()
{
  Destroy();
}



  DEFINE_STANDARD_RTTI(Graphic3d_DataStructureManager)

protected:

  
  //! Initializes the manager <me>.
  Standard_EXPORT Graphic3d_DataStructureManager();



private: 




};







#endif // _Graphic3d_DataStructureManager_HeaderFile
