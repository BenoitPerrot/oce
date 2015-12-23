// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_RealArray_HeaderFile
#define _TDataStd_RealArray_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TDataStd_RealArray.hxx>

#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <OCAF/TDF/TDF_Attribute.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
#include <Handle_TDF_DeltaOnModification.hxx>
class TColStd_HArray1OfReal;
class TDataStd_DeltaOnModificationOfRealArray;
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DeltaOnModification;


//! A framework for an attribute composed of a real number array.
class TDataStd_RealArray : public TDF_Attribute
{

public:

  
  //! class methods
  //! =============
  //! Returns the GUID for arrays of reals.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Finds or creates on the <label> a real array attribute
  //! with the specified <lower> and <upper> boundaries.
  //! If attribute is already set, all input parameters are refused and the found
  //! attribute is returned.
  Standard_EXPORT static   Handle(TDataStd_RealArray) Set (const TDF_Label& label, const Standard_Integer lower, const Standard_Integer upper, const Standard_Boolean isDelta = Standard_False) ;
  
  //! Initialize the inner array with bounds from <lower> to <upper>
  Standard_EXPORT   void Init (const Standard_Integer lower, const Standard_Integer upper) ;
  
  //! Sets  the   <Index>th  element  of   the  array to <Value>
  //! OutOfRange exception is raised if <Index> doesn't respect Lower and Upper bounds of the internal  array.
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Standard_Real Value) ;
  
  //! Return the value of  the  <Index>th element of the array
  Standard_EXPORT   Standard_Real Value (const Standard_Integer Index)  const;
  Standard_Real operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  //! Returns the lower boundary of the array.
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  //! Returns the upper boundary of the array.
  Standard_EXPORT   Standard_Integer Upper()  const;
  
  //! Returns the number of elements of the array of reals
  //! in terms of the number of elements it contains.
  Standard_EXPORT   Standard_Integer Length()  const;
  
  //! Sets the inner array <myValue> of the RealArray attribute
  //! to <newArray>. If value of <newArray> differs from <myValue>,
  //! Backup performed and myValue refers to new instance of HArray1OfReal
  //! that holds <newArray> values
  //! If <isCheckItems> equal True each item of <newArray> will be checked with each
  //! item of <myValue> for coincidence (to avoid backup).
  Standard_EXPORT   void ChangeArray (const Handle(TColStd_HArray1OfReal)& newArray, const Standard_Boolean isCheckItems = Standard_True) ;
  
  //! Returns the handle of this array of reals.
     const  Handle(TColStd_HArray1OfReal) Array()  const;
  
      Standard_Boolean GetDelta()  const;
  
  //! for  internal  use  only!
      void SetDelta (const Standard_Boolean isDelta) ;
  
  Standard_EXPORT TDataStd_RealArray();
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  //! Note. Uses inside ChangeArray() method
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;
  
  //! Makes a DeltaOnModification between <me> and
  //! <anOldAttribute>.
  Standard_EXPORT virtual   Handle(TDF_DeltaOnModification) DeltaOnModification (const Handle(TDF_Attribute)& anOldAttribute)  const;


friend class TDataStd_DeltaOnModificationOfRealArray;


  DEFINE_STANDARD_RTTI(TDataStd_RealArray)

protected:




private: 

  
      void RemoveArray() ;

  Handle(TColStd_HArray1OfReal) myValue;
  Standard_Boolean myIsDelta;


};


#include <OCAF/TDataStd/TDataStd_RealArray.lxx>





#endif // _TDataStd_RealArray_HeaderFile
