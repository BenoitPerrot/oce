// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_SeqExplorerOfHSequenceOfXYZ_HeaderFile
#define _PColgp_SeqExplorerOfHSequenceOfXYZ_HeaderFile

#include <Foundation/Standard/Standard.hxx>
#include <Foundation/Standard/Standard_DefineAlloc.hxx>
#include <Foundation/Standard/Standard_Macro.hxx>

#include <OCAF/PColgp/Handle_PColgp_SeqNodeOfHSequenceOfXYZ.hxx>
#include <Foundation/Standard/Standard_Integer.hxx>
#include <OCAF/PColgp/Handle_PColgp_HSequenceOfXYZ.hxx>
#include <Foundation/Standard/Standard_Boolean.hxx>
class PColgp_SeqNodeOfHSequenceOfXYZ;
class PColgp_HSequenceOfXYZ;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_XYZ;



class PColgp_SeqExplorerOfHSequenceOfXYZ 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PColgp_SeqExplorerOfHSequenceOfXYZ(const Handle(PColgp_HSequenceOfXYZ)& S);
  
  Standard_EXPORT   gp_XYZ Value (const Standard_Integer Index) ;
  
  Standard_EXPORT   Standard_Boolean Contains (const gp_XYZ& T) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const gp_XYZ& T, const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;
  
  Standard_EXPORT   Standard_Integer Location (const Standard_Integer N, const gp_XYZ& T) ;




protected:





private:



  Handle(PColgp_SeqNodeOfHSequenceOfXYZ) CurrentItem;
  Standard_Integer CurrentIndex;
  Handle(PColgp_HSequenceOfXYZ) TheSequence;


};







#endif // _PColgp_SeqExplorerOfHSequenceOfXYZ_HeaderFile
