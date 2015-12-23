// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_IntPackedMap_HeaderFile
#define _TDataStd_IntPackedMap_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_IntPackedMap.hxx>

#include <Handle_TColStd_HPackedMapOfInteger.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <Foundation/TColStd/TColStd_PackedMapOfInteger.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Handle_TDF_DeltaOnModification.hxx>
class TColStd_HPackedMapOfInteger;
class TDataStd_DeltaOnModificationOfIntPackedMap;
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DeltaOnModification;


//! Attribute for storing TColStd_PackedMapOfInteger
class TDataStd_IntPackedMap : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  //! Returns the GUID of the attribute.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Finds or creates an integer map attribute on the given label.
  //! If <isDelta> == False, DefaultDeltaOnModification is used.
  //! If <isDelta> == True, DeltaOnModification of the current attribute is used.
  //! If attribute is already set, input parameter <isDelta> is refused and the found
  //! attribute returned.
  //! Attribute methods
  //! ===================
  Standard_EXPORT static   Handle(TDataStd_IntPackedMap) Set (const TDF_Label& label, const Standard_Boolean isDelta = Standard_False) ;
  
  Standard_EXPORT TDataStd_IntPackedMap();
  
  Standard_EXPORT   Standard_Boolean ChangeMap (const Handle(TColStd_HPackedMapOfInteger)& theMap) ;
  
     const  TColStd_PackedMapOfInteger& GetMap()  const;
  
     const  Handle(TColStd_HPackedMapOfInteger)& GetHMap()  const;
  
  Standard_EXPORT   Standard_Boolean Clear() ;
  
  Standard_EXPORT   Standard_Boolean Add (const Standard_Integer theKey) ;
  
  Standard_EXPORT   Standard_Boolean Remove (const Standard_Integer theKey) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const Standard_Integer theKey)  const;
  
      Standard_Integer Extent()  const;
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Boolean GetDelta()  const;
  
  //! for  internal  use  only!
      void SetDelta (const Standard_Boolean isDelta) ;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;
  
  //! Makes a DeltaOnModification between <me> and
  //! <anOldAttribute>.
  Standard_EXPORT virtual   Handle(TDF_DeltaOnModification) DeltaOnModification (const Handle(TDF_Attribute)& anOldAttribute)  const;


friend class TDataStd_DeltaOnModificationOfIntPackedMap;


  DEFINE_STANDARD_RTTI(TDataStd_IntPackedMap)

protected:




private: 

  
      void RemoveMap() ;

  Handle(TColStd_HPackedMapOfInteger) myMap;
  Standard_Boolean myIsDelta;


};


#include <OCAF/TDataStd/TDataStd_IntPackedMap.lxx>





#endif // _TDataStd_IntPackedMap_HeaderFile
