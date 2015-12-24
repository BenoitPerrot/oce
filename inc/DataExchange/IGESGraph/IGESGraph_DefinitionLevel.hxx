// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_DefinitionLevel_HeaderFile
#define _IGESGraph_DefinitionLevel_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <DataExchange/IGESGraph/Handle_IGESGraph_DefinitionLevel.hxx>

#include <Foundation/TColStd/Handle_TColStd_HArray1OfInteger.hxx>
#include <DataExchange/IGESData/IGESData_LevelListEntity.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TColStd_HArray1OfInteger;
class Standard_OutOfRange;


//! defines IGESDefinitionLevel, Type <406> Form <1>
//! in package IGESGraph
//!
//! Indicates the no. of levels on which an entity is
//! defined
class IGESGraph_DefinitionLevel : public IGESData_LevelListEntity
{

public:

  
  Standard_EXPORT IGESGraph_DefinitionLevel();
  
  //! This method is used to set the fields of the class
  //! DefinitionLevel
  //! - allLevelNumbers : Values of Level Numbers
  Standard_EXPORT   void Init (const Handle(TColStd_HArray1OfInteger)& allLevelNumbers) ;
  
  //! returns the number of property values in <me>
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! Must return the count of levels (== NbPropertyValues)
  Standard_EXPORT   Standard_Integer NbLevelNumbers()  const;
  
  //! returns the Level Number of <me> indicated by <LevelIndex>
  //! raises an exception if LevelIndex is <= 0 or
  //! LevelIndex > NbPropertyValues
  Standard_EXPORT   Standard_Integer LevelNumber (const Standard_Integer LevelIndex)  const;




  DEFINE_STANDARD_RTTI(IGESGraph_DefinitionLevel)

protected:




private: 


  Handle(TColStd_HArray1OfInteger) theLevelNumbers;


};







#endif // _IGESGraph_DefinitionLevel_HeaderFile
