// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTest_DrawableEdgeTool_HeaderFile
#define _HLRTest_DrawableEdgeTool_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_HLRTest_DrawableEdgeTool.hxx>

#include <Handle_HLRBRep_Algo.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <Viewer/Draw/Draw_Drawable3D.hxx>
#include <Handle_HLRBRep_Data.hxx>
class HLRBRep_Algo;
class Draw_Display;
class HLRBRep_Data;
class HLRBRep_EdgeData;


//! Used to display the results.
class HLRTest_DrawableEdgeTool : public Draw_Drawable3D
{

public:

  
  Standard_EXPORT HLRTest_DrawableEdgeTool(const Handle(HLRBRep_Algo)& Alg, const Standard_Boolean Visible, const Standard_Boolean IsoLine, const Standard_Boolean Rg1Line, const Standard_Boolean RgNLine, const Standard_Integer ViewId);
  
  Standard_EXPORT   void DrawOn (Draw_Display& D)  const;




  DEFINE_STANDARD_RTTI(HLRTest_DrawableEdgeTool)

protected:




private: 

  
  Standard_EXPORT   void InternalDraw (Draw_Display& D, const Standard_Integer typ)  const;
  
  Standard_EXPORT   void DrawFace (Draw_Display& D, const Standard_Integer typ, const Standard_Integer nCB, const Standard_Integer iface, Standard_Integer& e2, Standard_Integer& iCB, Handle(HLRBRep_Data)& DS)  const;
  
  Standard_EXPORT   void DrawEdge (Draw_Display& D, const Standard_Boolean inFace, const Standard_Integer typ, const Standard_Integer nCB, const Standard_Integer ie, Standard_Integer& e2, Standard_Integer& iCB, HLRBRep_EdgeData& ed)  const;

  Handle(HLRBRep_Algo) myAlgo;
  Standard_Boolean myVisible;
  Standard_Boolean myIsoLine;
  Standard_Boolean myRg1Line;
  Standard_Boolean myRgNLine;
  Standard_Integer myViewId;


};







#endif // _HLRTest_DrawableEdgeTool_HeaderFile
