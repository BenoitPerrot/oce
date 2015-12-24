// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayTNodeOfFieldOfHArray1OfXY_HeaderFile
#define _PColgp_VArrayTNodeOfFieldOfHArray1OfXY_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_XY.hxx>
#include <OCAF/PColgp/Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class gp_XY;
class PColgp_FieldOfHArray1OfXY;
class PColgp_VArrayNodeOfFieldOfHArray1OfXY;



class PColgp_VArrayTNodeOfFieldOfHArray1OfXY 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PColgp_VArrayTNodeOfFieldOfHArray1OfXY();
  
    PColgp_VArrayTNodeOfFieldOfHArray1OfXY(const gp_XY& aValue);
  
      void SetValue (const gp_XY& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  gp_XY myValue;


};

#define Item gp_XY
#define Item_hxx <Mathematics/Primitives/gp_XY.hxx>
#define DBC_VArrayNode PColgp_VArrayNodeOfFieldOfHArray1OfXY
#define DBC_VArrayNode_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray1OfXY.hxx>
#define DBC_VArrayTNode PColgp_VArrayTNodeOfFieldOfHArray1OfXY
#define DBC_VArrayTNode_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray1OfXY.hxx>
#define Handle_DBC_VArrayNode Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY
#define DBC_VArrayNode_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfXY_Type_()
#define DBC_VArray PColgp_FieldOfHArray1OfXY
#define DBC_VArray_hxx <OCAF/PColgp/PColgp_FieldOfHArray1OfXY.hxx>

#include <OCAF/DBC/DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx




#endif // _PColgp_VArrayTNodeOfFieldOfHArray1OfXY_HeaderFile
