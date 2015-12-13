// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_ProgressIndicator_HeaderFile
#define _Draw_ProgressIndicator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Draw_ProgressIndicator.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Size.hxx>
#include <Foundation/Message/Message_ProgressIndicator.hxx>
#include <Draw_Interpretor.hxx>


//! Implements ProgressIndicator (interface provided by Message)
//! for DRAW, with possibility to output to TCL window
//! and/or trace file
class Draw_ProgressIndicator : public Message_ProgressIndicator
{

public:

  
  //! Creates a progress indicator and remembers pointer to
  //! Draw_Interpretor
  //! The updateTime, if given, defines time interval between
  //! updates of the indicator (in seconds)
  Standard_EXPORT Draw_ProgressIndicator(const Draw_Interpretor& di, const Standard_Integer updateTime = 0);
  
  //! Destructor; calls Reset()
  Standard_EXPORT   void Destroy() ;
~Draw_ProgressIndicator()
{
  Destroy();
}
  
  //! Sets text output mode (on/off)
  Standard_EXPORT   void SetTextMode (const Standard_Boolean theTextMode) ;
  
  //! Gets text output mode (on/off)
  Standard_EXPORT   Standard_Boolean GetTextMode()  const;
  
  //! Sets graphical output mode (on/off)
  Standard_EXPORT   void SetGraphMode (const Standard_Boolean theGraphMode) ;
  
  //! Gets graphical output mode (on/off)
  Standard_EXPORT   Standard_Boolean GetGraphMode()  const;
  
  //! Clears/erases opened TCL windows if any
  //! and sets myBreak to False
  Standard_EXPORT virtual   void Reset() ;
  
  //! Defines method Show of Progress Indicator
  Standard_EXPORT virtual   Standard_Boolean Show (const Standard_Boolean force = Standard_True) ;
  
  //! Redefines method UserBreak of Progress Indicator
  Standard_EXPORT virtual   Standard_Boolean UserBreak() ;
  
  Standard_EXPORT static   Standard_Boolean& DefaultTextMode() ;
  
  //! Get/Set default values for output modes
  Standard_EXPORT static   Standard_Boolean& DefaultGraphMode() ;
  
  //! Internal method for implementation of UserBreak mechanism
  Standard_EXPORT static   Standard_Integer& StopIndicator() ;



  DEFINE_STANDARD_RTTI(Draw_ProgressIndicator)

protected:




private: 


  Standard_Boolean myTextMode;
  Standard_Boolean myGraphMode;
  Standard_Address myDraw;
  Standard_Boolean myShown;
  Standard_Boolean myBreak;
  Standard_Integer myUpdateTime;
  Standard_Size myLastUpdate;
  Standard_Size myStartTime;


};







#endif // _Draw_ProgressIndicator_HeaderFile
