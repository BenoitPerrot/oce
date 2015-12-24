// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPatch_Point_HeaderFile
#define _IntPatch_Point_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/IntSurf/IntSurf_PntOn2S.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HVertex.hxx>
#include <Geometry/Adaptor2d/Handle_Adaptor2d_HCurve2d.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_Transition.hxx>
class Adaptor3d_HVertex;
class Adaptor2d_HCurve2d;
class Standard_DomainError;
class gp_Pnt;
class IntSurf_Transition;
class IntSurf_PntOn2S;


//! Definition of an intersection point between two surfaces.
//! Such a point is contains geometrical informations (see
//! the Value method) and logical informations.
class IntPatch_Point 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
  Standard_EXPORT IntPatch_Point();
  
  //! Sets the values of a point which is on no domain,
  //! when both surfaces are implicit ones.
  //! If Tangent is True, the point is a point of tangency
  //! between the surfaces.
  Standard_EXPORT   void SetValue (const gp_Pnt& Pt, const Standard_Real Tol, const Standard_Boolean Tangent) ;
  
      void SetValue (const gp_Pnt& Pt) ;
  
      void SetTolerance (const Standard_Real Tol) ;
  
  //! Sets the values of the parameters of the point
  //! on each surface.
      void SetParameters (const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2) ;
  
  //! Set the value of the parameter on the intersection line.
      void SetParameter (const Standard_Real Para) ;
  
  //! Sets the values of a point which is a vertex on
  //! the initial facet of restriction of one
  //! of the surface.
  //! If OnFirst is True, the point is on the domain of the
  //! first patch, otherwise the point is on the domain of the
  //! second surface.
  Standard_EXPORT   void SetVertex (const Standard_Boolean OnFirst, const Handle(Adaptor3d_HVertex)& V) ;
  
  //! Sets the values of a point which is on one of the domain,
  //! when both surfaces are implicit ones.
  //! If OnFirst is True, the point is on the domain of the
  //! first patch, otherwise the point is on the domain of the
  //! second surface.
  Standard_EXPORT   void SetArc (const Standard_Boolean OnFirst, const Handle(Adaptor2d_HCurve2d)& A, const Standard_Real Param, const IntSurf_Transition& TLine, const IntSurf_Transition& TArc) ;
  
  //! Sets (or unsets) the point as a point on several
  //! intersection line.
      void SetMultiple (const Standard_Boolean IsMult) ;
  
  //! Returns the intersection point (geometric information).
     const  gp_Pnt& Value()  const;
  
  //! This method returns the parameter of the point
  //! on the intersection line.
  //! If the points does not belong to an intersection line,
  //! the value returned does not have any sens.
      Standard_Real ParameterOnLine()  const;
  
  //! This method returns the fuzziness on the point.
      Standard_Real Tolerance()  const;
  
  //! Returns True if the Point is a tangency point between
  //! the surfaces.
  //! If the Point is on one of the domain (IsOnDomS1 returns
  //! True or IsOnDomS2 returns True), an exception is raised.
      Standard_Boolean IsTangencyPoint()  const;
  
  //! Returns the parameters on the first surface of the point.
      void ParametersOnS1 (Standard_Real& U1, Standard_Real& V1)  const;
  
  //! Returns the parameters on the second surface of the point.
      void ParametersOnS2 (Standard_Real& U2, Standard_Real& V2)  const;
  
  //! Returns True if the point belongs to several intersection
  //! lines.
      Standard_Boolean IsMultiple()  const;
  
  //! Returns TRUE if the point is on a boundary of the domain
  //! of the first patch.
      Standard_Boolean IsOnDomS1()  const;
  
  //! Returns TRUE if the point is a vertex on the initial
  //! restriction facet of the first surface.
      Standard_Boolean IsVertexOnS1()  const;
  
  //! Returns the information about the point when it is
  //! on the domain of the first patch, i-e when the function
  //! IsVertexOnS1 returns True.
  //! Otherwise, an exception is raised.
     const  Handle(Adaptor3d_HVertex)& VertexOnS1()  const;
  
  //! Returns the arc of restriction containing the
  //! vertex.
  //! The exception DomainError is raised if
  //! IsOnDomS1 returns False.
     const  Handle(Adaptor2d_HCurve2d)& ArcOnS1()  const;
  
  //! Returns the transition of the point on the
  //! intersection line with the arc on S1.
  //! The exception DomainError is raised if IsOnDomS1
  //! returns False.
     const  IntSurf_Transition& TransitionLineArc1()  const;
  
  //! Returns the transition between the intersection line
  //! returned by the method Line and the arc on S1 returned
  //! by ArcOnS1().
  //! The exception DomainError is raised if
  //! IsOnDomS1 returns False.
     const  IntSurf_Transition& TransitionOnS1()  const;
  
  //! Returns the parameter of the point on the
  //! arc returned by the method ArcOnS2.
  //! The exception DomainError is raised if
  //! IsOnDomS1 returns False.
      Standard_Real ParameterOnArc1()  const;
  
  //! Returns TRUE if the point is on a boundary of the domain
  //! of the second patch.
      Standard_Boolean IsOnDomS2()  const;
  
  //! Returns TRUE if the point is a vertex on the initial
  //! restriction facet of the first surface.
      Standard_Boolean IsVertexOnS2()  const;
  
  //! Returns the information about the point when it is
  //! on the domain of the second patch, i-e when the function
  //! IsVertexOnS2 returns True.
  //! Otherwise, an exception is raised.
     const  Handle(Adaptor3d_HVertex)& VertexOnS2()  const;
  
  //! Returns the arc of restriction containing the
  //! vertex.
  //! The exception DomainError is raised if
  //! IsOnDomS2 returns False.
     const  Handle(Adaptor2d_HCurve2d)& ArcOnS2()  const;
  
  //! Returns the transition of the point on the
  //! intersection line with the arc on S2.
  //! The exception DomainError is raised if IsOnDomS2
  //! returns False.
     const  IntSurf_Transition& TransitionLineArc2()  const;
  
  //! Returns the transition between the intersection line
  //! returned by the method Line and the arc on S2 returned
  //! by ArcOnS2.
  //! The exception DomainError is raised if
  //! IsOnDomS2 returns False.
     const  IntSurf_Transition& TransitionOnS2()  const;
  
  //! Returns the parameter of the point on the
  //! arc returned by the method ArcOnS2.
  //! The exception DomainError is raised if
  //! IsOnDomS2 returns False.
      Standard_Real ParameterOnArc2()  const;
  
  //! Returns the PntOn2S
  //! (geometric Point and the parameters)
     const  IntSurf_PntOn2S& PntOn2S()  const;
  
  //! Returns the parameters on the first and on the
  //! second surface of the point.
      void Parameters (Standard_Real& U1, Standard_Real& V1, Standard_Real& U2, Standard_Real& V2)  const;
  
  Standard_EXPORT   void ReverseTransition() ;
  
  Standard_EXPORT   void Dump()  const;




protected:





private:



  IntSurf_PntOn2S pt;
  Standard_Real para;
  Standard_Real tol;
  Standard_Boolean tgt;
  Standard_Boolean mult;
  Standard_Boolean onS1;
  Standard_Boolean vtxonS1;
  Handle(Adaptor3d_HVertex) vS1;
  Handle(Adaptor2d_HCurve2d) arcS1;
  IntSurf_Transition traline1;
  IntSurf_Transition tra1;
  Standard_Real prm1;
  Standard_Boolean onS2;
  Standard_Boolean vtxonS2;
  Handle(Adaptor3d_HVertex) vS2;
  Handle(Adaptor2d_HCurve2d) arcS2;
  IntSurf_Transition traline2;
  IntSurf_Transition tra2;
  Standard_Real prm2;


};


#include <ModelingAlgorithms/IntPatch/IntPatch_Point.lxx>





#endif // _IntPatch_Point_HeaderFile
