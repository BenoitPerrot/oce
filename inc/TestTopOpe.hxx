// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpe_HeaderFile
#define _TestTopOpe_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <Viewer/Draw/Draw_Interpretor.hxx>
#include <Handle_TopOpeBRepBuild_HBuilder.hxx>
#include <Handle_TopOpeBRepDS_HDataStructure.hxx>
class TopOpeBRepBuild_HBuilder;
class TopOpeBRepDS_HDataStructure;
class TopoDS_Shape;



class TestTopOpe 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Defines all Top. Ope. test commands
  Standard_EXPORT static   void AllCommands (Draw_Interpretor& I) ;
  
  Standard_EXPORT static   void TOPOCommands (Draw_Interpretor& I) ;
  
  Standard_EXPORT static   void BOOPCommands (Draw_Interpretor& I) ;
  
  //! commands on a HDS involved in topological operations
  Standard_EXPORT static   void HDSCommands (Draw_Interpretor& I) ;
  
  //! Defines the HBuilder on which BOOPCommands will operate.
  Standard_EXPORT static   void CurrentHB (const Handle(TopOpeBRepBuild_HBuilder)& HDS) ;
  
  //! Defines the HDS on which HDSCommands/BOOPCommands will operate.
  Standard_EXPORT static   void CurrentDS (const Handle(TopOpeBRepDS_HDataStructure)& HDS) ;
  
  //! Defines current shapes of current topological operation
  Standard_EXPORT static   void Shapes (const TopoDS_Shape& S1, const TopoDS_Shape& S2) ;
  
  Standard_EXPORT static   void MesureCommands (Draw_Interpretor& I) ;
  
  Standard_EXPORT static   void CORCommands (Draw_Interpretor& I) ;
  
  Standard_EXPORT static   void DSACommands (Draw_Interpretor& I) ;
  
  Standard_EXPORT static   void OtherCommands (Draw_Interpretor& I) ;
  
  //! Loads all Draw commands of TKDrawDEB. Used for plugin.
  Standard_EXPORT static   void Factory (Draw_Interpretor& theDI) ;




protected:





private:





};







#endif // _TestTopOpe_HeaderFile
