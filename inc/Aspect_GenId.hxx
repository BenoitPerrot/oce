// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_GenId_HeaderFile
#define _Aspect_GenId_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <TColStd_ListOfInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Aspect_IdentDefinitionError;


//! This class permits the creation and control of integer identifiers.
class Aspect_GenId 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an available set of identifiers with the lower bound 0 and the upper bound INT_MAX / 2.
  Standard_EXPORT Aspect_GenId();
  
  //! Creates an available set of identifiers with specified range.
  //! Raises IdentDefinitionError if theUpper is less than theLow.
  Standard_EXPORT Aspect_GenId(const Standard_Integer theLow, const Standard_Integer theUpper);
  
  //! Free all identifiers - make the whole range available again.
  Standard_EXPORT   void Free() ;
  
  //! Free specified identifier. Warning - method has no protection against double-freeing!
  Standard_EXPORT   void Free (const Standard_Integer theId) ;
  
  //! Returns true if there are available identifiers in range.
  Standard_EXPORT   Standard_Boolean HasFree()  const;
  
  //! Returns the number of available identifiers.
  Standard_EXPORT   Standard_Integer Available()  const;
  
  //! Returns the lower identifier in range.
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  //! Returns the next available identifier.
  //! Warning: Raises IdentDefinitionError if all identifiers are busy.
  Standard_EXPORT   Standard_Integer Next() ;
  
  //! Returns the upper identifier in range.
  Standard_EXPORT   Standard_Integer Upper()  const;




protected:





private:



  Standard_Integer myFreeCount;
  Standard_Integer myLength;
  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  TColStd_ListOfInteger myFreeIds;


};







#endif // _Aspect_GenId_HeaderFile
