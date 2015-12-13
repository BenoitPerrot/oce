// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_Association_HeaderFile
#define _TopOpeBRepDS_Association_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopOpeBRepDS_Association.hxx>

#include <TopOpeBRepDS_DataMapOfInterferenceListOfInterference.hxx>
#include <Foundation/MMgt/MMgt_TShared.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
#include <Standard_Boolean.hxx>
class TopOpeBRepDS_Interference;
class TopOpeBRepDS_ListOfInterference;



class TopOpeBRepDS_Association : public MMgt_TShared
{

public:

  
  Standard_EXPORT TopOpeBRepDS_Association();
  
  Standard_EXPORT   void Associate (const Handle(TopOpeBRepDS_Interference)& I, const Handle(TopOpeBRepDS_Interference)& K) ;
  
  Standard_EXPORT   void Associate (const Handle(TopOpeBRepDS_Interference)& I, const TopOpeBRepDS_ListOfInterference& LI) ;
  
  Standard_EXPORT   Standard_Boolean HasAssociation (const Handle(TopOpeBRepDS_Interference)& I)  const;
  
  Standard_EXPORT   TopOpeBRepDS_ListOfInterference& Associated (const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT   Standard_Boolean AreAssociated (const Handle(TopOpeBRepDS_Interference)& I, const Handle(TopOpeBRepDS_Interference)& K)  const;




  DEFINE_STANDARD_RTTI(TopOpeBRepDS_Association)

protected:




private: 


  TopOpeBRepDS_DataMapOfInterferenceListOfInterference myMap;


};







#endif // _TopOpeBRepDS_Association_HeaderFile
