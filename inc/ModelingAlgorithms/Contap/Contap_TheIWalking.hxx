// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_TheIWalking_HeaderFile
#define _Contap_TheIWalking_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_SequenceOfPathPoint.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Mathematics/Optimization/math_Vector.hxx>
#include <ModelingAlgorithms/IntWalk/IntWalk_VectorOfWalkingData.hxx>
#include <ModelingAlgorithms/IntWalk/IntWalk_VectorOfInteger.hxx>
#include <ModelingAlgorithms/IntSurf/IntSurf_PntOn2S.hxx>
#include <Mathematics/Primitives/gp_Vec.hxx>
#include <Mathematics/Primitives/gp_Dir2d.hxx>
#include <Foundation/TColStd/TColStd_SequenceOfInteger.hxx>
#include <ModelingAlgorithms/Contap/Contap_SequenceOfIWLineOfTheIWalking.hxx>
#include <Geometry/Adaptor3d/Handle_Adaptor3d_HSurface.hxx>
#include <ModelingAlgorithms/Contap/Handle_Contap_TheIWLineOfTheIWalking.hxx>
#include <ModelingAlgorithms/Contap/Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/IntWalk/IntWalk_StatusDeflection.hxx>
class StdFail_NotDone;
class Standard_OutOfRange;
class IntSurf_PathPoint;
class IntSurf_PathPointTool;
class IntSurf_SequenceOfPathPoint;
class IntSurf_InteriorPoint;
class IntSurf_InteriorPointTool;
class IntSurf_SequenceOfInteriorPoint;
class Adaptor3d_HSurface;
class Adaptor3d_HSurfaceTool;
class Contap_SurfFunction;
class Contap_TheIWLineOfTheIWalking;
class Contap_SequenceOfIWLineOfTheIWalking;
class Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking;
class TColStd_SequenceOfReal;
class IntSurf_PntOn2S;



class Contap_TheIWalking 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Contap_TheIWalking(const Standard_Real Epsilon, const Standard_Real Deflection, const Standard_Real Step);
  
      void SetTolerance (const Standard_Real Epsilon, const Standard_Real Deflection, const Standard_Real Step) ;
  
  Standard_EXPORT   void Perform (const IntSurf_SequenceOfPathPoint& Pnts1, const IntSurf_SequenceOfInteriorPoint& Pnts2, Contap_SurfFunction& Func, const Handle(Adaptor3d_HSurface)& S, const Standard_Boolean Reversed = Standard_False) ;
  
  Standard_EXPORT   void Perform (const IntSurf_SequenceOfPathPoint& Pnts1, Contap_SurfFunction& Func, const Handle(Adaptor3d_HSurface)& S, const Standard_Boolean Reversed = Standard_False) ;
  
      Standard_Boolean IsDone()  const;
  
      Standard_Integer NbLines()  const;
  
     const  Handle(Contap_TheIWLineOfTheIWalking)& Value (const Standard_Integer Index)  const;
  
      Standard_Integer NbSinglePnts()  const;
  
     const  IntSurf_PathPoint& SinglePnt (const Standard_Integer Index)  const;




