// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_DataMapIteratorOfMapOfElements_HeaderFile
#define _Geom2dHatch_DataMapIteratorOfMapOfElements_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Handle_Geom2dHatch_DataMapNodeOfMapOfElements.hxx>
class Standard_NoSuchObject;
class Geom2dHatch_Element;
class TColStd_MapIntegerHasher;
class Geom2dHatch_MapOfElements;
class Geom2dHatch_DataMapNodeOfMapOfElements;



class Geom2dHatch_DataMapIteratorOfMapOfElements  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dHatch_DataMapIteratorOfMapOfElements();
  
  Standard_EXPORT Geom2dHatch_DataMapIteratorOfMapOfElements(const Geom2dHatch_MapOfElements& aMap);
  
  Standard_EXPORT   void Initialize (const Geom2dHatch_MapOfElements& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  Geom2dHatch_Element& Value()  const;




protected:





private:





};







#endif // _Geom2dHatch_DataMapIteratorOfMapOfElements_HeaderFile
