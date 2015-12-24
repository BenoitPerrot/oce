// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_FilSpine_HeaderFile
#define _ChFiDS_FilSpine_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/ChFiDS/Handle_ChFiDS_FilSpine.hxx>

#include <Mathematics/Collections/TColgp_SequenceOfXY.hxx>
#include <ModelingAlgorithms/Law/Law_Laws.hxx>
#include <ModelingAlgorithms/ChFiDS/ChFiDS_Spine.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <ModelingAlgorithms/Law/Handle_Law_Function.hxx>
#include <ModelingAlgorithms/Law/Handle_Law_Composite.hxx>
#include <ModelingAlgorithms/ChFiDS/Handle_ChFiDS_HElSpine.hxx>
class TopoDS_Edge;
class TopoDS_Vertex;
class gp_XY;
class Law_Function;
class Law_Composite;
class ChFiDS_HElSpine;


//! Provides  data specific to  the fillets -
//! vector or rule  of evolution (C2).
class ChFiDS_FilSpine : public ChFiDS_Spine
{

public:

  
  Standard_EXPORT ChFiDS_FilSpine();
  
  Standard_EXPORT ChFiDS_FilSpine(const Standard_Real Tol);
  
  Standard_EXPORT virtual   void Reset (const Standard_Boolean AllData = Standard_False) ;
  
  //! initializes the constant vector on edge E.
  Standard_EXPORT   void SetRadius (const Standard_Real Radius, const TopoDS_Edge& E) ;
  
  //! resets the constant vector  on   edge E.
  Standard_EXPORT   void UnSetRadius (const TopoDS_Edge& E) ;
  
  //! initializes the  vector on Vertex V.
  Standard_EXPORT   void SetRadius (const Standard_Real Radius, const TopoDS_Vertex& V) ;
  
  //! resets the vector on Vertex V.
  Standard_EXPORT   void UnSetRadius (const TopoDS_Vertex& V) ;
  
  //! initializes the vector on the point of parameter W.
  Standard_EXPORT   void SetRadius (const gp_XY& UandR, const Standard_Integer IinC) ;
  
  //! initializes the constant vector on all spine.
  Standard_EXPORT   void SetRadius (const Standard_Real Radius) ;
  
  //! initializes the rule of evolution on all spine.
  Standard_EXPORT   void SetRadius (const Handle(Law_Function)& C, const Standard_Integer IinC) ;
  
  //! returns true if the radius is constant
  //! all along the spine.
  Standard_EXPORT   Standard_Boolean IsConstant()  const;
  
  //! returns true if the radius is constant
  //! all along the edge E.
  Standard_EXPORT   Standard_Boolean IsConstant (const Standard_Integer IE)  const;
  
  //! returns the radius if the fillet is constant
  //! all along the spine.
  Standard_EXPORT   Standard_Real Radius()  const;
  
  //! returns the radius if the fillet is constant
  //! all along the edge E.
  Standard_EXPORT   Standard_Real Radius (const Standard_Integer IE)  const;
  
  //! returns the radius if the fillet is constant
  //! all along the edge E.
  Standard_EXPORT   Standard_Real Radius (const TopoDS_Edge& E)  const;
  
  Standard_EXPORT virtual   void AppendElSpine (const Handle(ChFiDS_HElSpine)& Els) ;
  
  Standard_EXPORT   Handle(Law_Composite) Law (const Handle(ChFiDS_HElSpine)& Els)  const;
  
  //! returns the elementary law
  Standard_EXPORT   Handle(Law_Function)& ChangeLaw (const TopoDS_Edge& E) ;
  
  //! returns the maximum radius if the fillet is non-constant
  Standard_EXPORT   Standard_Real MaxRadFromSeqAndLaws()  const;




  DEFINE_STANDARD_RTTI(ChFiDS_FilSpine)

protected:




private: 

  
  Standard_EXPORT   Handle(Law_Composite) ComputeLaw (const Handle(ChFiDS_HElSpine)& Els) ;
  
  Standard_EXPORT   void AppendLaw (const Handle(ChFiDS_HElSpine)& Els) ;

  TColgp_SequenceOfXY parandrad;
  Law_Laws laws;


};







#endif // _ChFiDS_FilSpine_HeaderFile
