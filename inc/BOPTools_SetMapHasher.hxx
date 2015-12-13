// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_SetMapHasher_HeaderFile
#define _BOPTools_SetMapHasher_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class BOPTools_Set;



class BOPTools_SetMapHasher 
{
public:

  DEFINE_STANDARD_ALLOC

  
    static   Standard_Integer HashCode (const BOPTools_Set& aSet, const Standard_Integer Upper) ;
  
    static   Standard_Boolean IsEqual (const BOPTools_Set& aSet1, const BOPTools_Set& aSet2) ;




protected:





private:





};


#include <BOPTools_SetMapHasher.lxx>





#endif // _BOPTools_SetMapHasher_HeaderFile
