// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRTest_ShapeData_HeaderFile
#define _HLRTest_ShapeData_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_HLRTest_ShapeData.hxx>

#include <Viewer/Draw/Draw_Color.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class Draw_Color;


//! Contains the colors of a shape.
class HLRTest_ShapeData : public MMgt_TShared
{

public:

  
  Standard_EXPORT HLRTest_ShapeData(const Draw_Color& CVis, const Draw_Color& COVis, const Draw_Color& CIVis, const Draw_Color& CHid, const Draw_Color& COHid, const Draw_Color& CIHid);
  
      void VisibleColor (const Draw_Color& CVis) ;
  
      void VisibleOutLineColor (const Draw_Color& COVis) ;
  
      void VisibleIsoColor (const Draw_Color& CIVis) ;
  
      void HiddenColor (const Draw_Color& CHid) ;
  
      void HiddenOutLineColor (const Draw_Color& COHid) ;
  
      void HiddenIsoColor (const Draw_Color& CIHid) ;
  
      Draw_Color VisibleColor()  const;
  
      Draw_Color VisibleOutLineColor()  const;
  
      Draw_Color VisibleIsoColor()  const;
  
      Draw_Color HiddenColor()  const;
  
      Draw_Color HiddenOutLineColor()  const;
  
      Draw_Color HiddenIsoColor()  const;




  DEFINE_STANDARD_RTTI(HLRTest_ShapeData)

protected:




private: 


  Draw_Color myVColor;
  Draw_Color myVOColor;
  Draw_Color myVIColor;
  Draw_Color myHColor;
  Draw_Color myHOColor;
  Draw_Color myHIColor;


};


#include <HLRTest_ShapeData.lxx>





#endif // _HLRTest_ShapeData_HeaderFile
