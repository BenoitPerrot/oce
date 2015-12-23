// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_Iterator_HeaderFile
#define _TFunction_Iterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/TDF/TDF_LabelList.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/TDF_LabelMap.hxx>
#include <Handle_TFunction_Scope.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <TFunction_ExecutionStatus.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TFunction_Scope;
class TDF_Label;
class TDF_LabelList;


//! Iterator of the graph of functions
class TFunction_Iterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! An empty constructor.
  Standard_EXPORT TFunction_Iterator();
  
  //! A constructor.
  //! Initializes the iterator.
  Standard_EXPORT TFunction_Iterator(const TDF_Label& Access);
  
  //! Initializes the Iterator.
  Standard_EXPORT virtual   void Init (const TDF_Label& Access) ;
  
  //! Defines the mode of iteration - usage or not of the execution status.
  //! If the iterator takes into account the execution status,
  //! the method ::Current() returns only "not executed" functions
  //! while their status is not changed.
  //! If the iterator ignores the execution status,
  //! the method ::Current() returns the functions
  //! following their dependencies and ignoring the execution status.
  Standard_EXPORT   void SetUsageOfExecutionStatus (const Standard_Boolean usage) ;
  
  //! Returns usage of execution status by the iterator.
  Standard_EXPORT   Standard_Boolean GetUsageOfExecutionStatus()  const;
  
  //! Analyses the graph of dependencies and returns
  //! maximum number of threads may be used to calculate the model.
  Standard_EXPORT virtual   Standard_Integer GetMaxNbThreads()  const;
  
  //! Returns the current list of functions.
  //! If the iterator uses the execution status,
  //! the returned list contains only the functions
  //! with "not executed" status.
  Standard_EXPORT virtual  const  TDF_LabelList& Current()  const;
  
  //! Returns false if the graph of functions is fully iterated.
  Standard_EXPORT virtual   Standard_Boolean More()  const;
  
  //! Switches the iterator to the next list of current functions.
  Standard_EXPORT virtual   void Next() ;
  
  //! A help-function aimed to help the user to check the status of retrurned function.
  //! It calls TFunction_GraphNode::GetStatus() inside.
  Standard_EXPORT   TFunction_ExecutionStatus GetStatus (const TDF_Label& func)  const;
  
  //! A help-function aimed to help the user to change the execution status of a function.
  //! It calls TFunction_GraphNode::SetStatus() inside.
  Standard_EXPORT   void SetStatus (const TDF_Label& func, const TFunction_ExecutionStatus status)  const;
  
  Standard_EXPORT   Standard_OStream& Dump (Standard_OStream& OS)  const;




protected:





private:



  TDF_LabelList myCurrent;
  Standard_Boolean myUsageOfExecutionStatus;
  TDF_LabelMap myPassedFunctions;
  Handle(TFunction_Scope) myScope;


};







#endif // _TFunction_Iterator_HeaderFile
