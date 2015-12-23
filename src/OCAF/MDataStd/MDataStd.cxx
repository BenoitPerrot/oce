// Created by: DAUTRY Philippe
// Copyright (c) 1997-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

//      	------------
// modified     Sergey Zaritchny

// Version:	0.0
//Version	Date		Purpose
//		0.0	Aug  4 1997	Creation



#include <MDF_ASDriverHSequence.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
#include <MDF_ARDriverHSequence.hxx>
#include <OCAF/MDataStd/MDataStd.hxx>
#include <MDF_ASDriverTable.hxx>
#include <MDF_ARDriverTable.hxx>
#include <OCAF/CDM/CDM_MessageDriver.hxx>
// Storage
#include <OCAF/MDataStd/MDataStd_DirectoryStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_UAttributeStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntegerArrayStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RealArrayStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ExtStringArrayStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_NameStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_CommentStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntegerStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RealStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_VariableStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ExpressionStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RelationStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_NoteBookStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_TreeNodeStorageDriver.hxx>

#include <OCAF/MDataStd/MDataStd_TickStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntegerListStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RealListStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ExtStringListStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_BooleanListStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ReferenceListStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_BooleanArrayStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ReferenceArrayStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ByteArrayStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_NamedDataStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_AsciiStringStorageDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntPackedMapStorageDriver.hxx>
// Retrieval
#include <OCAF/MDataStd/MDataStd_DirectoryRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RealArrayRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ExtStringArrayRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_UAttributeRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntegerArrayRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_NameRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_CommentRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntegerRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RealRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_VariableRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ExpressionRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RelationRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_NoteBookRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_TreeNodeRetrievalDriver.hxx>

#include <OCAF/MDataStd/MDataStd_TickRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntegerListRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_RealListRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ExtStringListRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_BooleanListRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ReferenceListRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_BooleanArrayRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ReferenceArrayRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ByteArrayRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_NamedDataRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_AsciiStringRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_IntPackedMapRetrievalDriver.hxx>
#include <OCAF/MDataStd/MDataStd_ByteArrayRetrievalDriver_1.hxx>
#include <OCAF/MDataStd/MDataStd_IntegerArrayRetrievalDriver_1.hxx>
#include <OCAF/MDataStd/MDataStd_RealArrayRetrievalDriver_1.hxx>
#include <OCAF/MDataStd/MDataStd_ExtStringArrayRetrievalDriver_1.hxx>
#include <OCAF/MDataStd/MDataStd_IntPackedMapRetrievalDriver_1.hxx>

// enums
#include <TDataStd_RealEnum.hxx>
#include <Foundation/Standard/Standard_DomainError.hxx>

//=======================================================================
//function : AddStorageDriver
//purpose  : 
//=======================================================================

void MDataStd::AddStorageDrivers
(const Handle(MDF_ASDriverHSequence)& aDriverSeq, const Handle(CDM_MessageDriver)& theMsgDriver)
{
  aDriverSeq->Append(new MDataStd_DirectoryStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntegerArrayStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_RealArrayStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_UAttributeStorageDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_NameStorageDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_CommentStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntegerStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_RealStorageDriver(theMsgDriver));

  aDriverSeq->Append(new MDataStd_VariableStorageDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_ExpressionStorageDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_RelationStorageDriver(theMsgDriver));  
  aDriverSeq->Append(new MDataStd_NoteBookStorageDriver(theMsgDriver));  
  aDriverSeq->Append(new MDataStd_TreeNodeStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ExtStringArrayStorageDriver(theMsgDriver));

  aDriverSeq->Append(new MDataStd_TickStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntegerListStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_RealListStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ExtStringListStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_BooleanListStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ReferenceListStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_BooleanArrayStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ReferenceArrayStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ByteArrayStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_NamedDataStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_AsciiStringStorageDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntPackedMapStorageDriver(theMsgDriver));
}


//=======================================================================
//function : AddRetrievalDriver
//purpose  : 
//=======================================================================

void MDataStd::AddRetrievalDrivers
(const Handle(MDF_ARDriverHSequence)& aDriverSeq,const Handle(CDM_MessageDriver)& theMsgDriver)
{
  aDriverSeq->Append(new MDataStd_DirectoryRetrievalDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_IntegerArrayRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_RealArrayRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_UAttributeRetrievalDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_NameRetrievalDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_CommentRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntegerRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_RealRetrievalDriver(theMsgDriver));

  aDriverSeq->Append(new MDataStd_VariableRetrievalDriver(theMsgDriver));  
  aDriverSeq->Append(new MDataStd_ExpressionRetrievalDriver(theMsgDriver));  
  aDriverSeq->Append(new MDataStd_RelationRetrievalDriver(theMsgDriver)); 
  aDriverSeq->Append(new MDataStd_NoteBookRetrievalDriver(theMsgDriver));  
  aDriverSeq->Append(new MDataStd_TreeNodeRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ExtStringArrayRetrievalDriver(theMsgDriver));

  aDriverSeq->Append(new MDataStd_TickRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntegerListRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_RealListRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ExtStringListRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_BooleanListRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ReferenceListRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_BooleanArrayRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ReferenceArrayRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ByteArrayRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_NamedDataRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_AsciiStringRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntPackedMapRetrievalDriver(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ByteArrayRetrievalDriver_1(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntegerArrayRetrievalDriver_1(theMsgDriver));
  aDriverSeq->Append(new MDataStd_RealArrayRetrievalDriver_1(theMsgDriver));
  aDriverSeq->Append(new MDataStd_ExtStringArrayRetrievalDriver_1(theMsgDriver));
  aDriverSeq->Append(new MDataStd_IntPackedMapRetrievalDriver_1(theMsgDriver));
}


//=======================================================================
//function : RealDimensionToInteger
//purpose  : 
//=======================================================================

Standard_Integer MDataStd::RealDimensionToInteger(const TDataStd_RealEnum e) 
{
  switch (e) {
  case TDataStd_SCALAR  : return  0;
  case TDataStd_LENGTH  : return  1;
  case TDataStd_ANGULAR : return  2;
    
  default:
    Standard_DomainError::Raise("TDataStd_RealEnum; enum term unknown");
  }
  return 0;
}

//=======================================================================
//function : IntegerToRealDimension
//purpose  : 
//=======================================================================

TDataStd_RealEnum MDataStd::IntegerToRealDimension(const Standard_Integer i) 
{
  switch(i)
    {
      // planar constraints
    case  0 : return TDataStd_SCALAR;
    case  1 : return TDataStd_LENGTH;
    case  2 : return TDataStd_ANGULAR;
      default :
	Standard_DomainError::Raise("TDataStd_RealEnum; enum term unknown ");
    }
  return TDataStd_SCALAR;
}
