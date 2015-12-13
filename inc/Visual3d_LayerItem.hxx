// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_LayerItem_HeaderFile
#define _Visual3d_LayerItem_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Visual3d_LayerItem.hxx>

#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>


//! This class is drawable unit of 2d scene
class Visual3d_LayerItem : public MMgt_TShared
{

public:

  
  //! Creates a layer item
  Standard_EXPORT Visual3d_LayerItem();
  
  //! virtual function for recompute 2D
  //! presentation (empty by default)
  Standard_EXPORT virtual   void ComputeLayerPrs() ;
  
  //! virtual function for recompute 2D
  //! presentation (empty by default)
  Standard_EXPORT virtual   void RedrawLayerPrs() ;
  
  Standard_EXPORT   Standard_Boolean IsNeedToRecompute()  const;
  
  Standard_EXPORT   void SetNeedToRecompute (const Standard_Boolean NeedToRecompute = Standard_True) ;




  DEFINE_STANDARD_RTTI(Visual3d_LayerItem)

protected:




private: 


  Standard_Boolean MyIsNeedToRecompute;


};







#endif // _Visual3d_LayerItem_HeaderFile
