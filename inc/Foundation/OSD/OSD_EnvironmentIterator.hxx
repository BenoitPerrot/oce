// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_EnvironmentIterator_HeaderFile
#define _OSD_EnvironmentIterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/OSD/OSD_Error.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class OSD_OSDError;
class OSD_Environment;


//! This allows consultation of every environment variable.
//! There is no specific order of results.
class OSD_EnvironmentIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Instantiates Object as Iterator;
  Standard_EXPORT OSD_EnvironmentIterator();
  
  Standard_EXPORT   void Destroy() ;
~OSD_EnvironmentIterator()
{
  Destroy();
}
  
  //! Returns TRUE if there are other environment variables.
  Standard_EXPORT   Standard_Boolean More() ;
  
  //! Sets the iterator to the next item.
  //! Returns the item value corresponding to the current
  //! position of the iterator.
  Standard_EXPORT   void Next() ;
  
  //! Returns the next environment variable found.
  Standard_EXPORT   OSD_Environment Values() ;
  
  //! Returns TRUE if an error occurs
  Standard_EXPORT   Standard_Boolean Failed()  const;
  
  //! Resets error counter to zero
  Standard_EXPORT   void Reset() ;
  
  //! Raises OSD_Error
  Standard_EXPORT   void Perror() ;
  
  //! Returns error number if 'Failed' is TRUE.
  Standard_EXPORT   Standard_Integer Error()  const;




protected:





private:



  Standard_Address myEnv;
#ifdef WNT
  Standard_CString myCount;
#else
  Standard_Integer myCount;
#endif
  OSD_Error myError;


};







#endif // _OSD_EnvironmentIterator_HeaderFile
