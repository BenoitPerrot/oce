// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_TgtOnCoons_HeaderFile
#define _GeomFill_TgtOnCoons_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_TgtOnCoons.hxx>

#include <ModelingAlgorithms/GeomFill/Handle_GeomFill_CoonsAlgPatch.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/GeomFill/GeomFill_TgtField.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class GeomFill_CoonsAlgPatch;
class gp_Vec;


//! Defines   an   algorithmic  tangents  field   on a
//! boundary of a CoonsAlgPatch.
class GeomFill_TgtOnCoons : public GeomFill_TgtField
{

public:

  
  Standard_EXPORT GeomFill_TgtOnCoons(const Handle(GeomFill_CoonsAlgPatch)& K, const Standard_Integer I);
  
  //! Computes  the value  of the    field of tangency    at
  //! parameter W.
  Standard_EXPORT   gp_Vec Value (const Standard_Real W)  const;
  
  //! Computes the  derivative of  the field of  tangency at
  //! parameter W.
  Standard_EXPORT   gp_Vec D1 (const Standard_Real W)  const;
  
  //! Computes the value and the  derivative of the field of
  //! tangency at parameter W.
  Standard_EXPORT   void D1 (const Standard_Real W, gp_Vec& T, gp_Vec& DT)  const;




  DEFINE_STANDARD_RTTI(GeomFill_TgtOnCoons)

protected:




private: 


  Handle(GeomFill_CoonsAlgPatch) myK;
  Standard_Integer ibound;


};







#endif // _GeomFill_TgtOnCoons_HeaderFile
