// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopLoc_Datum3D_HeaderFile
#define _TopLoc_Datum3D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopLoc_Datum3D.hxx>

#include <gp_Trsf.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Standard_OStream.hxx>
class Standard_ConstructionError;
class gp_Trsf;


//! Describes a coordinate transformation, i.e. a change
//! to an elementary 3D coordinate system, or position in 3D space.
//! A Datum3D is always described relative to the default datum.
//! The default datum is described relative to itself: its
//! origin is (0,0,0), and its axes are (1,0,0) (0,1,0) (0,0,1).
class TopLoc_Datum3D : public MMgt_TShared
{

public:

  
  //! Constructs a default Datum3D.
  Standard_EXPORT TopLoc_Datum3D();
  
  //! Constructs a Datum3D form a Trsf from gp. An error is
  //! raised if the Trsf is not a rigid transformation.
  Standard_EXPORT TopLoc_Datum3D(const gp_Trsf& T);
  
  //! Returns a gp_Trsf which, when applied to this datum,
  //! produces the default datum.
     const  gp_Trsf& Transformation()  const;
  

  //! Writes the contents of this Datum3D to the stream S.
  Standard_EXPORT   void ShallowDump (Standard_OStream& S)  const;




  DEFINE_STANDARD_RTTI(TopLoc_Datum3D)

protected:




private: 


  gp_Trsf myTrsf;


};


#include <TopLoc_Datum3D.lxx>



inline void ShallowDump(const Handle(TopLoc_Datum3D)& me,Standard_OStream& S) {
 me->ShallowDump(S);
}



#endif // _TopLoc_Datum3D_HeaderFile
