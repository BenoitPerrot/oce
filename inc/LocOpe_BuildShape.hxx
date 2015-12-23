// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_BuildShape_HeaderFile
#define _LocOpe_BuildShape_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <ModelingData/TopoDS/TopoDS_Shape.hxx>
class TopTools_ListOfShape;
class TopoDS_Shape;



class LocOpe_BuildShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
    LocOpe_BuildShape();
  
  //! Builds shape(s) from  the list <L>.  Uses only the
  //! faces of <L>.
    LocOpe_BuildShape(const TopTools_ListOfShape& L);
  
  //! Builds shape(s) from  the list <L>.  Uses only the
  //! faces of <L>.
  Standard_EXPORT   void Perform (const TopTools_ListOfShape& L) ;
  
     const  TopoDS_Shape& Shape()  const;




protected:





private:



  TopoDS_Shape myRes;


};


#include <LocOpe_BuildShape.lxx>





#endif // _LocOpe_BuildShape_HeaderFile
