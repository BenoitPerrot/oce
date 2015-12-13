// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_Surface_HeaderFile
#define _TopOpeBRepDS_Surface_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Handle_Geom_Surface.hxx>
#include <Foundation/Standard/Standard_Real.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class Geom_Surface;


//! A Geom surface and a tolerance.
class TopOpeBRepDS_Surface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_Surface();
  
  Standard_EXPORT TopOpeBRepDS_Surface(const Handle(Geom_Surface)& P, const Standard_Real T);
  
  Standard_EXPORT TopOpeBRepDS_Surface(const TopOpeBRepDS_Surface& Other);
  
  Standard_EXPORT   void Assign (const TopOpeBRepDS_Surface& Other) ;
  void operator= (const TopOpeBRepDS_Surface& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT  const  Handle(Geom_Surface)& Surface()  const;
  
  Standard_EXPORT   Standard_Real Tolerance()  const;
  
  //! Update the tolerance
  Standard_EXPORT   void Tolerance (const Standard_Real tol) ;
  
  Standard_EXPORT   Standard_Boolean Keep()  const;
  
  Standard_EXPORT   void ChangeKeep (const Standard_Boolean B) ;




protected:





private:



  Handle(Geom_Surface) mySurface;
  Standard_Real myTolerance;
  Standard_Boolean myKeep;


};







#endif // _TopOpeBRepDS_Surface_HeaderFile
