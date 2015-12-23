// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass_FClassifier_HeaderFile
#define _BRepClass_FClassifier_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <BRepClass_FClass2dOfFClassifier.hxx>
#include <BRepClass_Edge.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <IntRes2d_Position.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopAbs/TopAbs_State.hxx>
class Standard_DomainError;
class BRepClass_FaceExplorer;
class BRepClass_Edge;
class BRepClass_Intersector;
class BRepClass_FClass2dOfFClassifier;
class gp_Pnt2d;



class BRepClass_FClassifier 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepClass_FClassifier();
  
  Standard_EXPORT BRepClass_FClassifier(BRepClass_FaceExplorer& F, const gp_Pnt2d& P, const Standard_Real Tol);
  
  Standard_EXPORT   void Perform (BRepClass_FaceExplorer& F, const gp_Pnt2d& P, const Standard_Real Tol) ;
  
  Standard_EXPORT   TopAbs_State State()  const;
  
      Standard_Boolean Rejected()  const;
  
      Standard_Boolean NoWires()  const;
  
  Standard_EXPORT  const  BRepClass_Edge& Edge()  const;
  
  Standard_EXPORT   Standard_Real EdgeParameter()  const;
  
      IntRes2d_Position Position()  const;




protected:



  BRepClass_FClass2dOfFClassifier myClassifier;
  BRepClass_Edge myEdge;
  Standard_Real myEdgeParameter;
  IntRes2d_Position myPosition;
  Standard_Boolean rejected;
  Standard_Boolean nowires;


private:





};

#define TheFaceExplorer BRepClass_FaceExplorer
#define TheFaceExplorer_hxx <BRepClass_FaceExplorer.hxx>
#define TheEdge BRepClass_Edge
#define TheEdge_hxx <BRepClass_Edge.hxx>
#define TheIntersection2d BRepClass_Intersector
#define TheIntersection2d_hxx <BRepClass_Intersector.hxx>
#define TopClass_FClass2d BRepClass_FClass2dOfFClassifier
#define TopClass_FClass2d_hxx <BRepClass_FClass2dOfFClassifier.hxx>
#define TopClass_FaceClassifier BRepClass_FClassifier
#define TopClass_FaceClassifier_hxx <BRepClass_FClassifier.hxx>

#include <TopClass_FaceClassifier.lxx>

#undef TheFaceExplorer
#undef TheFaceExplorer_hxx
#undef TheEdge
#undef TheEdge_hxx
#undef TheIntersection2d
#undef TheIntersection2d_hxx
#undef TopClass_FClass2d
#undef TopClass_FClass2d_hxx
#undef TopClass_FaceClassifier
#undef TopClass_FaceClassifier_hxx




#endif // _BRepClass_FClassifier_HeaderFile
