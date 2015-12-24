// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_EdgesBlock_HeaderFile
#define _HLRAlgo_EdgesBlock_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/HLRAlgo/Handle_HLRAlgo_EdgesBlock.hxx>

#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_Array1OfBoolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Address.hxx>


//! An EdgesBlock is a set of Edges. It is used by the
//! DataStructure to structure the Edges.
//!
//! An EdgesBlock contains :
//!
//! * An Array  of index of Edges.
//!
//! * An Array of flagsf ( Orientation
//! OutLine
//! Internal
//! Double
//! IsoLine)
class HLRAlgo_EdgesBlock : public MMgt_TShared
{

public:

  
  //! Create a Block of Edges for a wire.
  Standard_EXPORT HLRAlgo_EdgesBlock(const Standard_Integer NbEdges);
  
      Standard_Integer NbEdges()  const;
  
      void Edge (const Standard_Integer I, const Standard_Integer EI) ;
  
      Standard_Integer Edge (const Standard_Integer I)  const;
  
      void Orientation (const Standard_Integer I, const TopAbs_Orientation Or) ;
  
      TopAbs_Orientation Orientation (const Standard_Integer I)  const;
  
      Standard_Boolean OutLine (const Standard_Integer I)  const;
  
      void OutLine (const Standard_Integer I, const Standard_Boolean B) ;
  
      Standard_Boolean Internal (const Standard_Integer I)  const;
  
      void Internal (const Standard_Integer I, const Standard_Boolean B) ;
  
      Standard_Boolean Double (const Standard_Integer I)  const;
  
      void Double (const Standard_Integer I, const Standard_Boolean B) ;
  
      Standard_Boolean IsoLine (const Standard_Integer I)  const;
  
      void IsoLine (const Standard_Integer I, const Standard_Boolean B) ;
  
  Standard_EXPORT   void UpdateMinMax (const Standard_Address TotMinMax) ;
  
      Standard_Address MinMax()  const;




  DEFINE_STANDARD_RTTI(HLRAlgo_EdgesBlock)

protected:




private: 


  TColStd_Array1OfInteger myEdges;
  TColStd_Array1OfInteger myFlags;
  Standard_Integer myMinMax[16];


};


#include <ModelingAlgorithms/HLRAlgo/HLRAlgo_EdgesBlock.lxx>





#endif // _HLRAlgo_EdgesBlock_HeaderFile
