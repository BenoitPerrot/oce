// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_ReportEntity_HeaderFile
#define _Interface_ReportEntity_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Interface_ReportEntity.hxx>

#include <Handle_Interface_Check.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
class Interface_Check;
class Standard_Transient;


//! A ReportEntity is produced to aknowledge and memorize the
//! binding between a Check and an Entity. The Check can bring
//! Fails (+ Warnings if any), or only Warnings. If it is empty,
//! the Report Entity is for an Unknown Entity.
//!
//! The ReportEntity brings : the Concerned Entity, the
//! Check, and if the Entity is empty (Fails due to Read
//! Errors, hence the Entity could not be loaded), a Content.
//! The Content is itself an Transient Object, but remains in a
//! literal form : it is an "Unknown Entity". If the Concerned
//! Entity is itself Unknown, Concerned and Content are equal.
//!
//! According to the Check, if it brings Fail messages,
//! the ReportEntity is an "Error Entity", the Concerned Entity is
//! an "Erroneous Entity". Else it is a "Correction Entity", the
//! Concerned Entity is a "Corrected Entity". With no Check
//! message and if Concerened and Content are equal, it reports
//! for an "Unknown Entity".
//!
//! Each norm must produce its own type of Unknown Entity, but can
//! use the class UndefinedContent to brings parameters : it is
//! enough for most of information and avoids to redefine them,
//! only the specific part remains to be defined for each norm.
class Interface_ReportEntity : public MMgt_TShared
{

public:

  
  //! Creates a ReportEntity for an Unknown Entity : Check is empty,
  //! and Concerned equates Content (i.e. the Unknown Entity)
  Standard_EXPORT Interface_ReportEntity(const Handle(Standard_Transient)& unknown);
  
  //! Creates a ReportEntity with its features :
  //! - <acheck> is the Check to be memorised
  //! - <concerned> is the Entity to which the Check is bound
  //! Later, a Content can be set : it is required for an Error
  Standard_EXPORT Interface_ReportEntity(const Handle(Interface_Check)& acheck, const Handle(Standard_Transient)& concerned);
  
  //! Sets a Content : it brings non interpreted data which belong
  //! to the Concerned Entity. It can be empty then loaded later.
  //! Remark that for an Unknown Entity, Content is set by Create.
  Standard_EXPORT   void SetContent (const Handle(Standard_Transient)& content) ;
  
  //! Returns the stored Check
  Standard_EXPORT  const  Handle(Interface_Check)& Check()  const;
  
  //! Returns the stored Check in order to change it
  Standard_EXPORT   Handle(Interface_Check)& CCheck() ;
  
  //! Returns the stored Concerned Entity. It equates the Content
  //! in the case of an Unknown Entity
  Standard_EXPORT   Handle(Standard_Transient) Concerned()  const;
  
  //! Returns True if a Content is stored (it can equate Concerned)
  Standard_EXPORT   Standard_Boolean HasContent()  const;
  
  //! Returns True if a Content is stored AND differs from Concerned
  //! (i.e. redefines content) : used when Concerned could not be
  //! loaded
  Standard_EXPORT   Standard_Boolean HasNewContent()  const;
  
  //! Returns the stored Content, or a Null Handle
  //! Remark that it must be an "Unknown Entity" suitable for
  //! the norm of the containing Model
  Standard_EXPORT   Handle(Standard_Transient) Content()  const;
  
  //! Returns True for an Error Entity, i.e. if the Check
  //! brings at least one Fail message
  Standard_EXPORT   Standard_Boolean IsError()  const;
  
  //! Returns True for an Unknown Entity, i,e. if the Check
  //! is empty and Concerned equates Content
  Standard_EXPORT   Standard_Boolean IsUnknown()  const;




  DEFINE_STANDARD_RTTI(Interface_ReportEntity)

protected:




private: 


  Handle(Interface_Check) thecheck;
  Handle(Standard_Transient) theconcerned;
  Handle(Standard_Transient) thecontent;


};







#endif // _Interface_ReportEntity_HeaderFile
