// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PMMgt_PManaged_HeaderFile
#define _PMMgt_PManaged_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PMMgt_PManaged.hxx>

#include <Foundation/Standard/Standard_Persistent.hxx>
class Standard_OutOfMemory;


class PMMgt_PManaged : public Standard_Persistent
{

public:


PMMgt_PManaged(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}



  DEFINE_STANDARD_RTTI(PMMgt_PManaged)

protected:

  

  //! Returns an instance. The storage of the given "size" is
  //! allocated by <StorageManager>.
  //!
  //! Returns the storage of the given size to the <StorageManager>.
  //! The application using "Delete" must guarantee that the
  //! instance is not shared.
  //!
  //! -C++: alias "void operator delete (void*, size_t);"
  //!
  //! The virtual Destructor for the class "PManaged". This
  //! declaration is necessary for the C++ compiler to
  //! generate a call to "operator delete" with the real size
  //! of the object.
  //!
  //! -C+..+: alias "virtual ~PMMgt_PManaged();"
  Standard_EXPORT PMMgt_PManaged();



private: 




};







#endif // _PMMgt_PManaged_HeaderFile
