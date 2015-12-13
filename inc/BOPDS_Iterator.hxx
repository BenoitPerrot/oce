// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPDS_Iterator_HeaderFile
#define _BOPDS_Iterator_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BOPCol_BaseAllocator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <BOPDS_PDS.hxx>
#include <BOPDS_VectorOfListOfPassKeyBoolean.hxx>
#include <BOPDS_ListIteratorOfListOfPassKeyBoolean.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TopAbs_ShapeEnum.hxx>
class BOPDS_DS;



//! The class BOPDS_Iterator is
//! 1.to compute intersections between BRep sub-shapes
//! of arguments of an operation (see the class BOPDS_DS)
//! in terms of theirs bounding boxes
//! 2.provides interface to iterare the pairs of
//! intersected sub-shapes of given type
class BOPDS_Iterator 
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! Empty contructor
  Standard_EXPORT BOPDS_Iterator();
Standard_EXPORT virtual ~BOPDS_Iterator();
  

  //! Contructor
  //! theAllocator - the allocator to manage the memory
  Standard_EXPORT BOPDS_Iterator(const BOPCol_BaseAllocator& theAllocator);
  

  //! Modifier
  //! Sets the data structure <pDS> to process
  Standard_EXPORT   void SetDS (const BOPDS_PDS& pDS) ;
  

  //! Selector
  //! Returns the data structure
  Standard_EXPORT  const  BOPDS_DS& DS()  const;
  

  //! Initializes the  iterator
  //! theType1 - the first type of shape
  //! theType2 - the second type of shape
  Standard_EXPORT   void Initialize (const TopAbs_ShapeEnum theType1, const TopAbs_ShapeEnum theType2) ;
  

  //! Returns  true if still there are pairs
  //! of intersected shapes
  Standard_EXPORT   Standard_Boolean More()  const;
  

  //! Moves iterations ahead
  Standard_EXPORT   void Next() ;
  

  //! Returns indices (DS) of intersected shapes
  //! theIndex1 - the index of the first shape
  //! theIndex2 - the index of the second shape
  //! theWithSubShape - flag. True if the sub-shapes of
  //! shapes are intersected
  Standard_EXPORT   void Value (Standard_Integer& theIndex1, Standard_Integer& theIndex2, Standard_Boolean& theWithSubShape)  const;
  

  //! Perform the intersection algorithm and prepare
  //! the results to be used
  Standard_EXPORT virtual   void Prepare() ;
  

  //! Returns the number of intersections founded
  Standard_EXPORT   Standard_Integer ExpectedLength()  const;
  

  //! Returns the block length
  Standard_EXPORT   Standard_Integer BlockLength()  const;
  
  //! Set the flag of parallel processing
  //! if <theFlag> is true  the parallel processing is switched on
  //! if <theFlag> is false the parallel processing is switched off
  Standard_EXPORT   void SetRunParallel (const Standard_Boolean theFlag) ;
  
  //! Returns the flag of parallel processing
  Standard_EXPORT   Standard_Boolean RunParallel()  const;




protected:

  
  Standard_EXPORT virtual   void Intersect() ;


  BOPCol_BaseAllocator myAllocator;
  Standard_Integer myLength;
  BOPDS_PDS myDS;
  BOPDS_VectorOfListOfPassKeyBoolean myLists;
  BOPDS_ListIteratorOfListOfPassKeyBoolean myIterator;
  Standard_Boolean myRunParallel;


private:





};







#endif // _BOPDS_Iterator_HeaderFile
