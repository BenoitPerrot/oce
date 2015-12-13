// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_MapIteratorOfMapOfInteractive_HeaderFile
#define _AIS_MapIteratorOfMapOfInteractive_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/TCollection/TCollection_BasicMapIterator.hxx>
#include <Handle_AIS_InteractiveObject.hxx>
#include <Handle_AIS_StdMapNodeOfMapOfInteractive.hxx>
class Standard_NoSuchObject;
class AIS_InteractiveObject;
class TColStd_MapTransientHasher;
class AIS_MapOfInteractive;
class AIS_StdMapNodeOfMapOfInteractive;



class AIS_MapIteratorOfMapOfInteractive  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AIS_MapIteratorOfMapOfInteractive();
  
  Standard_EXPORT AIS_MapIteratorOfMapOfInteractive(const AIS_MapOfInteractive& aMap);
  
  Standard_EXPORT   void Initialize (const AIS_MapOfInteractive& aMap) ;
  
  Standard_EXPORT  const  Handle(AIS_InteractiveObject)& Key()  const;




protected:





private:





};







#endif // _AIS_MapIteratorOfMapOfInteractive_HeaderFile
