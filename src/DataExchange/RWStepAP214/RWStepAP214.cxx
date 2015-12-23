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

#include <DataExchange/RWStepAP214/RWStepAP214.hxx>
#include <DataExchange/RWHeaderSection/RWHeaderSection.hxx>

#include <DataExchange/StepAP214/StepAP214_Protocol.hxx>

#include <DataExchange/StepAP214/StepAP214.hxx>
#include <DataExchange/RWStepAP214/RWStepAP214_ReadWriteModule.hxx>
#include <DataExchange/RWStepAP214/RWStepAP214_GeneralModule.hxx>
#include <DataExchange/Interface/Interface_GeneralLib.hxx>
#include <DataExchange/Interface/Interface_ReaderLib.hxx>
#include <DataExchange/StepData/StepData_WriterLib.hxx>


static int init = 0;

void RWStepAP214::Init()
	{
	  if (init) return;    init = 1;
	  RWHeaderSection::Init();
	  Handle(StepAP214_Protocol) proto = StepAP214::Protocol();
	  Interface_GeneralLib::SetGlobal (new RWStepAP214_GeneralModule,proto);
	  Interface_ReaderLib::SetGlobal  (new RWStepAP214_ReadWriteModule,proto);
	  StepData_WriterLib::SetGlobal   (new RWStepAP214_ReadWriteModule,proto);
	}
