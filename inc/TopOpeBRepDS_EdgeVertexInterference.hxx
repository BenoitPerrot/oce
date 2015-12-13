// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_EdgeVertexInterference_HeaderFile
#define _TopOpeBRepDS_EdgeVertexInterference_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepDS_EdgeVertexInterference.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TopOpeBRepDS_Config.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>
class TopOpeBRepDS_Transition;


//! An interference with a parameter (ShapeShapeInterference).
class TopOpeBRepDS_EdgeVertexInterference : public TopOpeBRepDS_ShapeShapeInterference
{

public:

  
  //! Create an interference of VERTEX <G> on a crossed EDGE E.
  //!
  //! if support type <ST> == EDGE : <S> is edge E
  //! FACE : <S> is the face with bound E.
  //! <T> is the transition along the edge, crossing the crossed edge.
  //! E  is the crossed edge.
  //! <GIsBound> indicates if <G> is a bound of the edge.
  //! <P> is the parameter of <G> on the edge.
  //!
  //! interference is stored in the list of interfs of the edge.
  Standard_EXPORT TopOpeBRepDS_EdgeVertexInterference(const TopOpeBRepDS_Transition& T, const TopOpeBRepDS_Kind ST, const Standard_Integer S, const Standard_Integer G, const Standard_Boolean GIsBound, const TopOpeBRepDS_Config C, const Standard_Real P);
  
  //! Create an interference of VERTEX <G> on crossed EDGE <S>.
  //!
  //! <T> is the transition along the edge, crossing the crossed edge.
  //! <S> is the crossed edge.
  //! <GIsBound> indicates if <G> is a bound of the edge.
  //! <C> indicates the geometric configuration between
  //! the edge and the crossed edge.
  //! <P> is the parameter of <G> on the edge.
  //!
  //! interference is stored in the list of interfs of the edge.
  Standard_EXPORT TopOpeBRepDS_EdgeVertexInterference(const TopOpeBRepDS_Transition& T, const Standard_Integer S, const Standard_Integer G, const Standard_Boolean GIsBound, const TopOpeBRepDS_Config C, const Standard_Real P);
  
  Standard_EXPORT   Standard_Real Parameter()  const;
  
  Standard_EXPORT   void Parameter (const Standard_Real P) ;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& OS)  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_EdgeVertexInterference)

protected:




private: 


  Standard_Real myParam;


};







#endif // _TopOpeBRepDS_EdgeVertexInterference_HeaderFile
