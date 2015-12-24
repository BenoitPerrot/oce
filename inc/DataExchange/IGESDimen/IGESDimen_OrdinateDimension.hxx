// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_OrdinateDimension_HeaderFile
#define _IGESDimen_OrdinateDimension_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESDimen/Handle_IGESDimen_OrdinateDimension.hxx>

#include <DataExchange/IGESDimen/Handle_IGESDimen_GeneralNote.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <DataExchange/IGESDimen/Handle_IGESDimen_WitnessLine.hxx>
#include <DataExchange/IGESDimen/Handle_IGESDimen_LeaderArrow.hxx>
#include <DataExchange/IGESData/IGESData_IGESEntity.hxx>
class IGESDimen_GeneralNote;
class IGESDimen_WitnessLine;
class IGESDimen_LeaderArrow;


//! defines IGES Ordinate Dimension, Type <218> Form <0, 1>,
//! in package IGESDimen
//! Note   : The ordinate dimension entity is used to
//! indicate dimensions from a common base line.
//! Dimensioning is only permitted along the XT
//! or YT axis.
class IGESDimen_OrdinateDimension : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_OrdinateDimension();
  
  Standard_EXPORT   void Init (const Handle(IGESDimen_GeneralNote)& aNote, const Standard_Boolean aType, const Handle(IGESDimen_WitnessLine)& aLine, const Handle(IGESDimen_LeaderArrow)& anArrow) ;
  
  //! returns True if Witness Line and False if Leader (only for Form 0)
  Standard_EXPORT   Standard_Boolean IsLine()  const;
  
  //! returns True if Leader and False if Witness Line (only for Form 0)
  Standard_EXPORT   Standard_Boolean IsLeader()  const;
  
  //! returns the General Note entity associated.
  Standard_EXPORT   Handle(IGESDimen_GeneralNote) Note()  const;
  
  //! returns the Witness Line associated or Null handle
  Standard_EXPORT   Handle(IGESDimen_WitnessLine) WitnessLine()  const;
  
  //! returns the Leader associated or Null handle
  Standard_EXPORT   Handle(IGESDimen_LeaderArrow) Leader()  const;




  DEFINE_STANDARD_RTTI(IGESDimen_OrdinateDimension)

protected:




private: 


  Handle(IGESDimen_GeneralNote) theNote;
  Standard_Boolean isItLine;
  Handle(IGESDimen_WitnessLine) theWitnessLine;
  Handle(IGESDimen_LeaderArrow) theLeader;


};







#endif // _IGESDimen_OrdinateDimension_HeaderFile
