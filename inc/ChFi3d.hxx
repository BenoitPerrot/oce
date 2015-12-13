// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFi3d_HeaderFile
#define _ChFi3d_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <TopAbs_Orientation.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class BRepAdaptor_Surface;
class TopoDS_Edge;
class ChFi3d_Builder;
class ChFi3d_ChBuilder;
class ChFi3d_FilBuilder;
class ChFi3d_SearchSing;


//! creation of spatial fillets on a solid.
class ChFi3d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns  Reversed  in  Or1  and(or)  Or2  if
  //! the  concave edge  defined by the  interior of faces F1 and F2,
  //! in  the  neighbourhood of  their boundary E is of the edge opposite to  the
  //! normal  of their surface  support.  The  orientation of
  //! faces is  not  taken  into  consideration in  the calculation. The
  //! function  returns  0 if  the calculation fails (tangence),
  //! if  not, it  returns the  number of  choice of  the fillet
  //! or chamfer corresponding to  the orientations  calculated
  //! and  to  the tangent to  the  guide line read in  E.
  Standard_EXPORT static   Standard_Integer ConcaveSide (const BRepAdaptor_Surface& S1, const BRepAdaptor_Surface& S2, const TopoDS_Edge& E, TopAbs_Orientation& Or1, TopAbs_Orientation& Or2) ;
  
  //! Same  as ConcaveSide, but the orientations are
  //! logically  deduced from  the result of  the call of
  //! ConcaveSide on  the  first pair of faces of  the fillet or
  //! chamnfer.
  Standard_EXPORT static   Standard_Integer NextSide (TopAbs_Orientation& Or1, TopAbs_Orientation& Or2, const TopAbs_Orientation OrSave1, const TopAbs_Orientation OrSave2, const Standard_Integer ChoixSauv) ;
  
  //! Same  as  the  other NextSide, but the calculation is  done
  //! on an edge  only.
  Standard_EXPORT static   void NextSide (TopAbs_Orientation& Or, const TopAbs_Orientation OrSave, const TopAbs_Orientation OrFace) ;
  
  //! Enables  to  determine while  processing  an  angle, if
  //! two fillets or chamfers constituting a face have
  //! identic or opposed  concave  edges.
  Standard_EXPORT static   Standard_Boolean SameSide (const TopAbs_Orientation Or, const TopAbs_Orientation OrSave1, const TopAbs_Orientation OrSave2, const TopAbs_Orientation OrFace1, const TopAbs_Orientation OrFace2) ;




protected:





private:




friend class ChFi3d_Builder;
friend class ChFi3d_ChBuilder;
friend class ChFi3d_FilBuilder;
friend class ChFi3d_SearchSing;

};







#endif // _ChFi3d_HeaderFile
