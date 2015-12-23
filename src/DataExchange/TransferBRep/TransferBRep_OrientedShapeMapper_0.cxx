// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TransferBRep_OrientedShapeMapper.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>
#include <TransferBRep_ShapeInfo.hxx>
#include <Transfer_Finder.hxx>
#include <Foundation/Standard/Standard_Type.hxx>

 


IMPLEMENT_STANDARD_TYPE(TransferBRep_OrientedShapeMapper)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Transfer_Finder),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TransferBRep_OrientedShapeMapper)


IMPLEMENT_DOWNCAST(TransferBRep_OrientedShapeMapper,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TransferBRep_OrientedShapeMapper)


#define TheKey TopoDS_Shape
#define TheKey_hxx <ModelingData/TopoDS/TopoDS_Shape.hxx>
#define TheHasher TopTools_OrientedShapeMapHasher
#define TheHasher_hxx <ModelingData/TopTools/TopTools_OrientedShapeMapHasher.hxx>
#define TheInfo TransferBRep_ShapeInfo
#define TheInfo_hxx <TransferBRep_ShapeInfo.hxx>
#define Transfer_Mapper TransferBRep_OrientedShapeMapper
#define Transfer_Mapper_hxx <TransferBRep_OrientedShapeMapper.hxx>
#define Handle_Transfer_Mapper Handle_TransferBRep_OrientedShapeMapper
#define Transfer_Mapper_Type_() TransferBRep_OrientedShapeMapper_Type_()
#include <Transfer_Mapper.gxx>

