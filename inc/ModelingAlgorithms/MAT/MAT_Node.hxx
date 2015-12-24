// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_Node_HeaderFile
#define _MAT_Node_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <ModelingAlgorithms/MAT/Handle_MAT_Node.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_Address.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <ModelingAlgorithms/MAT/Handle_MAT_Arc.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class MAT_Arc;
class MAT_SequenceOfArc;
class MAT_SequenceOfBasicElt;


//! Node of Graph.
class MAT_Node : public MMgt_TShared
{

public:

  
  Standard_EXPORT MAT_Node(const Standard_Integer GeomIndex, const Handle(MAT_Arc)& LinkedArc, const Standard_Real Distance);
  
  //! Returns the index associated of the geometric
  //! representation of <me>.
  Standard_EXPORT   Standard_Integer GeomIndex()  const;
  
  //! Returns the index associated of the node
  Standard_EXPORT   Standard_Integer Index()  const;
  
  //! Returns in <S> the Arcs linked to <me>.
  Standard_EXPORT   void LinkedArcs (MAT_SequenceOfArc& S)  const;
  
  //! Returns  in <S> the BasicElts equidistant
  //! to <me>.
  Standard_EXPORT   void NearElts (MAT_SequenceOfBasicElt& S)  const;
  
  Standard_EXPORT   Standard_Real Distance()  const;
  
  //! Returns True if <me> is a pending Node.
  //! (ie : the number of Arc Linked = 1)
  Standard_EXPORT   Standard_Boolean PendingNode()  const;
  
  //! Returns True if <me> belongs to the figure.
  Standard_EXPORT   Standard_Boolean OnBasicElt()  const;
  
  //! Returns True if the distance of <me> is Infinite
  Standard_EXPORT   Standard_Boolean Infinite()  const;
  
  //! Set the index associated of the node
  Standard_EXPORT   void SetIndex (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetLinkedArc (const Handle(MAT_Arc)& anArc) ;




  DEFINE_STANDARD_RTTI(MAT_Node)

protected:




private: 


  Standard_Integer nodeIndex;
  Standard_Integer geomIndex;
  Standard_Address aLinkedArc;
  Standard_Real distance;


};







#endif // _MAT_Node_HeaderFile
