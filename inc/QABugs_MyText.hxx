// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QABugs_MyText_HeaderFile
#define _QABugs_MyText_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_QABugs_MyText.hxx>

#include <Mathematics/Primitives/gp_Pnt.hxx>
#include <Foundation/TCollection/TCollection_ExtendedString.hxx>
#include <Foundation/Quantity/Quantity_NameOfColor.hxx>
#include <Foundation/Standard/Standard_CString.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <AIS_InteractiveObject.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Handle_Prs3d_Presentation.hxx>
#include <Handle_SelectMgr_Selection.hxx>
class TCollection_ExtendedString;
class gp_Pnt;
class Prs3d_Presentation;
class SelectMgr_Selection;



class QABugs_MyText : public AIS_InteractiveObject
{

public:

  
  Standard_EXPORT QABugs_MyText(const TCollection_ExtendedString& aText, const gp_Pnt& aPosition);
  
  Standard_EXPORT QABugs_MyText(const TCollection_ExtendedString& aText, const gp_Pnt& aPosition, const Standard_CString aFont, const Quantity_NameOfColor aColor, const Standard_Real aHeight);




  DEFINE_STANDARD_RTTI(QABugs_MyText)

protected:

  
  Standard_EXPORT virtual   Standard_Integer NbPossibleSelection()  const;
  
  Standard_EXPORT virtual   void Compute (const Handle(PrsMgr_PresentationManager3d)& aPresentationManager, const Handle(Prs3d_Presentation)& aPresentation, const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT virtual   void ComputeSelection (const Handle(SelectMgr_Selection)& aSelection, const Standard_Integer aMode) ;



private: 


  gp_Pnt myPosition;
  TCollection_ExtendedString myText;
  Quantity_NameOfColor myNameOfColor;
  Standard_CString myNameOfFont;
  Standard_Real myHeight;


};







#endif // _QABugs_MyText_HeaderFile
