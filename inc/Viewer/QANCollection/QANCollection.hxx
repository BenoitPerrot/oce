// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_HeaderFile
#define _QANCollection_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Viewer/Draw/Draw_Interpretor.hxx>
class QANCollection_DataMapOfRealPnt;
class QANCollection_IndexedDataMapOfRealPnt;
class QANCollection_DoubleMapOfRealInteger;
class QANCollection_DataMapNodeOfDataMapOfRealPnt;
class QANCollection_DataMapIteratorOfDataMapOfRealPnt;
class QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt;
class QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger;
class QANCollection_DoubleMapIteratorOfDoubleMapOfRealInteger;



class QANCollection 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   void Commands (Draw_Interpretor& DI) ;
  
  Standard_EXPORT static   void CommandsSimple (Draw_Interpretor& DI) ;
  
  Standard_EXPORT static   void CommandsTest (Draw_Interpretor& DI) ;
  
  Standard_EXPORT static   void CommandsPerf (Draw_Interpretor& DI) ;
  
  Standard_EXPORT static   void CommandsAlloc (Draw_Interpretor& DI) ;
  
  Standard_EXPORT static   void CommandsStl (Draw_Interpretor& DI) ;




protected:





private:




friend class QANCollection_DataMapOfRealPnt;
friend class QANCollection_IndexedDataMapOfRealPnt;
friend class QANCollection_DoubleMapOfRealInteger;
friend class QANCollection_DataMapNodeOfDataMapOfRealPnt;
friend class QANCollection_DataMapIteratorOfDataMapOfRealPnt;
friend class QANCollection_IndexedDataMapNodeOfIndexedDataMapOfRealPnt;
friend class QANCollection_DoubleMapNodeOfDoubleMapOfRealInteger;
friend class QANCollection_DoubleMapIteratorOfDoubleMapOfRealInteger;

};







#endif // _QANCollection_HeaderFile
