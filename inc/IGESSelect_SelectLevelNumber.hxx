// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectLevelNumber_HeaderFile
#define _IGESSelect_SelectLevelNumber_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SelectLevelNumber.hxx>

#include <Handle_IFSelect_IntParam.hxx>
#include <IFSelect_SelectExtract.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
class IFSelect_IntParam;
class Standard_Transient;
class Interface_InterfaceModel;
class TCollection_AsciiString;


//! This selection looks at Level Number of IGES Entities :
//! it considers items attached, either to a single level with a
//! given value, or to a level list which contains this value
//!
//! Level = 0  means entities not attached to any level
//!
//! Remark : the class CounterOfLevelNumber gives informations
//! about present levels in a file.
class IGESSelect_SelectLevelNumber : public IFSelect_SelectExtract
{

public:

  
  //! Creates a SelectLevelNumber, with no Level criterium : see
  //! SetLevelNumber. Empty, this selection filters nothing.
  Standard_EXPORT IGESSelect_SelectLevelNumber();
  
  //! Sets a Parameter as Level criterium
  Standard_EXPORT   void SetLevelNumber (const Handle(IFSelect_IntParam)& levnum) ;
  
  //! Returns the Level criterium. NullHandle if not yet set
  //! (interpreted as Level = 0 : no level number attached)
  Standard_EXPORT   Handle(IFSelect_IntParam) LevelNumber()  const;
  
  //! Returns True if <ent> is an IGES Entity with Level Number
  //! admits the criterium (= value if single level, or one of the
  //! attached level numbers = value if level list)
  Standard_EXPORT   Standard_Boolean Sort (const Standard_Integer rank, const Handle(Standard_Transient)& ent, const Handle(Interface_InterfaceModel)& model)  const;
  
  //! Returns the Selection criterium :
  //! "IGES Entity, Level Number admits <nn>" (if nn > 0) or
  //! "IGES Entity attached to no Level" (if nn = 0)
  Standard_EXPORT   TCollection_AsciiString ExtractLabel()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectLevelNumber)

protected:




private: 


  Handle(IFSelect_IntParam) thelevnum;


};







#endif // _IGESSelect_SelectLevelNumber_HeaderFile
