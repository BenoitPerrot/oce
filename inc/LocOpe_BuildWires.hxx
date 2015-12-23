// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_BuildWires_HeaderFile
#define _LocOpe_BuildWires_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Foundation/Standard/Standard_Boolean.hxx>
#include <ModelingData/TopTools/TopTools_ListOfShape.hxx>
#include <Handle_LocOpe_WiresOnShape.hxx>
class StdFail_NotDone;
class TopTools_ListOfShape;
class LocOpe_WiresOnShape;



class LocOpe_BuildWires 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LocOpe_BuildWires();
  
  Standard_EXPORT LocOpe_BuildWires(const TopTools_ListOfShape& Ledges, const Handle(LocOpe_WiresOnShape)& PW);
  
  Standard_EXPORT   void Perform (const TopTools_ListOfShape& Ledges, const Handle(LocOpe_WiresOnShape)& PW) ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Result()  const;




protected:





private:



  Standard_Boolean myDone;
  TopTools_ListOfShape myRes;


};







#endif // _LocOpe_BuildWires_HeaderFile
