// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_LineBuffer_HeaderFile
#define _Interface_LineBuffer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_AsciiString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Character.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class Standard_OutOfRange;
class TCollection_AsciiString;
class TCollection_HAsciiString;


//! Simple Management of a Line Buffer, to be used by Interface
//! File Writers.
//! While a String is suitable to do that, this class ensures an
//! optimised Memory Management, because this is a hard point of
//! File Writing.
class Interface_LineBuffer 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a LineBuffer with an absolute maximum size
  //! (Default value is only to satisfy compiler requirement)
  Standard_EXPORT Interface_LineBuffer(const Standard_Integer size = 10);
  
  //! Changes Maximum allowed size of Buffer.
  //! If <max> is Zero, Maximum size is set to the initial size.
  Standard_EXPORT   void SetMax (const Standard_Integer max) ;
  
  //! Sets an Initial reservation for Blank characters
  //! (this reservation is counted in the size of the current Line)
  Standard_EXPORT   void SetInitial (const Standard_Integer initial) ;
  
  //! Sets a Keep Status at current Length. It means that at next
  //! Move, the new line will begin by characters between Keep + 1
  //! and current Length
  Standard_EXPORT   void SetKeep() ;
  
  //! Returns True if there is room enough to add <more> characters
  //! Else, it is required to Dump the Buffer before refilling it
  //! <more> is recorded to manage SetKeep status
  Standard_EXPORT   Standard_Boolean CanGet (const Standard_Integer more) ;
  
  //! Returns the Content of the LineBuffer
  //! was C++ : return const
  Standard_EXPORT   Standard_CString Content()  const;
  
  //! Returns the Length of the LineBuffer
  Standard_EXPORT   Standard_Integer Length()  const;
  
  //! Clears completely the LineBuffer
  Standard_EXPORT   void Clear() ;
  
  //! Inhibits effect of SetInitial until the next Move (i.e. Keep)
  //! Then Prepare will not insert initial blanks, but further ones
  //! will. This allows to cancel initial blanks on an internal Split
  //! A call to SetInitial has no effect on this until Move
  Standard_EXPORT   void FreezeInitial() ;
  
  //! Fills a AsciiString <str> with the Content of the Line Buffer,
  //! then Clears the LineBuffer
  Standard_EXPORT   void Move (TCollection_AsciiString& str) ;
  
  //! Same as above, but <str> is known through a Handle
  Standard_EXPORT   void Move (const Handle(TCollection_HAsciiString)& str) ;
  
  //! Same as above, but generates the HAsciiString
  Standard_EXPORT   Handle(TCollection_HAsciiString) Moved() ;
  
  //! Adds a text as a CString. Its Length is evaluated from the
  //! text (by C function strlen)
  Standard_EXPORT   void Add (const Standard_CString text) ;
  
  //! Adds a text as a CString. Its length is given as <lntext>
  Standard_EXPORT   void Add (const Standard_CString text, const Standard_Integer lntext) ;
  
  //! Adds a text as a AsciiString from TCollection
  Standard_EXPORT   void Add (const TCollection_AsciiString& text) ;
  
  //! Adds a text made of only ONE Character
  Standard_EXPORT   void Add (const Standard_Character text) ;




protected:





private:

  
  //! Prepares Move : Inserts Initial Blanks if required, and
  //! determines if SetKeep can be supported (it cannot be if Length
  //! + Next String to get (see CanGet) overpass Max Size)
  Standard_EXPORT   void Prepare() ;
  
  //! Keeps characters from SetKeep. If SetKeep is Zero, equivalent
  //! to Clear
  Standard_EXPORT   void Keep() ;


  TCollection_AsciiString theline;
  Standard_Integer themax;
  Standard_Integer theinit;
  Standard_Integer thekeep;
  Standard_Integer theget;
  Standard_Integer thelen;
  Standard_Integer thefriz;
  Standard_Character thekept;


};







#endif // _Interface_LineBuffer_HeaderFile