protected:

  
  Standard_EXPORT   Standard_Boolean Cadrage (math_Vector& BornInf, math_Vector& BornSup, math_Vector& UVap, Standard_Real& Step, const Standard_Integer StepSign)  const;
  
  Standard_EXPORT   Standard_Boolean TestArretPassage (const TColStd_SequenceOfReal& Umult, const TColStd_SequenceOfReal& Vmult, Contap_SurfFunction& Section, math_Vector& UV, Standard_Integer& Irang) ;
  
  Standard_EXPORT   Standard_Boolean TestArretPassage (const TColStd_SequenceOfReal& Umult, const TColStd_SequenceOfReal& Vmult, const math_Vector& UV, const Standard_Integer Index, Standard_Integer& Irang) ;
  
  Standard_EXPORT   Standard_Boolean TestArretAjout (Contap_SurfFunction& Section, math_Vector& UV, Standard_Integer& Irang, IntSurf_PntOn2S& PSol) ;
  
  Standard_EXPORT   void TestArretCadre (const TColStd_SequenceOfReal& Umult, const TColStd_SequenceOfReal& Vmult, const Handle(Contap_TheIWLineOfTheIWalking)& Line, Contap_SurfFunction& Section, math_Vector& UV, Standard_Integer& Irang) ;
  
  Standard_EXPORT   IntWalk_StatusDeflection TestDeflection (Contap_SurfFunction& Section, const Standard_Boolean Finished, const math_Vector& UV, const IntWalk_StatusDeflection StatusPrecedent, Standard_Integer& NbDivision, Standard_Real& Step, const Standard_Integer StepSign) ;
  
  Standard_EXPORT   void ComputeOpenLine (const TColStd_SequenceOfReal& Umult, const TColStd_SequenceOfReal& Vmult, const IntSurf_SequenceOfPathPoint& Pnts1, Contap_SurfFunction& Section, Standard_Boolean& Rajout) ;
  
  Standard_EXPORT   void OpenLine (const Standard_Integer N, const IntSurf_PntOn2S& Psol, const IntSurf_SequenceOfPathPoint& Pnts1, Contap_SurfFunction& Section, const Handle(Contap_TheIWLineOfTheIWalking)& Line) ;
  
  Standard_EXPORT   void ComputeCloseLine (const TColStd_SequenceOfReal& Umult, const TColStd_SequenceOfReal& Vmult, const IntSurf_SequenceOfPathPoint& Pnts1, const IntSurf_SequenceOfInteriorPoint& Pnts2, Contap_SurfFunction& Section, Standard_Boolean& Rajout) ;
  
  Standard_EXPORT   void AddPointInCurrentLine (const Standard_Integer N, const IntSurf_PathPoint& PathPnt, const Handle(Contap_TheIWLineOfTheIWalking)& CurrentLine)  const;
  
  Standard_EXPORT   void MakeWalkingPoint (const Standard_Integer Case, const Standard_Real U, const Standard_Real V, Contap_SurfFunction& Section, IntSurf_PntOn2S& Psol) ;
  
  Standard_EXPORT   void Clear() ;




private:



  Standard_Boolean done;
  IntSurf_SequenceOfPathPoint seqSingle;
  Standard_Real fleche;
  Standard_Real pas;
  math_Vector tolerance;
  Standard_Real epsilon;
  Standard_Boolean reversed;
  IntWalk_VectorOfWalkingData wd1;
  IntWalk_VectorOfWalkingData wd2;
  IntWalk_VectorOfInteger nbMultiplicities;
  Standard_Real Um;
  Standard_Real UM;
  Standard_Real Vm;
  Standard_Real VM;
  IntSurf_PntOn2S previousPoint;
  gp_Vec previousd3d;
  gp_Dir2d previousd2d;
  TColStd_SequenceOfInteger seqAjout;
  Contap_SequenceOfIWLineOfTheIWalking lines;


};

