// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_PathParser_HeaderFile
#define _TDocStd_PathParser_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_ExtendedString.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TCollection_ExtendedString;


//! parse an OS path
class TDocStd_PathParser 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TDocStd_PathParser(const TCollection_ExtendedString& path);
  
  Standard_EXPORT   void Parse() ;
  
  Standard_EXPORT   TCollection_ExtendedString Trek()  const;
  
  Standard_EXPORT   TCollection_ExtendedString Name()  const;
  
  Standard_EXPORT   TCollection_ExtendedString Extension()  const;
  
  Standard_EXPORT   TCollection_ExtendedString Path()  const;
  
  Standard_EXPORT   Standard_Integer Length()  const;




protected:





private:



  TCollection_ExtendedString myPath;
  TCollection_ExtendedString myExtension;
  TCollection_ExtendedString myTrek;
  TCollection_ExtendedString myName;


};







#endif // _TDocStd_PathParser_HeaderFile
