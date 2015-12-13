// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_WiresBlock_HeaderFile
#define _HLRAlgo_WiresBlock_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_WiresBlock.hxx>

#include <TColStd_Array1OfTransient.hxx>
#include <Standard_Integer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_HLRAlgo_EdgesBlock.hxx>
#include <Standard_Address.hxx>
class HLRAlgo_EdgesBlock;


//! A WiresBlock is a set of Blocks. It is used by the
//! DataStructure to structure the Edges.
//!
//! A WiresBlock contains :
//!
//! * An Array  of Blocks.
class HLRAlgo_WiresBlock : public MMgt_TShared
{

public:

  
  //! Create a Block of Blocks.
  Standard_EXPORT HLRAlgo_WiresBlock(const Standard_Integer NbWires);
  
  Standard_EXPORT   Standard_Integer NbWires()  const;
  
  Standard_EXPORT   void Set (const Standard_Integer I, const Handle(HLRAlgo_EdgesBlock)& W) ;
  
  Standard_EXPORT   Handle(HLRAlgo_EdgesBlock)& Wire (const Standard_Integer I) ;
  
  Standard_EXPORT   void UpdateMinMax (const Standard_Address TotMinMax) ;
  
      Standard_Address MinMax()  const;




  DEFINE_STANDARD_RTTI(HLRAlgo_WiresBlock)

protected:




private: 


  TColStd_Array1OfTransient myWires;
  Standard_Integer myMinMax[16];


};


#include <HLRAlgo_WiresBlock.lxx>





#endif // _HLRAlgo_WiresBlock_HeaderFile
