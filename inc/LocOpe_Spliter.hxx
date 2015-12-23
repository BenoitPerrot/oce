// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_Spliter_HeaderFile
#define _LocOpe_Spliter_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopTools/TopTools_DataMapOfShapeListOfShape.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Handle_LocOpe_WiresOnShape.hxx>
class StdFail_NotDone;
class Standard_NullObject;
class Standard_NoSuchObject;
class TopoDS_Shape;
class LocOpe_WiresOnShape;
class TopTools_ListOfShape;



class LocOpe_Spliter 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
    LocOpe_Spliter();
  
  //! Creates the algorithm on the shape <S>.
    LocOpe_Spliter(const TopoDS_Shape& S);
  
  //! Initializes the algorithm on the shape <S>.
      void Init (const TopoDS_Shape& S) ;
  
  Standard_EXPORT   void Perform (const Handle(LocOpe_WiresOnShape)& PW) ;
  
      Standard_Boolean IsDone()  const;
  
  //! Returns the new shape
     const  TopoDS_Shape& ResultingShape()  const;
  
  //! Returns the initial shape
     const  TopoDS_Shape& Shape()  const;
  
  //! Returns  the faces   which  are the  left of   the
  //! projected wires and which are
  Standard_EXPORT  const  TopTools_ListOfShape& DirectLeft()  const;
  
  //! Returns the faces of the "left" part on the shape.
  //! (It  is build   from  DirectLeft,  with  the faces
  //! connected to this set, and so on...).
  Standard_EXPORT  const  TopTools_ListOfShape& Left()  const;
  
  //! Returns the list of descendant shapes of <S>.
  Standard_EXPORT  const  TopTools_ListOfShape& DescendantShapes (const TopoDS_Shape& S) ;




protected:





private:



  TopoDS_Shape myShape;
  Standard_Boolean myDone;
  TopoDS_Shape myRes;
  TopTools_DataMapOfShapeListOfShape myMap;
  TopTools_ListOfShape myDLeft;
  TopTools_ListOfShape myLeft;


};


#include <LocOpe_Spliter.lxx>





#endif // _LocOpe_Spliter_HeaderFile
