// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_PntFace_HeaderFile
#define _LocOpe_PntFace_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <ModelingData/TopAbs/TopAbs_Orientation.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class gp_Pnt;
class TopoDS_Face;



class LocOpe_PntFace 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor. Useful only for the list.
  Standard_EXPORT LocOpe_PntFace();
  
    LocOpe_PntFace(const gp_Pnt& P, const TopoDS_Face& F, const TopAbs_Orientation Or, const Standard_Real Param, const Standard_Real UPar, const Standard_Real VPar);
  
     const  gp_Pnt& Pnt()  const;
  
     const  TopoDS_Face& Face()  const;
  
      TopAbs_Orientation Orientation()  const;
  
      TopAbs_Orientation& ChangeOrientation() ;
  
      Standard_Real Parameter()  const;
  
      Standard_Real UParameter()  const;
  
      Standard_Real VParameter()  const;




protected:





private:



  gp_Pnt myPnt;
  TopoDS_Face myFace;
  TopAbs_Orientation myOri;
  Standard_Real myPar;
  Standard_Real myUPar;
  Standard_Real myVPar;


};


#include <LocOpe_PntFace.lxx>





#endif // _LocOpe_PntFace_HeaderFile
