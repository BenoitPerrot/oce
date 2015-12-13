// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_LOD_HeaderFile
#define _Vrml_LOD_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Vrml_LOD.hxx>

#include <Handle_TColStd_HArray1OfReal.hxx>
#include <gp_Vec.hxx>
#include <Standard_Boolean.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_OStream.hxx>
class TColStd_HArray1OfReal;
class gp_Vec;


//! defines a LOD (level of detailization) node of VRML specifying properties
//! of geometry  and its appearance.
//! This  group  node  is  used  to  allow  applications  to  switch  between
//! various  representations  of  objects  automatically. The  children  of  this
//! node  typically  represent  the  same  object  or  objects  at  the  varying
//! of  Levels  Of  Detail  (LOD),  from  highest  detail  to  lowest.
//!
//! The  specified  center  point  of  the  LOD  is  transformed  by  current
//! transformation  into  world  space,  and  yhe  distancefrom  the  transformed
//! center  to  the  world-space  eye  point  is  calculated.
//! If  thedistance  is  less  than  the  first  value  in  the  ranges  array,
//! than  the  first  child  of  the  LOD  group  is  drawn.  If  between
//! the  first  and  second  values  in  the  range  array,  the  second  child
//! is  drawn,  etc.
//! If  there  are  N  values  in  the  range  array,  the  LOD  group  should
//! have  N+1  children.
//! Specifying  too  few  children  will  result  in  the  last  child  being
//! used  repeatedly  for  the  lowest  lewels  of  detail;  if  too  many  children
//! are  specified,  the  extra  children  w ll  be  ignored.
//! Each  value  in  the  ranges  array  should  be  greater  than  the previous
//! value,  otherwise  results  are  undefined.
class Vrml_LOD : public MMgt_TShared
{

public:

  
  Standard_EXPORT Vrml_LOD();
  
  Standard_EXPORT Vrml_LOD(const Handle(TColStd_HArray1OfReal)& aRange, const gp_Vec& aCenter);
  
  Standard_EXPORT   void SetRange (const Handle(TColStd_HArray1OfReal)& aRange) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) Range()  const;
  
  Standard_EXPORT   void SetCenter (const gp_Vec& aCenter) ;
  
  Standard_EXPORT   gp_Vec Center()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




  DEFINE_STANDARD_RTTI(Vrml_LOD)

protected:




private: 


  Handle(TColStd_HArray1OfReal) myRange;
  gp_Vec myCenter;
  Standard_Boolean myRangeFlag;


};







#endif // _Vrml_LOD_HeaderFile
