// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <PColgp_HSequenceOfDir.hxx>

#include <Foundation/Standard/Standard_Type.hxx>

#include <PColgp_HSequenceOfDir.hxx>
#include <PColgp_SeqNodeOfHSequenceOfDir.hxx>
#include <Foundation/Standard/Standard_NoSuchObject.hxx>
#include <Foundation/Standard/Standard_OutOfRange.hxx>
#include <PColgp_SeqExplorerOfHSequenceOfDir.hxx>
#include <Mathematics/Primitives/gp_Dir.hxx>
 


IMPLEMENT_STANDARD_TYPE(PColgp_HSequenceOfDir)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Standard_Persistent),
  STANDARD_TYPE(Standard_Storable),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PColgp_HSequenceOfDir)


IMPLEMENT_DOWNCAST(PColgp_HSequenceOfDir,Standard_Persistent)
IMPLEMENT_STANDARD_RTTI(PColgp_HSequenceOfDir)


#define Item gp_Dir
#define Item_hxx <Mathematics/Primitives/gp_Dir.hxx>
#define PCollection_SeqNode PColgp_SeqNodeOfHSequenceOfDir
#define PCollection_SeqNode_hxx <PColgp_SeqNodeOfHSequenceOfDir.hxx>
#define PCollection_SeqExplorer PColgp_SeqExplorerOfHSequenceOfDir
#define PCollection_SeqExplorer_hxx <PColgp_SeqExplorerOfHSequenceOfDir.hxx>
#define Handle_PCollection_SeqNode Handle_PColgp_SeqNodeOfHSequenceOfDir
#define PCollection_SeqNode_Type_() PColgp_SeqNodeOfHSequenceOfDir_Type_()
#define PCollection_HSequence PColgp_HSequenceOfDir
#define PCollection_HSequence_hxx <PColgp_HSequenceOfDir.hxx>
#define Handle_PCollection_HSequence Handle_PColgp_HSequenceOfDir
#define PCollection_HSequence_Type_() PColgp_HSequenceOfDir_Type_()
#include <PCollection_HSequence.gxx>

