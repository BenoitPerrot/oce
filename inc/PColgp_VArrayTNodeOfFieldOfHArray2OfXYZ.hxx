// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ_HeaderFile
#define _PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_XYZ.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXYZ.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class gp_XYZ;
class PColgp_FieldOfHArray2OfXYZ;
class PColgp_VArrayNodeOfFieldOfHArray2OfXYZ;



class PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ();
  
    PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ(const gp_XYZ& aValue);
  
      void SetValue (const gp_XYZ& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  gp_XYZ myValue;


};

#define Item gp_XYZ
#define Item_hxx <Mathematics/Primitives/gp_XYZ.hxx>
#define DBC_VArrayNode PColgp_VArrayNodeOfFieldOfHArray2OfXYZ
#define DBC_VArrayNode_hxx <PColgp_VArrayNodeOfFieldOfHArray2OfXYZ.hxx>
#define DBC_VArrayTNode PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ
#define DBC_VArrayTNode_hxx <PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ.hxx>
#define Handle_DBC_VArrayNode Handle_PColgp_VArrayNodeOfFieldOfHArray2OfXYZ
#define DBC_VArrayNode_Type_() PColgp_VArrayNodeOfFieldOfHArray2OfXYZ_Type_()
#define DBC_VArray PColgp_FieldOfHArray2OfXYZ
#define DBC_VArray_hxx <PColgp_FieldOfHArray2OfXYZ.hxx>

#include <DBC_VArrayTNode.lxx>

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




#endif // _PColgp_VArrayTNodeOfFieldOfHArray2OfXYZ_HeaderFile
