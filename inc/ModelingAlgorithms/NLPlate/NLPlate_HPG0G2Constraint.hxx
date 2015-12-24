// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_HPG0G2Constraint_HeaderFile
#define _NLPlate_HPG0G2Constraint_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/NLPlate/Handle_NLPlate_HPG0G2Constraint.hxx>

#include <ModelingAlgorithms/Plate/Plate_D2.hxx>
#include <ModelingAlgorithms/NLPlate/NLPlate_HPG0G1Constraint.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class gp_XY;
class gp_XYZ;
class Plate_D1;
class Plate_D2;


//! define a PinPoint G0+G2  Constraint  used to load a Non Linear
//! Plate
class NLPlate_HPG0G2Constraint : public NLPlate_HPG0G1Constraint
{

public:

  
  Standard_EXPORT NLPlate_HPG0G2Constraint(const gp_XY& UV, const gp_XYZ& Value, const Plate_D1& D1T, const Plate_D2& D2T);
  
  Standard_EXPORT virtual   Standard_Integer ActiveOrder()  const;
  
  Standard_EXPORT virtual  const  Plate_D2& G2Target()  const;




  DEFINE_STANDARD_RTTI(NLPlate_HPG0G2Constraint)

protected:




private: 


  Plate_D2 myG2Target;


};







#endif // _NLPlate_HPG0G2Constraint_HeaderFile
