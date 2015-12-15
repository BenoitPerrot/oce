// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Bnd_B2d_HeaderFile
#define _Bnd_B2d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Mathematics/Primitives/gp_XY.hxx>
class gp_XY;
class gp_Pnt2d;
class gp_Trsf2d;
class gp_Ax2d;



class Bnd_B2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Bnd_B2d();
  
    Bnd_B2d(const gp_XY& theCenter, const gp_XY& theHSize);
  
      Standard_Boolean IsVoid()  const;
  
      void Clear() ;
  
  Standard_EXPORT   void Add (const gp_XY& thePnt) ;
  
  Standard_EXPORT   void Add (const gp_Pnt2d& thePnt) ;
  
      void Add (const Bnd_B2d& theBox) ;
  
      gp_XY CornerMin()  const;
  
      gp_XY CornerMax()  const;
  
      Standard_Real SquareExtent()  const;
  
      void Enlarge (const Standard_Real theDiff) ;
  
  Standard_EXPORT   Standard_Boolean Limit (const Bnd_B2d& theOtherBox) ;
  
  Standard_EXPORT   Bnd_B2d Transformed (const gp_Trsf2d& theTrsf)  const;
  
      Standard_Boolean IsOut (const gp_XY& thePnt)  const;
  
  Standard_EXPORT   Standard_Boolean IsOut (const gp_XY& theCenter, const Standard_Real theRadius, const Standard_Boolean isCircleHollow = Standard_False)  const;
  
      Standard_Boolean IsOut (const Bnd_B2d& theOtherBox)  const;
  
  Standard_EXPORT   Standard_Boolean IsOut (const Bnd_B2d& theOtherBox, const gp_Trsf2d& theTrsf)  const;
  
  Standard_EXPORT   Standard_Boolean IsOut (const gp_Ax2d& theLine)  const;
  
  Standard_EXPORT   Standard_Boolean IsOut (const gp_XY& theP0, const gp_XY& theP1)  const;
  
      Standard_Boolean IsIn (const Bnd_B2d& theBox)  const;
  
  Standard_EXPORT   Standard_Boolean IsIn (const Bnd_B2d& theBox, const gp_Trsf2d& theTrsf)  const;
  
      void SetCenter (const gp_XY& theCenter) ;
  
      void SetHSize (const gp_XY& theHSize) ;




protected:



  Standard_Real myCenter[2];
  Standard_Real myHSize[2];


private:





};

#define RealType Standard_Real
#define RealType_hxx <Foundation/Standard/Standard_Real.hxx>
#define Bnd_B2x Bnd_B2d
#define Bnd_B2x_hxx <Mathematics/BoundingVolumes/Bnd_B2d.hxx>

#include <Mathematics/BoundingVolumes/Bnd_B2x.lxx>

#undef RealType
#undef RealType_hxx
#undef Bnd_B2x
#undef Bnd_B2x_hxx




#endif // _Bnd_B2d_HeaderFile
