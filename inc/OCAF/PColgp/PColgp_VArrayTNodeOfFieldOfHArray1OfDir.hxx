// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_VArrayTNodeOfFieldOfHArray1OfDir_HeaderFile
#define _PColgp_VArrayTNodeOfFieldOfHArray1OfDir_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Dir.hxx>
#include <OCAF/PColgp/Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
class gp_Dir;
class PColgp_FieldOfHArray1OfDir;
class PColgp_VArrayNodeOfFieldOfHArray1OfDir;



class PColgp_VArrayTNodeOfFieldOfHArray1OfDir 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PColgp_VArrayTNodeOfFieldOfHArray1OfDir();
  
    PColgp_VArrayTNodeOfFieldOfHArray1OfDir(const gp_Dir& aValue);
  
      void SetValue (const gp_Dir& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  gp_Dir myValue;


};

#define Item gp_Dir
#define Item_hxx <Mathematics/Primitives/gp_Dir.hxx>
#define DBC_VArrayNode PColgp_VArrayNodeOfFieldOfHArray1OfDir
#define DBC_VArrayNode_hxx <OCAF/PColgp/PColgp_VArrayNodeOfFieldOfHArray1OfDir.hxx>
#define DBC_VArrayTNode PColgp_VArrayTNodeOfFieldOfHArray1OfDir
#define DBC_VArrayTNode_hxx <OCAF/PColgp/PColgp_VArrayTNodeOfFieldOfHArray1OfDir.hxx>
#define Handle_DBC_VArrayNode Handle_PColgp_VArrayNodeOfFieldOfHArray1OfDir
#define DBC_VArrayNode_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfDir_Type_()
#define DBC_VArray PColgp_FieldOfHArray1OfDir
#define DBC_VArray_hxx <OCAF/PColgp/PColgp_FieldOfHArray1OfDir.hxx>

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




#endif // _PColgp_VArrayTNodeOfFieldOfHArray1OfDir_HeaderFile
