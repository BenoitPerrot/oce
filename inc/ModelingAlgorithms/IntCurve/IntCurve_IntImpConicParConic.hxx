// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurve_IntImpConicParConic_HeaderFile
#define _IntCurve_IntImpConicParConic_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/IntRes2d/IntRes2d_Intersection.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class Standard_ConstructionError;
class IntCurve_IConicTool;
class IntCurve_PConic;
class IntCurve_PConicTool;
class IntCurve_ProjectOnPConicTool;
class IntCurve_MyImpParToolOfIntImpConicParConic;
class IntRes2d_Domain;
class gp_Pnt2d;
class TColStd_Array1OfReal;



class IntCurve_IntImpConicParConic  : public IntRes2d_Intersection
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT IntCurve_IntImpConicParConic();
  
  Standard_EXPORT IntCurve_IntImpConicParConic(const IntCurve_IConicTool& ITool, const IntRes2d_Domain& Dom1, const IntCurve_PConic& PCurve, const IntRes2d_Domain& Dom2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT   void Perform (const IntCurve_IConicTool& ITool, const IntRes2d_Domain& Dom1, const IntCurve_PConic& PCurve, const IntRes2d_Domain& Dom2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   Standard_Real FindU (const Standard_Real parameter, gp_Pnt2d& point, const IntCurve_PConic& TheParCurev, const IntCurve_IConicTool& TheImpTool)  const;
  
  Standard_EXPORT   Standard_Real FindV (const Standard_Real parameter, gp_Pnt2d& point, const IntCurve_IConicTool& TheImpTool, const IntCurve_PConic& ParCurve, const IntRes2d_Domain& TheParCurveDomain, const Standard_Real V0, const Standard_Real V1, const Standard_Real Tolerance)  const;
  
  Standard_EXPORT   void And_Domaine_Objet1_Intersections (const IntCurve_IConicTool& TheImpTool, const IntCurve_PConic& TheParCurve, const IntRes2d_Domain& TheImpCurveDomain, const IntRes2d_Domain& TheParCurveDomain, Standard_Integer& NbResultats, TColStd_Array1OfReal& Inter2_And_Domain2, TColStd_Array1OfReal& Inter1, TColStd_Array1OfReal& Resultat1, TColStd_Array1OfReal& Resultat2, const Standard_Real EpsNul)  const;




protected:





private:
private:
  Standard_EXPORT void ComputeAllTransitions(Standard_Integer NbResultats,
					     const TColStd_Array1OfReal &Resultat1,
					     const TColStd_Array1OfReal &Resultat2,
					     const IntCurve_IConicTool& TheImpTool,
					     const IntRes2d_Domain& TheImpCurveDomain,
					     const IntCurve_PConic& TheParCurve,
					     const IntRes2d_Domain& TheParCurveDomain,
					     const Standard_Real TolConf,
					     Standard_Boolean &HeadOnImp,
					     Standard_Boolean &EndOnImp,
					     Standard_Boolean &HeadOnPar,
					     Standard_Boolean &EndOnPar);





};







#endif // _IntCurve_IntImpConicParConic_HeaderFile
