// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPDS_PassKeyBoolean_HeaderFile
#define _BOPDS_PassKeyBoolean_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <BOPDS_PassKey.hxx>
#include <ModelingAlgorithms/BOPCol/BOPCol_BaseAllocator.hxx>



class BOPDS_PassKeyBoolean  : public BOPDS_PassKey
{
public:

  DEFINE_STANDARD_ALLOC

  
    BOPDS_PassKeyBoolean();
virtual ~BOPDS_PassKeyBoolean();
  
    BOPDS_PassKeyBoolean(const BOPCol_BaseAllocator& theAllocator);
  
    BOPDS_PassKeyBoolean(const BOPDS_PassKeyBoolean& Other);
  
      void SetFlag (const Standard_Boolean theFlag) ;
BOPDS_PassKeyBoolean& operator =(const BOPDS_PassKeyBoolean& );
  
      Standard_Boolean Flag()  const;




protected:



  Standard_Boolean myFlag;


private:





};


#include <BOPDS_PassKeyBoolean.lxx>





#endif // _BOPDS_PassKeyBoolean_HeaderFile
