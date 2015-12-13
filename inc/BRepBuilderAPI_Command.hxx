// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_Command_HeaderFile
#define _BRepBuilderAPI_Command_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
class StdFail_NotDone;


//! Root class for all commands in BRepBuilderAPI.
//!
//! Provides :
//!
//! * Managements of the notDone flag.
//!
//! * Catching of exceptions (not implemented).
//!
//! * Logging (not implemented).
class BRepBuilderAPI_Command 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~BRepBuilderAPI_Command(){Delete() ; }
  
  Standard_EXPORT virtual   Standard_Boolean IsDone()  const;
  
  //! Raises NotDone if done is false.
  Standard_EXPORT   void Check()  const;




protected:

  
  //! Set done to False.
  Standard_EXPORT BRepBuilderAPI_Command();
  
  //! Set done to true.
  Standard_EXPORT   void Done() ;
  
  //! Set done to false.
  Standard_EXPORT   void NotDone() ;




private:



  Standard_Boolean myDone;


};







#endif // _BRepBuilderAPI_Command_HeaderFile
