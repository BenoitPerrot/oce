// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FSD_File_HeaderFile
#define _FSD_File_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/FSD/FSD_FStream.hxx>
#include <Foundation/Storage/Storage_BaseDriver.hxx>
#include <Foundation/Storage/Storage_Error.hxx>
#include <Foundation/Storage/Storage_OpenMode.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Storage/Storage_Position.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Character.hxx>
#include <Foundation/Standard/Standard_ExtCharacter.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_ShortReal.hxx>
#include <Foundation/Standard/Standard_Size.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
class Storage_StreamTypeMismatchError;
class Storage_StreamFormatError;
class Storage_StreamWriteError;
class Storage_StreamExtCharParityError;
class TCollection_AsciiString;
class TCollection_ExtendedString;
class TColStd_SequenceOfAsciiString;
class TColStd_SequenceOfExtendedString;
class Storage_BaseDriver;



//! A general driver which defines as a file, the
//! physical container for data to be stored or retrieved.
class FSD_File  : public Storage_BaseDriver
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Constructs a driver defining as a file, the physical
  //! container for data to be stored or retrieved.
  //! Use the function Open to give the name of the driven file.
  Standard_EXPORT FSD_File();
  

  //! Assigns as aName the name of the file to be
  //! driven by this driver. aMode precises if the file is
  //! opened in read or write mode.
  //! The function returns Storage_VSOk if the file
  //! is opened correctly, or any other value of the
  //! Storage_Error enumeration which specifies the problem encountered.
  Standard_EXPORT   Storage_Error Open (const TCollection_AsciiString& aName, const Storage_OpenMode aMode) ;
  
  Standard_EXPORT   Standard_Boolean IsEnd() ;
  
  //! return position in the file. Return -1 upon error.
  Standard_EXPORT   Storage_Position Tell() ;
  
  Standard_EXPORT static   Storage_Error IsGoodFileType (const TCollection_AsciiString& aName) ;
  
  Standard_EXPORT   Storage_Error BeginWriteInfoSection() ;
  
  Standard_EXPORT   void WriteInfo (const Standard_Integer nbObj, const TCollection_AsciiString& dbVersion, const TCollection_AsciiString& date, const TCollection_AsciiString& schemaName, const TCollection_AsciiString& schemaVersion, const TCollection_ExtendedString& appName, const TCollection_AsciiString& appVersion, const TCollection_ExtendedString& objectType, const TColStd_SequenceOfAsciiString& userInfo) ;
  
  Standard_EXPORT   Storage_Error EndWriteInfoSection() ;
  
  Standard_EXPORT   Storage_Error BeginReadInfoSection() ;
  
  Standard_EXPORT   void ReadInfo (Standard_Integer& nbObj, TCollection_AsciiString& dbVersion, TCollection_AsciiString& date, TCollection_AsciiString& schemaName, TCollection_AsciiString& schemaVersion, TCollection_ExtendedString& appName, TCollection_AsciiString& appVersion, TCollection_ExtendedString& objectType, TColStd_SequenceOfAsciiString& userInfo) ;
  
  Standard_EXPORT   Storage_Error EndReadInfoSection() ;
  
  Standard_EXPORT   Storage_Error BeginWriteCommentSection() ;
  
  Standard_EXPORT   void WriteComment (const TColStd_SequenceOfExtendedString& userComments) ;
  
  Standard_EXPORT   Storage_Error EndWriteCommentSection() ;
  
  Standard_EXPORT   Storage_Error BeginReadCommentSection() ;
  
  Standard_EXPORT   void ReadComment (TColStd_SequenceOfExtendedString& userComments) ;
  
  Standard_EXPORT   Storage_Error EndReadCommentSection() ;
  
  Standard_EXPORT   Storage_Error BeginWriteTypeSection() ;
  
  Standard_EXPORT   void SetTypeSectionSize (const Standard_Integer aSize) ;
  
  Standard_EXPORT   void WriteTypeInformations (const Standard_Integer typeNum, const TCollection_AsciiString& typeName) ;
  
  Standard_EXPORT   Storage_Error EndWriteTypeSection() ;
  
  Standard_EXPORT   Storage_Error BeginReadTypeSection() ;
  
  Standard_EXPORT   Standard_Integer TypeSectionSize() ;
  
  Standard_EXPORT   void ReadTypeInformations (Standard_Integer& typeNum, TCollection_AsciiString& typeName) ;
  
  Standard_EXPORT   Storage_Error EndReadTypeSection() ;
  
  Standard_EXPORT   Storage_Error BeginWriteRootSection() ;
  
  Standard_EXPORT   void SetRootSectionSize (const Standard_Integer aSize) ;
  
  Standard_EXPORT   void WriteRoot (const TCollection_AsciiString& rootName, const Standard_Integer aRef, const TCollection_AsciiString& aType) ;
  
  Standard_EXPORT   Storage_Error EndWriteRootSection() ;
  
  Standard_EXPORT   Storage_Error BeginReadRootSection() ;
  
  Standard_EXPORT   Standard_Integer RootSectionSize() ;
  
  Standard_EXPORT   void ReadRoot (TCollection_AsciiString& rootName, Standard_Integer& aRef, TCollection_AsciiString& aType) ;
  
  Standard_EXPORT   Storage_Error EndReadRootSection() ;
  
  Standard_EXPORT   Storage_Error BeginWriteRefSection() ;
  
  Standard_EXPORT   void SetRefSectionSize (const Standard_Integer aSize) ;
  
  Standard_EXPORT   void WriteReferenceType (const Standard_Integer reference, const Standard_Integer typeNum) ;
  
  Standard_EXPORT   Storage_Error EndWriteRefSection() ;
  
  Standard_EXPORT   Storage_Error BeginReadRefSection() ;
  
  Standard_EXPORT   Standard_Integer RefSectionSize() ;
  
  Standard_EXPORT   void ReadReferenceType (Standard_Integer& reference, Standard_Integer& typeNum) ;
  
  Standard_EXPORT   Storage_Error EndReadRefSection() ;
  
  Standard_EXPORT   Storage_Error BeginWriteDataSection() ;
  
  Standard_EXPORT   void WritePersistentObjectHeader (const Standard_Integer aRef, const Standard_Integer aType) ;
  
  Standard_EXPORT   void BeginWritePersistentObjectData() ;
  
  Standard_EXPORT   void BeginWriteObjectData() ;
  
  Standard_EXPORT   void EndWriteObjectData() ;
  
  Standard_EXPORT   void EndWritePersistentObjectData() ;
  
  Standard_EXPORT   Storage_Error EndWriteDataSection() ;
  
  Standard_EXPORT   Storage_Error BeginReadDataSection() ;
  
  Standard_EXPORT   void ReadPersistentObjectHeader (Standard_Integer& aRef, Standard_Integer& aType) ;
  
  Standard_EXPORT   void BeginReadPersistentObjectData() ;
  
  Standard_EXPORT   void BeginReadObjectData() ;
  
  Standard_EXPORT   void EndReadObjectData() ;
  
  Standard_EXPORT   void EndReadPersistentObjectData() ;
  
  Standard_EXPORT   Storage_Error EndReadDataSection() ;
  
  Standard_EXPORT   void SkipObject() ;
  
  Standard_EXPORT   Storage_BaseDriver& PutReference (const Standard_Integer aValue) ;
  
  Standard_EXPORT   Storage_BaseDriver& PutCharacter (const Standard_Character aValue) ;
  Storage_BaseDriver& operator << (const Standard_Character aValue) 
{
  return PutCharacter(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& PutExtCharacter (const Standard_ExtCharacter aValue) ;
  Storage_BaseDriver& operator << (const Standard_ExtCharacter aValue) 
{
  return PutExtCharacter(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& PutInteger (const Standard_Integer aValue) ;
  Storage_BaseDriver& operator << (const Standard_Integer aValue) 
{
  return PutInteger(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& PutBoolean (const Standard_Boolean aValue) ;
  Storage_BaseDriver& operator << (const Standard_Boolean aValue) 
{
  return PutBoolean(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& PutReal (const Standard_Real aValue) ;
  Storage_BaseDriver& operator << (const Standard_Real aValue) 
{
  return PutReal(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& PutShortReal (const Standard_ShortReal aValue) ;
  Storage_BaseDriver& operator << (const Standard_ShortReal aValue) 
{
  return PutShortReal(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& GetReference (Standard_Integer& aValue) ;
  
  Standard_EXPORT   Storage_BaseDriver& GetCharacter (Standard_Character& aValue) ;
  Storage_BaseDriver& operator >> (Standard_Character& aValue) 
{
  return GetCharacter(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& GetExtCharacter (Standard_ExtCharacter& aValue) ;
  Storage_BaseDriver& operator >> (Standard_ExtCharacter& aValue) 
{
  return GetExtCharacter(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& GetInteger (Standard_Integer& aValue) ;
  Storage_BaseDriver& operator >> (Standard_Integer& aValue) 
{
  return GetInteger(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& GetBoolean (Standard_Boolean& aValue) ;
  Storage_BaseDriver& operator >> (Standard_Boolean& aValue) 
{
  return GetBoolean(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& GetReal (Standard_Real& aValue) ;
  Storage_BaseDriver& operator >> (Standard_Real& aValue) 
{
  return GetReal(aValue);
}
  
  Standard_EXPORT   Storage_BaseDriver& GetShortReal (Standard_ShortReal& aValue) ;
  Storage_BaseDriver& operator >> (Standard_ShortReal& aValue) 
{
  return GetShortReal(aValue);
}
  

  //! Closes the file driven by this driver. This file was
  //! opened by the last call to the function Open.
  //! The function returns Storage_VSOk if the
  //! closure is correctly done, or any other value of
  //! the Storage_Error enumeration which specifies the problem encountered.
  Standard_EXPORT   Storage_Error Close() ;
  
  Standard_EXPORT   void Destroy() ;
~FSD_File()
{
  Destroy();
}




protected:

  
  //! read from the current position to the end of line.
  Standard_EXPORT   void ReadLine (TCollection_AsciiString& buffer) ;
  
  //! read from the current position to the next white space or end of line.
  Standard_EXPORT   void ReadWord (TCollection_AsciiString& buffer) ;
  
  //! read extended chars (unicode) from the current position to the end of line.
  Standard_EXPORT   void ReadExtendedLine (TCollection_ExtendedString& buffer) ;
  
  //! write from the current position to the end of line.
  Standard_EXPORT   void WriteExtendedLine (const TCollection_ExtendedString& buffer) ;
  
  //! read <rsize> character from the current position.
  Standard_EXPORT   void ReadChar (TCollection_AsciiString& buffer, const Standard_Size rsize) ;
  
  //! read from the first none space character position to the end of line.
  Standard_EXPORT   void ReadString (TCollection_AsciiString& buffer) ;
  
  Standard_EXPORT   void FlushEndOfLine() ;
  
  Standard_EXPORT   Storage_Error FindTag (const Standard_CString aTag) ;




private:

  
  Standard_EXPORT static Standard_CString MagicNumber() ;


  FSD_FStream myStream;


};







#endif // _FSD_File_HeaderFile
