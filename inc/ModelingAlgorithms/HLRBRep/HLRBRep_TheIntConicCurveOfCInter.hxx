// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheIntConicCurveOfCInter_HeaderFile
#define _HLRBRep_TheIntConicCurveOfCInter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingAlgorithms/IntRes2d/IntRes2d_Intersection.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class IntCurve_IConicTool;
class HLRBRep_CurveTool;
class HLRBRep_TheProjPCurOfCInter;
class HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter;
class HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter;
class gp_Lin2d;
class IntRes2d_Domain;
class gp_Circ2d;
class gp_Elips2d;
class gp_Parab2d;
class gp_Hypr2d;



class HLRBRep_TheIntConicCurveOfCInter  : public IntRes2d_Intersection
{
public:

  DEFINE_STANDARD_ALLOC

  
    HLRBRep_TheIntConicCurveOfCInter();
  
    HLRBRep_TheIntConicCurveOfCInter(const gp_Lin2d& L, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_TheIntConicCurveOfCInter(const gp_Circ2d& C, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_TheIntConicCurveOfCInter(const gp_Elips2d& E, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_TheIntConicCurveOfCInter(const gp_Parab2d& Prb, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_TheIntConicCurveOfCInter(const gp_Hypr2d& H, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
      void Perform (const gp_Lin2d& L, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
      void Perform (const gp_Circ2d& C, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
      void Perform (const gp_Elips2d& E, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
      void Perform (const gp_Parab2d& Prb, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
      void Perform (const gp_Hypr2d& H, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;




protected:





private:

  
      void Perform (const IntCurve_IConicTool& ICurve, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;




};

#define TheImpTool IntCurve_IConicTool
#define TheImpTool_hxx <ModelingAlgorithms/IntCurve/IntCurve_IConicTool.hxx>
#define ThePCurve Standard_Address
#define ThePCurve_hxx <Foundation/Standard/Standard_Address.hxx>
#define ThePCurveTool HLRBRep_CurveTool
#define ThePCurveTool_hxx <ModelingAlgorithms/HLRBRep/HLRBRep_CurveTool.hxx>
#define TheProjPCur HLRBRep_TheProjPCurOfCInter
#define TheProjPCur_hxx <ModelingAlgorithms/HLRBRep/HLRBRep_TheProjPCurOfCInter.hxx>
#define IntCurve_TheIntersector HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter
#define IntCurve_TheIntersector_hxx <ModelingAlgorithms/HLRBRep/HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#define IntCurve_MyImpParToolOfTheIntersector HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter
#define IntCurve_MyImpParToolOfTheIntersector_hxx <ModelingAlgorithms/HLRBRep/HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#define IntCurve_MyImpParToolOfTheIntersector HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter
#define IntCurve_MyImpParToolOfTheIntersector_hxx <ModelingAlgorithms/HLRBRep/HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#define IntCurve_IntConicCurveGen HLRBRep_TheIntConicCurveOfCInter
#define IntCurve_IntConicCurveGen_hxx <ModelingAlgorithms/HLRBRep/HLRBRep_TheIntConicCurveOfCInter.hxx>

#include <ModelingAlgorithms/IntCurve/IntCurve_IntConicCurveGen.lxx>

#undef TheImpTool
#undef TheImpTool_hxx
#undef ThePCurve
#undef ThePCurve_hxx
#undef ThePCurveTool
#undef ThePCurveTool_hxx
#undef TheProjPCur
#undef TheProjPCur_hxx
#undef IntCurve_TheIntersector
#undef IntCurve_TheIntersector_hxx
#undef IntCurve_MyImpParToolOfTheIntersector
#undef IntCurve_MyImpParToolOfTheIntersector_hxx
#undef IntCurve_MyImpParToolOfTheIntersector
#undef IntCurve_MyImpParToolOfTheIntersector_hxx
#undef IntCurve_IntConicCurveGen
#undef IntCurve_IntConicCurveGen_hxx




#endif // _HLRBRep_TheIntConicCurveOfCInter_HeaderFile
