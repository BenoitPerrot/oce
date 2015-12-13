// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_TimerSentry_HeaderFile
#define _MoniTool_TimerSentry_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_MoniTool_Timer.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
class MoniTool_Timer;


//! A tool to facilitate using MoniTool_Timer functionality
//! by automatically ensuring consistency of start/stop actions
//!
//! When instance of TimerSentry is created, a timer
//! with corresponding name is started
//! When instance is deleted, timer stops
class MoniTool_TimerSentry 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructor creates an instance and runs the corresponding timer
    MoniTool_TimerSentry(const Standard_CString cname);
  
  //! Constructor creates an instance and runs the corresponding timer
    MoniTool_TimerSentry(const Handle(MoniTool_Timer)& timer);
  
  //! Destructor stops the associated timer
      void Destroy() ;
Standard_EXPORT ~MoniTool_TimerSentry () { Destroy(); }
  
      Handle(MoniTool_Timer) Timer()  const;
  
  //! Manually stops the timer
      void Stop() ;




protected:





private:



  Handle(MoniTool_Timer) myTimer;


};


#include <MoniTool_TimerSentry.lxx>





#endif // _MoniTool_TimerSentry_HeaderFile
