// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_DirectoryIterator_HeaderFile
#define _OSD_DirectoryIterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/OSD/OSD_Directory.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/OSD/OSD_Error.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class OSD_OSDError;
class OSD_Path;
class TCollection_AsciiString;
class OSD_Directory;


//! Manages a breadth-only search for sub-directories in the specified
//! Path.
//! There is no specific order of results.
class OSD_DirectoryIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Instantiates Object as empty Iterator;
  Standard_EXPORT OSD_DirectoryIterator();
  
  //! Instantiates Object as Iterator.
  //! Wild-card "*" can be used in Mask the same way it
  //! is used by unix shell for file names
  Standard_EXPORT OSD_DirectoryIterator(const OSD_Path& where, const TCollection_AsciiString& Mask);
  
  Standard_EXPORT   void Destroy() ;
~OSD_DirectoryIterator()
{
  Destroy();
}
  
  //! Initializes the current File Directory
  Standard_EXPORT   void Initialize (const OSD_Path& where, const TCollection_AsciiString& Mask) ;
  
  //! Returns TRUE if other items are found while
  //! using the 'Tree' method.
  Standard_EXPORT   Standard_Boolean More() ;
  
  //! Sets the iterator to the next item.
  //! Returns the item value corresponding to the current
  //! position of the iterator.
  Standard_EXPORT   void Next() ;
  
  //! Returns the next item found .
  Standard_EXPORT   OSD_Directory Values() ;
  
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



  OSD_Directory TheIterator;
  Standard_Boolean myFlag;
  TCollection_AsciiString myMask;
  TCollection_AsciiString myPlace;
  Standard_Address myDescr;
  Standard_Address myEntry;
  Standard_Integer myInit;
  OSD_Error myError;
  Standard_Address myHandle;
  Standard_Address myData;
  Standard_Boolean myFirstCall;


};







#endif // _OSD_DirectoryIterator_HeaderFile
