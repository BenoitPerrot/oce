// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_Face_HeaderFile
#define _DBRep_Face_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Viewer/DBRep/Handle_DBRep_Face.hxx>

#include <ModelingData/TopoDS/TopoDS_Face.hxx>
#include <Viewer/Draw/Draw_Color.hxx>
#include <Foundation/TColStd/TColStd_Array1OfInteger.hxx>
#include <Foundation/TColStd/TColStd_Array1OfReal.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Geometry/GeomAbs/GeomAbs_IsoType.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
class TopoDS_Face;
class Draw_Color;


//! Display of a face. Face + Array of iso + color.
class DBRep_Face : public MMgt_TShared
{

public:

  
  //! N is the number of iso intervals.
  Standard_EXPORT DBRep_Face(const TopoDS_Face& F, const Standard_Integer N, const Draw_Color& C);
  
     const  TopoDS_Face& Face()  const;
  
      void Face (const TopoDS_Face& F) ;
  
      Standard_Integer NbIsos()  const;
  
      void Iso (const Standard_Integer I, const GeomAbs_IsoType T, const Standard_Real Par, const Standard_Real T1, const Standard_Real T2) ;
  
      void GetIso (const Standard_Integer I, GeomAbs_IsoType& T, Standard_Real& Par, Standard_Real& T1, Standard_Real& T2)  const;
  
     const  Draw_Color& Color()  const;
  
      void Color (const Draw_Color& C) ;




  DEFINE_STANDARD_RTTI(DBRep_Face)

protected:




private: 


  TopoDS_Face myFace;
  Draw_Color myColor;
  TColStd_Array1OfInteger myTypes;
  TColStd_Array1OfReal myParams;


};


#include <Viewer/DBRep/DBRep_Face.lxx>





#endif // _DBRep_Face_HeaderFile
