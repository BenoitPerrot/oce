// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_ProcessForTransient_HeaderFile
#define _Transfer_ProcessForTransient_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_Transfer_ProcessForTransient.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Message_Messenger.hxx>
#include <TColStd_IndexedMapOfInteger.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Transfer_Binder.hxx>
#include <Handle_Transfer_ActorOfProcessForTransient.hxx>
#include <Transfer_TransferMapOfProcessForTransient.hxx>
#include <Handle_Message_ProgressIndicator.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#include <Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Standard_Type.hxx>
class Message_Messenger;
class Standard_Transient;
class Transfer_Binder;
class Transfer_ActorOfProcessForTransient;
class Message_ProgressIndicator;
class Interface_InterfaceError;
class Transfer_TransferFailure;
class TColStd_MapTransientHasher;
class TColStd_HSequenceOfTransient;
class Transfer_TransferMapOfProcessForTransient;
class Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient;
class Transfer_IteratorOfProcessForTransient;
class Message_Msg;
class Interface_Check;
class Standard_Type;
class Interface_CheckIterator;



class Transfer_ProcessForTransient : public MMgt_TShared
{

public:

  
  Standard_EXPORT Transfer_ProcessForTransient(const Standard_Integer nb = 10000);
  
  Standard_EXPORT Transfer_ProcessForTransient(const Handle(Message_Messenger)& printer, const Standard_Integer nb = 10000);
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Clean() ;
  
  Standard_EXPORT   void Resize (const Standard_Integer nb) ;
  
  Standard_EXPORT   void SetActor (const Handle(Transfer_ActorOfProcessForTransient)& actor) ;
  
  Standard_EXPORT   Handle(Transfer_ActorOfProcessForTransient) Actor()  const;
  
