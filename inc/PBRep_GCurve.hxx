// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_GCurve_HeaderFile
#define _PBRep_GCurve_HeaderFile

#include <Foundation/Standard/Standard_Macro.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Foundation/Standard/Standard.hxx>
#include <Handle_PBRep_GCurve.hxx>

#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
#include <PBRep_CurveRepresentation.hxx>
class PTopLoc_Location;


class PBRep_GCurve : public PBRep_CurveRepresentation
{

public:

  
  Standard_EXPORT   Standard_Real First()  const;
  
  Standard_EXPORT   Standard_Real Last()  const;
  
  Standard_EXPORT   void First (const Standard_Real F) ;
  
  Standard_EXPORT   void Last (const Standard_Real L) ;
  
  //! returns TRUE
  Standard_EXPORT virtual   Standard_Boolean IsGCurve()  const;

PBRep_GCurve( )
{
  
}
PBRep_GCurve(const Storage_stCONSTclCOM& a) : PBRep_CurveRepresentation(a)
{
  
}
    Standard_Real _CSFDB_GetPBRep_GCurvemyFirst() const { return myFirst; }
    void _CSFDB_SetPBRep_GCurvemyFirst(const Standard_Real p) { myFirst = p; }
    Standard_Real _CSFDB_GetPBRep_GCurvemyLast() const { return myLast; }
    void _CSFDB_SetPBRep_GCurvemyLast(const Standard_Real p) { myLast = p; }



  DEFINE_STANDARD_RTTI(PBRep_GCurve)

protected:

  
  Standard_EXPORT PBRep_GCurve(const PTopLoc_Location& L, const Standard_Real First, const Standard_Real Last);



private: 


  Standard_Real myFirst;
  Standard_Real myLast;


};







#endif // _PBRep_GCurve_HeaderFile
