// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_IntercharacterSpacing_HeaderFile
#define _IGESGraph_IntercharacterSpacing_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESGraph_IntercharacterSpacing.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>


//! defines IGESIntercharacterSpacing, Type <406> Form <18>
//! in package IGESGraph
//!
//! Specifies the gap between letters when fixed-pitch
//! spacing is used
class IGESGraph_IntercharacterSpacing : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGraph_IntercharacterSpacing();
  
  //! This method is used to set the fields of the class
  //! IntercharacterSpacing
  //! - nbProps  : Number of property values (NP = 1)
  //! - anISpace : Intercharacter spacing percentage
  Standard_EXPORT   void Init (const Standard_Integer nbProps, const Standard_Real anISpace) ;
  
  //! returns the number of property values in <me>
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the Intercharacter Space of <me> in percentage
  //! of the text height (Range = 0..100)
  Standard_EXPORT   Standard_Real ISpace()  const;




  DEFINE_STANDARD_RTTI(IGESGraph_IntercharacterSpacing)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Real theISpace;


};







#endif // _IGESGraph_IntercharacterSpacing_HeaderFile