#define ThePointOfPath IntSurf_PathPoint
#define ThePointOfPath_hxx <ModelingAlgorithms/IntSurf/IntSurf_PathPoint.hxx>
#define ThePointOfPathTool IntSurf_PathPointTool
#define ThePointOfPathTool_hxx <ModelingAlgorithms/IntSurf/IntSurf_PathPointTool.hxx>
#define ThePOPIterator IntSurf_SequenceOfPathPoint
#define ThePOPIterator_hxx <ModelingAlgorithms/IntSurf/IntSurf_SequenceOfPathPoint.hxx>
#define ThePointOfLoop IntSurf_InteriorPoint
#define ThePointOfLoop_hxx <ModelingAlgorithms/IntSurf/IntSurf_InteriorPoint.hxx>
#define ThePointOfLoopTool IntSurf_InteriorPointTool
#define ThePointOfLoopTool_hxx <ModelingAlgorithms/IntSurf/IntSurf_InteriorPointTool.hxx>
#define ThePOLIterator IntSurf_SequenceOfInteriorPoint
#define ThePOLIterator_hxx <ModelingAlgorithms/IntSurf/IntSurf_SequenceOfInteriorPoint.hxx>
#define ThePSurface Handle(Adaptor3d_HSurface)
#define ThePSurface_hxx <Geometry/Adaptor3d/Adaptor3d_HSurface.hxx>
#define ThePSurfaceTool Adaptor3d_HSurfaceTool
#define ThePSurfaceTool_hxx <Geometry/Adaptor3d/Adaptor3d_HSurfaceTool.hxx>
#define TheIWFunction Contap_SurfFunction
#define TheIWFunction_hxx <ModelingAlgorithms/Contap/Contap_SurfFunction.hxx>
#define IntWalk_TheIWLine Contap_TheIWLineOfTheIWalking
#define IntWalk_TheIWLine_hxx <ModelingAlgorithms/Contap/Contap_TheIWLineOfTheIWalking.hxx>
#define IntWalk_SequenceOfIWLine Contap_SequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceOfIWLine_hxx <ModelingAlgorithms/Contap/Contap_SequenceOfIWLineOfTheIWalking.hxx>
#define IntWalk_SequenceNodeOfSequenceOfIWLine Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#define IntWalk_SequenceNodeOfSequenceOfIWLine Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_hxx <ModelingAlgorithms/Contap/Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#define Handle_IntWalk_TheIWLine Handle_Contap_TheIWLineOfTheIWalking
#define IntWalk_TheIWLine_Type_() Contap_TheIWLineOfTheIWalking_Type_()
#define Handle_IntWalk_SequenceNodeOfSequenceOfIWLine Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_Type_()
#define Handle_IntWalk_SequenceNodeOfSequenceOfIWLine Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define IntWalk_SequenceNodeOfSequenceOfIWLine_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_Type_()
#define IntWalk_IWalking Contap_TheIWalking
#define IntWalk_IWalking_hxx <ModelingAlgorithms/Contap/Contap_TheIWalking.hxx>

#include <ModelingAlgorithms/IntWalk/IntWalk_IWalking.lxx>

#undef ThePointOfPath
#undef ThePointOfPath_hxx
#undef ThePointOfPathTool
#undef ThePointOfPathTool_hxx
#undef ThePOPIterator
#undef ThePOPIterator_hxx
#undef ThePointOfLoop
#undef ThePointOfLoop_hxx
#undef ThePointOfLoopTool
#undef ThePointOfLoopTool_hxx
#undef ThePOLIterator
#undef ThePOLIterator_hxx
#undef ThePSurface
#undef ThePSurface_hxx
#undef ThePSurfaceTool
#undef ThePSurfaceTool_hxx
#undef TheIWFunction
#undef TheIWFunction_hxx
#undef IntWalk_TheIWLine
#undef IntWalk_TheIWLine_hxx
#undef IntWalk_SequenceOfIWLine
#undef IntWalk_SequenceOfIWLine_hxx
#undef IntWalk_SequenceNodeOfSequenceOfIWLine
#undef IntWalk_SequenceNodeOfSequenceOfIWLine_hxx
#undef IntWalk_SequenceNodeOfSequenceOfIWLine
#undef IntWalk_SequenceNodeOfSequenceOfIWLine_hxx
#undef Handle_IntWalk_TheIWLine
#undef IntWalk_TheIWLine_Type_
#undef Handle_IntWalk_SequenceNodeOfSequenceOfIWLine
#undef IntWalk_SequenceNodeOfSequenceOfIWLine_Type_
#undef Handle_IntWalk_SequenceNodeOfSequenceOfIWLine
#undef IntWalk_SequenceNodeOfSequenceOfIWLine_Type_
#undef IntWalk_IWalking
#undef IntWalk_IWalking_hxx




#endif // _Contap_TheIWalking_HeaderFile
