// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_PointSet_HeaderFile
#define _Vrml_PointSet_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Integer.hxx>
#include <Foundation/Standard/Standard_OStream.hxx>


//! defines a PointSet node of VRML specifying geometry shapes.
class Vrml_PointSet 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Vrml_PointSet(const Standard_Integer aStartIndex = 0, const Standard_Integer aNumPoints = -1);
  
  Standard_EXPORT   void SetStartIndex (const Standard_Integer aStartIndex) ;
  
  Standard_EXPORT   Standard_Integer StartIndex()  const;
  
  Standard_EXPORT   void SetNumPoints (const Standard_Integer aNumPoints) ;
  
  Standard_EXPORT   Standard_Integer NumPoints()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




protected:





private:



  Standard_Integer myStartIndex;
  Standard_Integer myNumPoints;


};







#endif // _Vrml_PointSet_HeaderFile
