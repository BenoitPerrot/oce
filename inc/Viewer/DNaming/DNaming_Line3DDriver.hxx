// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DNaming_Line3DDriver_HeaderFile
#define _DNaming_Line3DDriver_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Viewer/DNaming/Handle_DNaming_Line3DDriver.hxx>

#include <OCAF/TFunction/TFunction_Driver.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
class TFunction_Logbook;
class TDF_Label;
class TopoDS_Wire;
class TopTools_Array1OfShape;


//! Computes Line 3D function
class DNaming_Line3DDriver : public TFunction_Driver
{

public:

  
  //! Constructor
  //! validation
  //! ==========
  Standard_EXPORT DNaming_Line3DDriver();
  
  //! Validates labels of a function in <log>.
  //! In regeneration mode this method must be called (by the
  //! solver) even if the function is not executed, to build
  //! the valid label scope.
  //! execution of function
  //! ======================
  Standard_EXPORT virtual   void Validate (TFunction_Logbook& theLog)  const;
  
  //! Analyse in <log> if the loaded function must be executed
  //! (i.e.arguments are modified) or not.
  //! If the Function label itself is modified, the function must
  //! be executed.
  Standard_EXPORT virtual   Standard_Boolean MustExecute (const TFunction_Logbook& theLog)  const;
  
  //! Execute the function and push in <log> the impacted
  //! labels (see method SetImpacted).
  Standard_EXPORT virtual   Standard_Integer Execute (TFunction_Logbook& theLog)  const;




  DEFINE_STANDARD_RTTI(DNaming_Line3DDriver)

protected:




private: 

  
  //! Loads a Line3D in a data framework
  Standard_EXPORT   void LoadNamingDS (const TDF_Label& theResultLabel, const TopoDS_Wire& theWire, const TopTools_Array1OfShape& theVertexes, const Standard_Boolean isClosed = Standard_False)  const;



};







#endif // _DNaming_Line3DDriver_HeaderFile
