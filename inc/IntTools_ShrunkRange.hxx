// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_ShrunkRange_HeaderFile
#define _IntTools_ShrunkRange_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/BoundingVolumes/Bnd_Box.hxx>
#include <Handle_IntTools_Context.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class IntTools_Context;
class TopoDS_Edge;
class TopoDS_Vertex;
class Bnd_Box;



//! The class provides the computation of
//! a working (shrunk) range [t1, t2] for
//! the 3D-curve of the edge.
class IntTools_ShrunkRange 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntTools_ShrunkRange();
Standard_EXPORT virtual ~IntTools_ShrunkRange();
  
  Standard_EXPORT   void SetData (const TopoDS_Edge& aE, const Standard_Real aT1, const Standard_Real aT2, const TopoDS_Vertex& aV1, const TopoDS_Vertex& aV2) ;
  
  Standard_EXPORT   void SetContext (const Handle(IntTools_Context)& aCtx) ;
  
  Standard_EXPORT  const  Handle(IntTools_Context)& Context()  const;
  
  Standard_EXPORT   void SetShrunkRange (const Standard_Real aT1, const Standard_Real aT2) ;
  
  Standard_EXPORT   void ShrunkRange (Standard_Real& aT1, Standard_Real& aT2)  const;
  
  Standard_EXPORT  const  Bnd_Box& BndBox()  const;
  
  Standard_EXPORT  const  TopoDS_Edge& Edge()  const;
  
  Standard_EXPORT   void Perform() ;
  

  //! Returns code of computing shrunk range
  //! completion
  //! 0 - means successful completion
  //! 1 - nothing has been done
  //! 2 - initial range is out of edge's range
  //! 3 - first boundary of initial range is more than
  //! last boundary
  //! 4 - projection of first vertex failed
  //! 5 - projection of second vertex failed
  //! 6 - shrunk range can not be computed
  //! shrunk range is setted to initial range
  Standard_EXPORT   Standard_Integer ErrorStatus()  const;




protected:



  TopoDS_Edge myEdge;
  TopoDS_Vertex myV1;
  TopoDS_Vertex myV2;
  Standard_Real myT1;
  Standard_Real myT2;
  Standard_Real myTS1;
  Standard_Real myTS2;
  Bnd_Box myBndBox;
  Handle(IntTools_Context) myCtx;
  Standard_Integer myErrorStatus;


private:





};







#endif // _IntTools_ShrunkRange_HeaderFile
