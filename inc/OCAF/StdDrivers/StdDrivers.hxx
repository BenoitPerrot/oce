// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdDrivers_HeaderFile
#define _StdDrivers_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Handle_Standard_Transient.hxx>
class Standard_Transient;
class Standard_GUID;
class StdDrivers_DocumentRetrievalDriver;
class StdDrivers_DocumentStorageDriver;



class StdDrivers 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Depending from the  ID, returns a list of  storage
  //! or retrieval attribute drivers. Used for plugin
  Standard_EXPORT static   Handle(Standard_Transient) Factory (const Standard_GUID& aGUID) ;




protected:





private:




friend class StdDrivers_DocumentRetrievalDriver;
friend class StdDrivers_DocumentStorageDriver;

};







#endif // _StdDrivers_HeaderFile