  Standard_EXPORT   Handle(Transfer_Binder) Find (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   Standard_Boolean IsAlreadyUsed (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   void Bind (const Handle(Standard_Transient)& start, const Handle(Transfer_Binder)& binder) ;
  
  Standard_EXPORT   void Rebind (const Handle(Standard_Transient)& start, const Handle(Transfer_Binder)& binder) ;
  
  Standard_EXPORT   Standard_Boolean Unbind (const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   Handle(Transfer_Binder) FindElseBind (const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   void SetMessenger (const Handle(Message_Messenger)& messenger) ;
  
  Standard_EXPORT   Handle(Message_Messenger) Messenger()  const;
  
  Standard_EXPORT   void SetTraceLevel (const Standard_Integer tracelev) ;
  
  Standard_EXPORT   Standard_Integer TraceLevel()  const;
  
  Standard_EXPORT   void SendFail (const Handle(Standard_Transient)& start, const Message_Msg& amsg) ;
  
  Standard_EXPORT   void SendWarning (const Handle(Standard_Transient)& start, const Message_Msg& amsg) ;
  
  Standard_EXPORT   void SendMsg (const Handle(Standard_Transient)& start, const Message_Msg& amsg) ;
  
  Standard_EXPORT   void AddFail (const Handle(Standard_Transient)& start, const Standard_CString mess, const Standard_CString orig = "") ;
  
  Standard_EXPORT   void AddError (const Handle(Standard_Transient)& start, const Standard_CString mess, const Standard_CString orig = "") ;
  
  Standard_EXPORT   void AddFail (const Handle(Standard_Transient)& start, const Message_Msg& amsg) ;
  
  Standard_EXPORT   void AddWarning (const Handle(Standard_Transient)& start, const Standard_CString mess, const Standard_CString orig = "") ;
  
  Standard_EXPORT   void AddWarning (const Handle(Standard_Transient)& start, const Message_Msg& amsg) ;
  
  Standard_EXPORT   void Mend (const Handle(Standard_Transient)& start, const Standard_CString pref = "") ;
  
  Standard_EXPORT   Handle(Interface_Check) Check (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   void BindTransient (const Handle(Standard_Transient)& start, const Handle(Standard_Transient)& res) ;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& FindTransient (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   void BindMultiple (const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   void AddMultiple (const Handle(Standard_Transient)& start, const Handle(Standard_Transient)& res) ;
  
  Standard_EXPORT   Standard_Boolean FindTypedTransient (const Handle(Standard_Transient)& start, const Handle(Standard_Type)& atype, Handle(Standard_Transient)& val)  const;
  
  Standard_EXPORT   Standard_Boolean GetTypedTransient (const Handle(Transfer_Binder)& binder, const Handle(Standard_Type)& atype, Handle(Standard_Transient)& val)  const;
  
  Standard_EXPORT   Standard_Integer NbMapped()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Mapped (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer MapIndex (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   Handle(Transfer_Binder) MapItem (const Standard_Integer num)  const;
  
  Standard_EXPORT   void SetRoot (const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   void SetRootManagement (const Standard_Boolean stat) ;
  
  Standard_EXPORT   Standard_Integer NbRoots()  const;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Root (const Standard_Integer num)  const;
  
  Standard_EXPORT   Handle(Transfer_Binder) RootItem (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer RootIndex (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   Standard_Integer NestingLevel()  const;
  
  Standard_EXPORT   void ResetNestingLevel() ;
  
  Standard_EXPORT   Standard_Boolean Recognize (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   Handle(Transfer_Binder) Transferring (const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   Standard_Boolean Transfer (const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   void SetErrorHandle (const Standard_Boolean err) ;
  
  Standard_EXPORT   Standard_Boolean ErrorHandle()  const;
  
  Standard_EXPORT   void StartTrace (const Handle(Transfer_Binder)& binder, const Handle(Standard_Transient)& start, const Standard_Integer level, const Standard_Integer mode)  const;
  
  Standard_EXPORT virtual   void PrintTrace (const Handle(Standard_Transient)& start, const Handle(Message_Messenger)& S)  const;
  
  Standard_EXPORT   Standard_Boolean IsLooping (const Standard_Integer alevel)  const;
  
  Standard_EXPORT   Transfer_IteratorOfProcessForTransient RootResult (const Standard_Boolean withstart = Standard_False)  const;
  
  Standard_EXPORT   Transfer_IteratorOfProcessForTransient CompleteResult (const Standard_Boolean withstart = Standard_False)  const;
  
  Standard_EXPORT   Transfer_IteratorOfProcessForTransient AbnormalResult()  const;
  
  Standard_EXPORT   Interface_CheckIterator CheckList (const Standard_Boolean erronly)  const;
  
  Standard_EXPORT   Transfer_IteratorOfProcessForTransient ResultOne (const Handle(Standard_Transient)& start, const Standard_Integer level, const Standard_Boolean withstart = Standard_False)  const;
  
  Standard_EXPORT   Interface_CheckIterator CheckListOne (const Handle(Standard_Transient)& start, const Standard_Integer level, const Standard_Boolean erronly)  const;
  
  Standard_EXPORT   Standard_Boolean IsCheckListEmpty (const Handle(Standard_Transient)& start, const Standard_Integer level, const Standard_Boolean erronly)  const;
  
  Standard_EXPORT   void RemoveResult (const Handle(Standard_Transient)& start, const Standard_Integer level, const Standard_Boolean compute = Standard_True) ;
  
  Standard_EXPORT virtual   Standard_Integer CheckNum (const Handle(Standard_Transient)& start)  const;
  
  Standard_EXPORT   void SetProgress (const Handle(Message_ProgressIndicator)& theProgress) ;
  
  Standard_EXPORT   Handle(Message_ProgressIndicator) GetProgress()  const;




  DEFINE_STANDARD_RTTI(Transfer_ProcessForTransient)

protected:




private: 

  
  Standard_EXPORT   Handle(Transfer_Binder) FindAndMask (const Handle(Standard_Transient)& start) ;
  
  Standard_EXPORT   Handle(Transfer_Binder) TransferProduct (const Handle(Standard_Transient)& start) ;

  Standard_Boolean theerrh;
  Standard_Integer thetrace;
  Handle(Message_Messenger) themessenger;
  Standard_Integer thelevel;
  Standard_Integer therootl;
  Standard_Boolean therootm;
  TColStd_IndexedMapOfInteger theroots;
  Handle(Standard_Transient) thelastobj;
  Handle(Transfer_Binder) thelastbnd;
  Standard_Integer theindex;
  Handle(Transfer_ActorOfProcessForTransient) theactor;
  Transfer_TransferMapOfProcessForTransient themap;
  Handle(Message_ProgressIndicator) myProgress;


};







#endif // _Transfer_ProcessForTransient_HeaderFile
