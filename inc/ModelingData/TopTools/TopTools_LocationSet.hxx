// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_LocationSet_HeaderFile
#define _TopTools_LocationSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/TopLoc/TopLoc_IndexedMapOfLocation.hxx>
#include <Foundation/Message/Handle_Message_ProgressIndicator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Foundation/Standard/Standard_IStream.hxx>
class Message_ProgressIndicator;
class Standard_OutOfRange;
class TopLoc_Location;


//! The class LocationSet stores a set of location in
//! a relocatable state.
//!
//! It can be created from Locations.
//!
//! It can create Locations.
//!
//! It can be write and read from a stream.
class TopTools_LocationSet 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns an empty set of locations.
  Standard_EXPORT TopTools_LocationSet();
  
  //! Clears the content of the set.
  Standard_EXPORT   void Clear() ;
  
  //! Incorporate a new Location in the  set and returns
  //! its index.
  Standard_EXPORT   Standard_Integer Add (const TopLoc_Location& L) ;
  
  //! Returns the location of index <I>.
  Standard_EXPORT  const  TopLoc_Location& Location (const Standard_Integer I)  const;
  
  //! Returns the index of <L>.
  Standard_EXPORT   Standard_Integer Index (const TopLoc_Location& L)  const;
  
  //! Dumps the content of me on the stream <OS>.
  Standard_EXPORT   void Dump (Standard_OStream& OS)  const;
  
  //! Writes the content of  me  on the stream <OS> in a
  //! format that can be read back by Read.
  Standard_EXPORT   void Write (Standard_OStream& OS)  const;
  
  //! Reads the content of me from the  stream  <IS>. me
  //! is first cleared.
  Standard_EXPORT   void Read (Standard_IStream& IS) ;
  
  Standard_EXPORT   void SetProgress (const Handle(Message_ProgressIndicator)& PR) ;
  
  Standard_EXPORT   Handle(Message_ProgressIndicator) GetProgress()  const;




protected:





private:



  TopLoc_IndexedMapOfLocation myMap;
  Handle(Message_ProgressIndicator) myProgress;


};







#endif // _TopTools_LocationSet_HeaderFile
