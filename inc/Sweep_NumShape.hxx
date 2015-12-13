// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Sweep_NumShape_HeaderFile
#define _Sweep_NumShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <TopAbs_Orientation.hxx>


//! Gives    a  simple  indexed   representation  of a
//! Directing Edge topology.
class Sweep_NumShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates a dummy indexed edge.
  Standard_EXPORT Sweep_NumShape();
  
  //! Creates a new simple indexed edge.
  //!
  //! For an Edge : Index is the  number of vertices (0,
  //! 1 or 2),Type is TopAbs_EDGE, Closed  is true if it
  //! is a  closed edge, BegInf is true  if  the Edge is
  //! infinite at the  begenning, EndInf is true  if the
  //! edge is infinite at the end.
  //!
  //! For a Vertex : Index is the index of the vertex in
  //! the edge (1 or 2),  Type  is TopAbsVERTEX, all the
  //! other fields have no meanning.
  Standard_EXPORT Sweep_NumShape(const Standard_Integer Index, const TopAbs_ShapeEnum Type, const Standard_Boolean Closed = Standard_False, const Standard_Boolean BegInf = Standard_False, const Standard_Boolean EndInf = Standard_False);
  
  //! Reinitialize a simple indexed edge.
  //!
  //! For an Edge : Index is the  number of vertices (0,
  //! 1 or 2),Type is TopAbs_EDGE, Closed  is true if it
  //! is a  closed edge, BegInf is true  if  the Edge is
  //! infinite at the  begenning, EndInf is true  if the
  //! edge is infinite at the end.
  //!
  //! For a Vertex : Index is the index of the vertex in
  //! the edge (1 or 2), Type is TopAbsVERTEX, Closed is
  //! true if it is the vertex of a closed edge, all the
  //! other fields have no meanning.
  Standard_EXPORT   void Init (const Standard_Integer Index, const TopAbs_ShapeEnum Type, const Standard_Boolean Closed = Standard_False, const Standard_Boolean BegInf = Standard_False, const Standard_Boolean EndInf = Standard_False) ;
  
      Standard_Integer Index()  const;
  
      TopAbs_ShapeEnum Type()  const;
  
      Standard_Boolean Closed()  const;
  
      Standard_Boolean BegInfinite()  const;
  
      Standard_Boolean EndInfinite()  const;
  
  Standard_EXPORT   TopAbs_Orientation Orientation()  const;




protected:





private:



  TopAbs_ShapeEnum myType;
  Standard_Integer myIndex;
  Standard_Boolean myClosed;
  Standard_Boolean myBegInf;
  Standard_Boolean myEndInf;


};


#include <Sweep_NumShape.lxx>





#endif // _Sweep_NumShape_HeaderFile
