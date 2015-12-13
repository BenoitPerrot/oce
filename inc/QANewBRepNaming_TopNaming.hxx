// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANewBRepNaming_TopNaming_HeaderFile
#define _QANewBRepNaming_TopNaming_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <TDF_Label.hxx>
class TDF_Label;


//! The root class for all the primitives, features, ...
class QANewBRepNaming_TopNaming 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the result label.
     const  TDF_Label& ResultLabel()  const;




protected:

  
  Standard_EXPORT QANewBRepNaming_TopNaming();
  
  Standard_EXPORT QANewBRepNaming_TopNaming(const TDF_Label& Label);


  TDF_Label myResultLabel;


private:





};


#include <QANewBRepNaming_TopNaming.lxx>





#endif // _QANewBRepNaming_TopNaming_HeaderFile
