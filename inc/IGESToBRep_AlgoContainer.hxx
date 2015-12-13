// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESToBRep_AlgoContainer_HeaderFile
#define _IGESToBRep_AlgoContainer_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineHandle.hxx>
#include <Handle_IGESToBRep_AlgoContainer.hxx>

#include <Handle_IGESToBRep_ToolContainer.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
class IGESToBRep_ToolContainer;



class IGESToBRep_AlgoContainer : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT IGESToBRep_AlgoContainer();
  
  //! Sets ToolContainer
      void SetToolContainer (const Handle(IGESToBRep_ToolContainer)& TC) ;
  
  //! Returns ToolContainer
      Handle(IGESToBRep_ToolContainer) ToolContainer()  const;




  DEFINE_STANDARD_RTTI(IGESToBRep_AlgoContainer)

protected:




private: 


  Handle(IGESToBRep_ToolContainer) myTC;


};


#include <IGESToBRep_AlgoContainer.lxx>





#endif // _IGESToBRep_AlgoContainer_HeaderFile
