// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_PolyInternalNode_HeaderFile
#define _HLRAlgo_PolyInternalNode_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_PolyInternalNode.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_Address.hxx>


//! to Update OutLines.
class HLRAlgo_PolyInternalNode : public MMgt_TShared
{

public:

  
    HLRAlgo_PolyInternalNode();
  
      Standard_Address Indices()  const;
  
      Standard_Address RValues()  const;




  DEFINE_STANDARD_RTTI(HLRAlgo_PolyInternalNode)

protected:




private: 


  Standard_Integer myIndices[4];
  Standard_Real myRValues[11];


};


#include <HLRAlgo_PolyInternalNode.lxx>





#endif // _HLRAlgo_PolyInternalNode_HeaderFile
