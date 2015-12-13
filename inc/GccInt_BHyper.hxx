// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GccInt_BHyper_HeaderFile
#define _GccInt_BHyper_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_GccInt_BHyper.hxx>

#include <gp_Hypr2d.hxx>
#include <GccInt_Bisec.hxx>
#include <GccInt_IType.hxx>
class gp_Hypr2d;


//! Describes a hyperbola as a bisecting curve between two
//! 2D geometric objects (such as circles or points).
class GccInt_BHyper : public GccInt_Bisec
{

public:

  

  //! Constructs a bisecting curve whose geometry is the 2D hyperbola Hyper.
  Standard_EXPORT GccInt_BHyper(const gp_Hypr2d& Hyper);
  
  //! Returns a 2D hyperbola which is the geometry of this bisecting curve.
  Standard_EXPORT virtual   gp_Hypr2d Hyperbola()  const;
  
  //! Returns GccInt_Hpr, which is the type of any GccInt_BHyper bisecting curve.
  Standard_EXPORT   GccInt_IType ArcType()  const;




  DEFINE_STANDARD_RTTI(GccInt_BHyper)

protected:




private: 


  gp_Hypr2d hyp;


};







#endif // _GccInt_BHyper_HeaderFile
