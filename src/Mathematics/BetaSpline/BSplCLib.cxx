// Created on: 1991-08-09
// Created by: JCV
// Copyright (c) 1991-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

// Modified RLE 9 Sep 1993
// pmn : modified 28-01-97  : fixed a mistake in LocateParameter (PRO6973)
// pmn : modified 4-11-96   : fixed a mistake in BuildKnots (PRO6124)
// pmn : modified 28-Jun-96 : fixed a mistake in AntiBoorScheme
// xab : modified 15-Jun-95 : fixed a mistake in IsRational
// xab : modified 15-Mar-95 : removed Epsilon comparison in IsRational
//                            added RationalDerivatives.
// xab : 30-Mar-95 : fixed coupling with lti in RationalDerivatives
// xab : 15-Mar-96 : fixed a typo in Eval with extrapolation
// jct : 15-Apr-97 : added TangExtendToConstraint
// jct : 24-Apr-97 : correction on computation of Tbord and NewFlatKnots
//                   in TangExtendToConstraint; Continuity can be equal to 0

#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColgp_Array1OfPnt.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Vec.hxx>
#include <gp_Vec2d.hxx>
#include <math_Matrix.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <BSplCLib.hxx>
#include <PLib.hxx>
#include <Foundation/NCollection/NCollection_LocalArray.hxx>
#include <Precision.hxx>
#include <Foundation/Standard/Standard_NotImplemented.hxx>

typedef gp_Pnt Pnt;
typedef gp_Vec Vec;
typedef TColgp_Array1OfPnt Array1OfPnt;
typedef TColStd_Array1OfReal Array1OfReal;
typedef TColStd_Array1OfInteger Array1OfInteger;

//=======================================================================
//function : Hunt
//purpose  : 
//=======================================================================

void BSplCLib::Hunt (const Array1OfReal& XX, 
		     const Standard_Real X,
		     Standard_Integer&   Ilc)
{
  // replaced by simple dichotomy (RLE)
  Ilc = XX.Lower();
  const Standard_Real *px = &XX(Ilc);
  px -= Ilc;

  if (X < px[Ilc]) {
    Ilc--;
    return;
  }
  Standard_Integer Ihi = XX.Upper();
  if (X > px[Ihi]) {
    Ilc = Ihi + 1;
    return;
  }
  Standard_Integer Im;

  while (Ihi - Ilc != 1) {
    Im = (Ihi + Ilc) >> 1;
    if (X > px[Im]) Ilc = Im;
    else            Ihi = Im;
  }
}

//=======================================================================
//function : FirstUKnotIndex
//purpose  : 
//=======================================================================

Standard_Integer BSplCLib::FirstUKnotIndex (const Standard_Integer Degree,
				   const TColStd_Array1OfInteger& Mults)
{ 
  Standard_Integer Index = Mults.Lower();
  Standard_Integer SigmaMult = Mults(Index);

  while (SigmaMult <= Degree) {
    Index++;
    SigmaMult += Mults (Index);
  }
  return Index;
}

//=======================================================================
//function : LastUKnotIndex
//purpose  : 
//=======================================================================

Standard_Integer BSplCLib::LastUKnotIndex  (const Standard_Integer Degree,
				   const Array1OfInteger& Mults) 
{ 
   Standard_Integer Index = Mults.Upper();
   Standard_Integer SigmaMult = Mults(Index);

   while (SigmaMult <= Degree) {
     Index--;
     SigmaMult += Mults.Value (Index);
   }
   return Index;
}

//=======================================================================
//function : FlatIndex
//purpose  : 
//=======================================================================

Standard_Integer  BSplCLib::FlatIndex
  (const Standard_Integer Degree,
   const Standard_Integer Index,
   const TColStd_Array1OfInteger& Mults,
   const Standard_Boolean Periodic)
{
  Standard_Integer i, index = Index;
  const Standard_Integer MLower = Mults.Lower();
  const Standard_Integer *pmu = &Mults(MLower);
  pmu -= MLower;

  for (i = MLower + 1; i <= Index; i++)
    index += pmu[i] - 1;
  if ( Periodic)
    index += Degree;
  else
    index += pmu[MLower] - 1;
  return index;
}

//=======================================================================
//function : LocateParameter
//purpose  : Processing of nodes with multiplicities
//pmn  28-01-97 -> compute eventual of the period.
//=======================================================================

void BSplCLib::LocateParameter
(const Standard_Integer          , //Degree,
 const Array1OfReal&    Knots,
 const Array1OfInteger& , //Mults,
 const Standard_Real             U,
 const Standard_Boolean          IsPeriodic,
 const Standard_Integer          FromK1,
 const Standard_Integer          ToK2,
 Standard_Integer&               KnotIndex,
 Standard_Real&                  NewU)
{
  Standard_Real uf = 0, ul=1;
  if (IsPeriodic) {
    uf = Knots(Knots.Lower());
    ul = Knots(Knots.Upper());
  }
  BSplCLib::LocateParameter(Knots,U,IsPeriodic,FromK1,ToK2,
			    KnotIndex,NewU, uf, ul);
}

//=======================================================================
//function : LocateParameter
//purpose  : For plane nodes 
//   pmn  28-01-97 -> There is a need of the degre to calculate
//   the eventual period
//=======================================================================

void BSplCLib::LocateParameter
(const Standard_Integer          Degree,
 const Array1OfReal&    Knots,
 const Standard_Real             U,
 const Standard_Boolean          IsPeriodic,
 const Standard_Integer          FromK1,
 const Standard_Integer          ToK2,
 Standard_Integer&               KnotIndex,
 Standard_Real&                  NewU)
{ 
  if (IsPeriodic)
    BSplCLib::LocateParameter(Knots, U, IsPeriodic, FromK1, ToK2,
			      KnotIndex, NewU,
			      Knots(Knots.Lower() + Degree),
			      Knots(Knots.Upper() - Degree));
  else 
    BSplCLib::LocateParameter(Knots, U, IsPeriodic, FromK1, ToK2,
			      KnotIndex, NewU,
			      0.,
			      1.);
}

//=======================================================================
//function : LocateParameter
//purpose  : Effective computation
// pmn 28-01-97 : Add limits of the period as input argument,  
//                as it is imposible to produce them at this level.
//=======================================================================

void BSplCLib::LocateParameter 
(const TColStd_Array1OfReal& Knots,
 const Standard_Real         U,
 const Standard_Boolean      IsPeriodic,
 const Standard_Integer      FromK1,
 const Standard_Integer      ToK2,
 Standard_Integer&           KnotIndex,
 Standard_Real&              NewU,
 const Standard_Real         UFirst,
 const Standard_Real         ULast)
{
  Standard_Integer First,Last;
  if (FromK1 < ToK2) {
    First = FromK1;
    Last  = ToK2;
  }
  else {
    First = ToK2;
    Last  = FromK1;
  }
  Standard_Integer Last1 = Last - 1;
  NewU = U;
  if (IsPeriodic) {
    Standard_Real Period = ULast - UFirst;

    while (NewU > ULast )
      NewU  -= Period;

    while (NewU < UFirst)
      NewU  += Period;
  }
  
  BSplCLib::Hunt (Knots, NewU, KnotIndex);
  
  Standard_Real Eps = Epsilon(U);
  Standard_Real val;
  if (Eps < 0) Eps = - Eps;
  Standard_Integer KLower = Knots.Lower();
  const Standard_Real *knots = &Knots(KLower);
  knots -= KLower;
  if ( KnotIndex < Knots.Upper()) {
    val = NewU - knots[KnotIndex + 1];
    if (val < 0) val = - val;
    // <= to be coherent with Segment where Eps corresponds to a bit of error.
    if (val <= Eps) KnotIndex++; 
  }
  if (KnotIndex < First) KnotIndex = First;
  if (KnotIndex > Last1) KnotIndex = Last1;
  
  if (KnotIndex != Last1) {
    Standard_Real K1 = knots[KnotIndex];
    Standard_Real K2 = knots[KnotIndex + 1];
    val = K2 - K1;
    if (val < 0) val = - val;

    while (val <= Eps) {
      KnotIndex++;
      K1 = K2;
      K2 = knots[KnotIndex + 1];
      val = K2 - K1;
      if (val < 0) val = - val;
    }
  }
}

//=======================================================================
//function : LocateParameter
//purpose  : the index is recomputed only if out of range
//pmn  28-01-97 -> eventual computation of the period.
//=======================================================================

void BSplCLib::LocateParameter
(const Standard_Integer         Degree,
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger* Mults,
 const Standard_Real            U,
 const Standard_Boolean         Periodic,
 Standard_Integer&              KnotIndex,
 Standard_Real&                 NewU) 
{
  Standard_Integer first,last;
  if (Mults) {
    if (Periodic) {
      first = Knots.Lower();
      last  = Knots.Upper();
    }
    else {
      first = FirstUKnotIndex(Degree,*Mults);
      last  = LastUKnotIndex (Degree,*Mults);
    }
  }
  else {
    first = Knots.Lower() + Degree;
    last  = Knots.Upper() - Degree;
  }
  if ( KnotIndex < first || KnotIndex > last)
    BSplCLib::LocateParameter(Knots, U, Periodic, first, last,
			      KnotIndex, NewU, Knots(first), Knots(last));
  else
    NewU = U;
}

//=======================================================================
//function : MaxKnotMult
//purpose  : 
//=======================================================================

Standard_Integer BSplCLib::MaxKnotMult
(const Array1OfInteger& Mults,
 const Standard_Integer          FromK1,
 const Standard_Integer          ToK2)
{
  Standard_Integer MLower = Mults.Lower();
  const Standard_Integer *pmu = &Mults(MLower);
  pmu -= MLower;
  Standard_Integer MaxMult = pmu[FromK1];

  for (Standard_Integer i = FromK1; i <= ToK2; i++) {
    if (MaxMult < pmu[i]) MaxMult = pmu[i];
  }
  return MaxMult;
}

//=======================================================================
//function : MinKnotMult
//purpose  : 
//=======================================================================

Standard_Integer BSplCLib::MinKnotMult
(const Array1OfInteger& Mults,
 const Standard_Integer          FromK1,
 const Standard_Integer          ToK2)
{
  Standard_Integer MLower = Mults.Lower();
  const Standard_Integer *pmu = &Mults(MLower);
  pmu -= MLower;
  Standard_Integer MinMult = pmu[FromK1];

  for (Standard_Integer i = FromK1; i <= ToK2; i++) {
    if (MinMult > pmu[i]) MinMult = pmu[i];
  }
  return MinMult;
}

//=======================================================================
//function : NbPoles
//purpose  : 
//=======================================================================

Standard_Integer BSplCLib::NbPoles(const Standard_Integer Degree,
				   const Standard_Boolean Periodic,
				   const TColStd_Array1OfInteger& Mults)
{
  Standard_Integer i,sigma = 0;
  Standard_Integer f = Mults.Lower();
  Standard_Integer l = Mults.Upper();
  const Standard_Integer * pmu = &Mults(f);
  pmu -= f;
  Standard_Integer Mf = pmu[f];
  Standard_Integer Ml = pmu[l];
  if (Mf <= 0) return 0;
  if (Ml <= 0) return 0;
  if (Periodic) {
    if (Mf > Degree) return 0;
    if (Ml > Degree) return 0;
    if (Mf != Ml   ) return 0;
    sigma = Mf;
  }
  else {
    Standard_Integer Deg1 = Degree + 1;
    if (Mf > Deg1) return 0;
    if (Ml > Deg1) return 0;
    sigma = Mf + Ml - Deg1;
  }
    
  for (i = f + 1; i < l; i++) {
    if (pmu[i] <= 0    ) return 0;
    if (pmu[i] > Degree) return 0;
    sigma += pmu[i];
  }
  return sigma;
}

//=======================================================================
//function : KnotSequenceLength
//purpose  : 
//=======================================================================

Standard_Integer BSplCLib::KnotSequenceLength
(const TColStd_Array1OfInteger& Mults,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic)
{
  Standard_Integer i,l = 0;
  Standard_Integer MLower = Mults.Lower();
  Standard_Integer MUpper = Mults.Upper();
  const Standard_Integer * pmu = &Mults(MLower);
  pmu -= MLower;

  for (i = MLower; i <= MUpper; i++)
    l += pmu[i];
  if (Periodic) l += 2 * (Degree + 1 - pmu[MLower]);
  return l;
}

//=======================================================================
//function : KnotSequence
//purpose  : 
//=======================================================================

void BSplCLib::KnotSequence 
(const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger& Mults,
 TColStd_Array1OfReal&          KnotSeq)
{
  BSplCLib::KnotSequence(Knots,Mults,0,Standard_False,KnotSeq);
}

//=======================================================================
//function : KnotSequence
//purpose  : 
//=======================================================================

void BSplCLib::KnotSequence 
(const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger& Mults,
 const Standard_Integer         Degree,
 const Standard_Boolean         Periodic,
 TColStd_Array1OfReal&          KnotSeq)
{
  Standard_Real K;
  Standard_Integer Mult;
  Standard_Integer MLower = Mults.Lower();
  const Standard_Integer * pmu = &Mults(MLower);
  pmu -= MLower;
  Standard_Integer KLower = Knots.Lower();
  Standard_Integer KUpper = Knots.Upper();
  const Standard_Real * pkn = &Knots(KLower);
  pkn -= KLower;
  Standard_Integer M1 = Degree + 1 - pmu[MLower];  // for periodic
  Standard_Integer i,j,index = Periodic ? M1 + 1 : 1;

  for (i = KLower; i <= KUpper; i++) {
    Mult = pmu[i];
    K    = pkn[i];

    for (j = 1; j <= Mult; j++) { 
      KnotSeq (index) = K;   
      index++;
    }
  }
  if (Periodic) {
    Standard_Real period = pkn[KUpper] - pkn[KLower];
    Standard_Integer m;
    m = 1;
    j = KUpper - 1;

    for (i = M1; i >= 1; i--) {
      KnotSeq(i) = pkn[j] - period;
      m++;
      if (m > pmu[j]) {
	j--;
	m = 1;
      }
    }
    m = 1;
    j = KLower + 1;

    for (i = index; i <= KnotSeq.Upper(); i++) {
      KnotSeq(i) = pkn[j] + period;
      m++;
      if (m > pmu[j]) {
	j++;
	m = 1;
      }
    }
  }
}

//=======================================================================
//function : KnotsLength
//purpose  : 
//=======================================================================
 Standard_Integer BSplCLib::KnotsLength(const TColStd_Array1OfReal& SeqKnots,
//					const Standard_Boolean Periodic)
					const Standard_Boolean )
{
  Standard_Integer sizeMult = 1; 
  Standard_Real val = SeqKnots(1);
  for (Standard_Integer jj=2;
       jj<=SeqKnots.Length();jj++)
    {
      // test on strict equality on nodes
      if (SeqKnots(jj)!=val)
        {
          val = SeqKnots(jj);
          sizeMult++;
        }
    }
  return sizeMult;
}

//=======================================================================
//function : Knots
//purpose  : 
//=======================================================================
void BSplCLib::Knots(const TColStd_Array1OfReal& SeqKnots, 
		     TColStd_Array1OfReal &knots,
		     TColStd_Array1OfInteger &mult,
//		     const Standard_Boolean Periodic)
		     const Standard_Boolean )
{
  Standard_Real val = SeqKnots(1);
  Standard_Integer kk=1;
  knots(kk) = val;
  mult(kk)  = 1;

  for (Standard_Integer jj=2;jj<=SeqKnots.Length();jj++)
    {
      // test on strict equality on nodes
      if (SeqKnots(jj)!=val)
        {
          val = SeqKnots(jj);
          kk++;
          knots(kk) = val;
          mult(kk)  = 1;
        }
      else
        {
          mult(kk)++;
        }
    }
}

//=======================================================================
//function : KnotForm
//purpose  : 
//=======================================================================

BSplCLib_KnotDistribution BSplCLib::KnotForm
(const Array1OfReal& Knots,
 const Standard_Integer       FromK1,
 const Standard_Integer       ToK2)
{
   Standard_Real DU0,DU1,Ui,Uj,Eps0,val;
   BSplCLib_KnotDistribution  KForm = BSplCLib_Uniform;

   Standard_Integer KLower = Knots.Lower();
   const Standard_Real * pkn = &Knots(KLower);
   pkn -= KLower;
   Ui  = pkn[FromK1];
   if (Ui < 0) Ui = - Ui;
   Uj  = pkn[FromK1 + 1];
   if (Uj < 0) Uj = - Uj;
   DU0 = Uj - Ui;
   if (DU0 < 0) DU0 = - DU0;
   Eps0 = Epsilon (Ui) + Epsilon (Uj) + Epsilon (DU0);
   Standard_Integer i = FromK1 + 1;

   while (KForm != BSplCLib_NonUniform && i < ToK2) {
     Ui = pkn[i];      
     if (Ui < 0) Ui = - Ui;
     i++;
     Uj = pkn[i];
     if (Uj < 0) Uj = - Uj;
     DU1 = Uj - Ui;
     if (DU1 < 0) DU1 = - DU1;
     val = DU1 - DU0;
     if (val < 0) val = -val;
     if (val > Eps0) KForm = BSplCLib_NonUniform;
     DU0 = DU1;
     Eps0 = Epsilon (Ui) + Epsilon (Uj) + Epsilon (DU0);
   }
   return KForm;
}

//=======================================================================
//function : MultForm
//purpose  : 
//=======================================================================

BSplCLib_MultDistribution BSplCLib::MultForm
(const Array1OfInteger& Mults,
 const Standard_Integer          FromK1,
 const Standard_Integer          ToK2)
{
  Standard_Integer First,Last;
  if (FromK1 < ToK2) {
    First = FromK1;
    Last  = ToK2;
  }
  else {
    First = ToK2;
    Last  = FromK1;
  }
  Standard_Integer MLower = Mults.Lower();
  const Standard_Integer *pmu = &Mults(MLower);
  pmu -= MLower;
  Standard_Integer FirstMult = pmu[First];
  BSplCLib_MultDistribution MForm = BSplCLib_Constant;
  Standard_Integer i    = First + 1;
  Standard_Integer Mult = pmu[i];
  
//  while (MForm != BSplCLib_NonUniform && i <= Last) { ???????????JR????????
  while (MForm != BSplCLib_NonConstant && i <= Last) {
    if (i == First + 1) {  
      if (Mult != FirstMult)      MForm = BSplCLib_QuasiConstant;
    }
    else if (i == Last)  {
      if (MForm == BSplCLib_QuasiConstant) {
	if (FirstMult != pmu[i])  MForm = BSplCLib_NonConstant;
      }
      else {
	if (Mult != pmu[i])       MForm = BSplCLib_NonConstant;
      }
    }
    else {
      if (Mult != pmu[i])         MForm = BSplCLib_NonConstant;
      Mult = pmu[i];
    }
    i++;
  }
  return MForm;
}

//=======================================================================
//function : KnotAnalysis
//purpose  : 
//=======================================================================

void BSplCLib::KnotAnalysis (const Standard_Integer         Degree,
                             const Standard_Boolean         Periodic,
                             const TColStd_Array1OfReal&    CKnots,
                             const TColStd_Array1OfInteger& CMults,
                             GeomAbs_BSplKnotDistribution&  KnotForm,
                             Standard_Integer&              MaxKnotMult)
{
  KnotForm = GeomAbs_NonUniform;

  BSplCLib_KnotDistribution KSet = 
    BSplCLib::KnotForm (CKnots, 1, CKnots.Length());
  

  if (KSet == BSplCLib_Uniform) {
    BSplCLib_MultDistribution MSet =
      BSplCLib::MultForm (CMults, 1, CMults.Length());
    switch (MSet) {
    case BSplCLib_NonConstant   :       
      break;
    case BSplCLib_Constant      : 
      if (CKnots.Length() == 2) {
        KnotForm = GeomAbs_PiecewiseBezier;
      }
      else {
        if (CMults (1) == 1)  KnotForm = GeomAbs_Uniform;   
      }
      break;
    case BSplCLib_QuasiConstant :   
      if (CMults (1) == Degree + 1) {
        Standard_Real M = CMults (2);
        if (M == Degree )   KnotForm = GeomAbs_PiecewiseBezier;
        else if  (M == 1)   KnotForm = GeomAbs_QuasiUniform;
      }
      break;
    }
  }

  Standard_Integer FirstKM = 
    Periodic ? CKnots.Lower() :  BSplCLib::FirstUKnotIndex (Degree,CMults);
  Standard_Integer LastKM =
    Periodic ? CKnots.Upper() :  BSplCLib::LastUKnotIndex (Degree,CMults);
  MaxKnotMult = 0;
  if (LastKM - FirstKM != 1) {
    Standard_Integer Multi;
    for (Standard_Integer i = FirstKM + 1; i < LastKM; i++) {
      Multi = CMults (i);
      MaxKnotMult = Max (MaxKnotMult, Multi);
    }
  }
}

//=======================================================================
//function : Reparametrize
//purpose  : 
//=======================================================================

void BSplCLib::Reparametrize
(const Standard_Real      U1,
 const Standard_Real      U2,
 Array1OfReal&   Knots)
{
  Standard_Integer Lower  = Knots.Lower();
  Standard_Integer Upper  = Knots.Upper();
  Standard_Real UFirst    = Min (U1, U2);
  Standard_Real ULast     = Max (U1, U2);
  Standard_Real NewLength = ULast - UFirst;
  BSplCLib_KnotDistribution KSet = BSplCLib::KnotForm (Knots, Lower, Upper);
  if (KSet == BSplCLib_Uniform) {
    Standard_Real DU = NewLength / (Upper - Lower);
    Knots (Lower) = UFirst;

    for (Standard_Integer i = Lower + 1; i <= Upper; i++) {
      Knots (i) = Knots (i-1) + DU;
    }
  }
  else {
    Standard_Real K2;
    Standard_Real Ratio;
    Standard_Real K1 = Knots (Lower);
    Standard_Real Length = Knots (Upper) - Knots (Lower);
    Knots (Lower) = UFirst;

    for (Standard_Integer i = Lower + 1; i <= Upper; i++) {
      K2 = Knots (i);
      Ratio = (K2 - K1) / Length;
      Knots (i) = Knots (i-1) + (NewLength * Ratio);

      //for CheckCurveData
      Standard_Real Eps = Epsilon( Abs(Knots(i-1)) );
      if (Knots(i) - Knots(i-1) <= Eps)
	Knots(i) = NextAfter (Knots(i-1) + Eps, RealLast());

      K1 = K2;
    }
  }
}

//=======================================================================
//function : Reverse
//purpose  : 
//=======================================================================

void  BSplCLib::Reverse(TColStd_Array1OfReal& Knots)
{
  Standard_Integer first = Knots.Lower();
  Standard_Integer last  = Knots.Upper();
  Standard_Real kfirst = Knots(first);
  Standard_Real klast = Knots(last);
  Standard_Real tfirst = kfirst;
  Standard_Real tlast  = klast;
  first++;
  last--;

  while (first <= last) {
    tfirst += klast - Knots(last);
    tlast  -= Knots(first) - kfirst;
    kfirst = Knots(first);
    klast  = Knots(last);
    Knots(first) = tfirst;
    Knots(last)  = tlast;
    first++;
    last--;
  }
}

//=======================================================================
//function : Reverse
//purpose  : 
//=======================================================================

void  BSplCLib::Reverse(TColStd_Array1OfInteger& Mults)
{
  Standard_Integer first = Mults.Lower();
  Standard_Integer last  = Mults.Upper();
  Standard_Integer temp;

  while (first < last) {
    temp = Mults(first);
    Mults(first) = Mults(last);
    Mults(last) = temp;
    first++;
    last--;
  }
}

//=======================================================================
//function : Reverse
//purpose  : 
//=======================================================================

void  BSplCLib::Reverse(TColStd_Array1OfReal& Weights,
			const Standard_Integer L)
{
  Standard_Integer i, l = L;
  l = Weights.Lower()+(l-Weights.Lower())%(Weights.Upper()-Weights.Lower()+1);

  TColStd_Array1OfReal temp(0,Weights.Length()-1);

  for (i = Weights.Lower(); i <= l; i++)
    temp(l-i) = Weights(i);

  for (i = l+1; i <= Weights.Upper(); i++)
    temp(l-Weights.Lower()+Weights.Upper()-i+1) = Weights(i);

  for (i = Weights.Lower(); i <= Weights.Upper(); i++)
    Weights(i) = temp(i-Weights.Lower());
}

//=======================================================================
//function : IsRational
//purpose  : 
//=======================================================================

Standard_Boolean  BSplCLib::IsRational(const TColStd_Array1OfReal& Weights,
				       const Standard_Integer I1,
				       const Standard_Integer I2,
//				       const Standard_Real Epsi)
				       const Standard_Real )
{
  Standard_Integer i, f = Weights.Lower(), l = Weights.Length();
  Standard_Integer I3 = I2 - f;
  const Standard_Real * WG = &Weights(f);
  WG -= f;

  for (i = I1 - f; i < I3; i++) {
    if (WG[f + (i % l)] != WG[f + ((i + 1) % l)]) return Standard_True;
  }
  return Standard_False ;
}

//=======================================================================
//function : Eval
//purpose  : evaluate point and derivatives
//=======================================================================

void  BSplCLib::Eval(const Standard_Real U,
		     const Standard_Integer Degree,
		     Standard_Real& Knots, 
		     const Standard_Integer Dimension, 
		     Standard_Real& Poles)
{
  Standard_Integer step,i,Dms,Dm1,Dpi,Sti;
  Standard_Real X, Y, *poles, *knots = &Knots;
  Dm1 = Dms = Degree;
  Dm1--;
  Dms++;
  switch (Dimension) { 

  case 1 : {
    
    for (step = - 1; step < Dm1; step++) {
      Dms--;
      poles = &Poles;
      Dpi   = Dm1;
      Sti   = step;
      
      for (i = 0; i < Dms; i++) {
	Dpi++;
	Sti++;
	X = (knots[Dpi] - U) / (knots[Dpi] - knots[Sti]);
	Y = 1 - X;
	poles[0] *= X; poles[0] += Y * poles[1];
	poles += 1;
      }
    }
    break;
  }
  case 2 : {
    
    for (step = - 1; step < Dm1; step++) {
      Dms--;
      poles = &Poles;
      Dpi   = Dm1;
      Sti   = step;
      
      for (i = 0; i < Dms; i++) {
	Dpi++;
	Sti++;
	X = (knots[Dpi] - U) / (knots[Dpi] - knots[Sti]);
	Y = 1 - X;
	poles[0] *= X; poles[0] += Y * poles[2];
	poles[1] *= X; poles[1] += Y * poles[3];
	poles += 2;
      }
    }
    break;
  }
  case 3 : {
    
    for (step = - 1; step < Dm1; step++) {
      Dms--;
      poles = &Poles;
      Dpi   = Dm1;
      Sti   = step;
      
      for (i = 0; i < Dms; i++) {
	Dpi++;
	Sti++;
	X = (knots[Dpi] - U) / (knots[Dpi] - knots[Sti]);
	Y = 1 - X;
	poles[0] *= X; poles[0] += Y * poles[3];
	poles[1] *= X; poles[1] += Y * poles[4];
	poles[2] *= X; poles[2] += Y * poles[5];
	poles += 3;
      }
    }
    break;
  }
  case 4 : {
    
    for (step = - 1; step < Dm1; step++) {
      Dms--;
      poles = &Poles;
      Dpi   = Dm1;
      Sti   = step;
      
      for (i = 0; i < Dms; i++) {
	Dpi++;
	Sti++;
	X = (knots[Dpi] - U) / (knots[Dpi] - knots[Sti]);
	Y = 1 - X;
	poles[0] *= X; poles[0] += Y * poles[4];
	poles[1] *= X; poles[1] += Y * poles[5];
	poles[2] *= X; poles[2] += Y * poles[6];
	poles[3] *= X; poles[3] += Y * poles[7];
	poles += 4;
      }
    }
    break;
  }
    default : {
      Standard_Integer k;
      
      for (step = - 1; step < Dm1; step++) {
	Dms--;
	poles = &Poles;
	Dpi   = Dm1;
	Sti   = step;
	
	for (i = 0; i < Dms; i++) {
	  Dpi++;
	  Sti++;
	  X = (knots[Dpi] - U) / (knots[Dpi] - knots[Sti]);
	  Y = 1 - X;
	  
	  for (k = 0; k < Dimension; k++) {
	    poles[k] *= X;
	    poles[k] += Y * poles[k + Dimension];
	  }
	  poles += Dimension;
	}
      }
    }
  }
}

//=======================================================================
//function : BoorScheme
//purpose  : 
//=======================================================================

void  BSplCLib::BoorScheme(const Standard_Real U,
			   const Standard_Integer Degree,
			   Standard_Real& Knots, 
			   const Standard_Integer Dimension, 
			   Standard_Real& Poles, 
			   const Standard_Integer Depth, 
			   const Standard_Integer Length)
{
  //
  // Compute the values
  //
  //  P(i,j) (U).
  //
  // for i = 0 to Depth, 
  // j = 0 to Length - i
  //
  //  The Boor scheme is :
  //
  //  P(0,j) = Pole(j)
  //  P(i,j) = x * P(i-1,j) + (1-x) * P(i-1,j+1)
  //
  //    where x = (knot(i+j+Degree) - U) / (knot(i+j+Degree) - knot(i+j))
  //
  //
  //  The values are stored in the array Poles
  //  They are alternatively written if the odd and even positions.
  //
  //  The successives contents of the array are
  //   ***** means unitialised, l = Degree + Length
  //
  //  P(0,0) ****** P(0,1) ...... P(0,l-1) ******** P(0,l)
  //  P(0,0) P(1,0) P(0,1) ...... P(0,l-1) P(1,l-1) P(0,l)
  //  P(0,0) P(1,0) P(2,0) ...... P(2,l-1) P(1,l-1) P(0,l)
  //

  Standard_Integer i,k,step;
  Standard_Real *knots = &Knots;
  Standard_Real *pole, *firstpole = &Poles - 2 * Dimension;
  // the steps of recursion

  for (step = 0; step < Depth; step++) {
    firstpole += Dimension;
    pole = firstpole;
    // compute the new row of poles

    for (i = step; i < Length; i++) {
      pole += 2 * Dimension;
      // coefficient
      Standard_Real X = (knots[i+Degree-step] - U) 
	/ (knots[i+Degree-step] - knots[i]);
      Standard_Real Y = 1. - X;
      // Value
      // P(i,j) = X * P(i-1,j) + (1-X) * P(i-1,j+1)

      for (k = 0; k < Dimension; k++)
	pole[k] = X * pole[k - Dimension] + Y * pole[k + Dimension];
    }
  }
}

//=======================================================================
//function : AntiBoorScheme
//purpose  : 
//=======================================================================

Standard_Boolean  BSplCLib::AntiBoorScheme(const Standard_Real    U,
					   const Standard_Integer Degree,
					   Standard_Real&         Knots, 
					   const Standard_Integer Dimension, 
					   Standard_Real&         Poles, 
					   const Standard_Integer Depth, 
					   const Standard_Integer Length,
					   const Standard_Real    Tolerance)
{
  // do the Boor scheme reverted.

  Standard_Integer i,k,step, half_length;
  Standard_Real *knots = &Knots;
  Standard_Real z,X,Y,*pole, *firstpole = &Poles + (Depth-1) * Dimension;

  // Test the special case length = 1 
  // only verification of the central point

  if (Length == 1) {
    X = (knots[Degree] - U) / (knots[Degree] - knots[0]);
    Y = 1. - X;

    for (k = 0; k < Dimension; k++) {
      z = X * firstpole[k] + Y * firstpole[k+2*Dimension];
      if (Abs(z - firstpole[k+Dimension]) > Tolerance) 
	return Standard_False;
    }
    return Standard_True;
  }

  // General case
  // the steps of recursion

  for (step = Depth-1; step >= 0; step--) {
    firstpole -= Dimension;
    pole = firstpole;

    // first step from left to right

    for (i = step; i < Length-1; i++) {
      pole += 2 * Dimension;

      X = (knots[i+Degree-step] - U) / (knots[i+Degree-step] - knots[i]);
      Y = 1. - X;

      for (k = 0; k < Dimension; k++)
	pole[k+Dimension] = (pole[k] - X*pole[k-Dimension]) / Y;

    }

    // second step from right to left
    pole += 4* Dimension;
    half_length = (Length - 1 + step) / 2  ;
    //
    // only do half of the way from right to left 
    // otherwise it start degenerating because of 
    // overflows
    // 

    for (i = Length-1; i > half_length ; i--) {
      pole -= 2 * Dimension;

      // coefficient
      X = (knots[i+Degree-step] - U) / (knots[i+Degree-step] - knots[i]);
      Y = 1. - X;

      for (k = 0; k < Dimension; k++) {
	z = (pole[k] - Y * pole[k+Dimension]) / X;
	if (Abs(z-pole[k-Dimension]) > Tolerance) 
	  return Standard_False;
	pole[k-Dimension] += z;
	pole[k-Dimension] /= 2.;
      }
    }
  }
  return Standard_True;
}

//=======================================================================
//function : Derivative
//purpose  : 
//=======================================================================

void  BSplCLib::Derivative(const Standard_Integer Degree, 
			   Standard_Real& Knots, 
			   const Standard_Integer Dimension, 
			   const Standard_Integer Length, 
			   const Standard_Integer Order, 
			   Standard_Real& Poles)
{
  Standard_Integer i,k,step,span = Degree;
  Standard_Real *knot = &Knots;

  for (step = 1; step <= Order; step++) {
    Standard_Real* pole = &Poles;

    for (i = step; i < Length; i++) {
      Standard_Real coef = - span / (knot[i+span] - knot[i]);

      for (k = 0; k < Dimension; k++) {
	pole[k] -= pole[k+Dimension];
	pole[k] *= coef;
      }
      pole += Dimension;
    }
    span--;
  }
}

//=======================================================================
//function : Bohm
//purpose  : 
//=======================================================================

void  BSplCLib::Bohm(const Standard_Real U,
		     const Standard_Integer Degree,
		     const Standard_Integer N,
		     Standard_Real& Knots,
		     const Standard_Integer Dimension,
		     Standard_Real& Poles)
{
  // First phase independant of U, compute the poles of the derivatives
  Standard_Integer i,j,iDim,min,Dmi,DDmi,jDmi,Degm1;
  Standard_Real *knot = &Knots, *pole, coef, *tbis, *psav, *psDD, *psDDmDim;
  psav     = &Poles;
  if (N < Degree) min = N;
  else            min = Degree;
  Degm1 = Degree - 1;
  DDmi = (Degree << 1) + 1;
  switch (Dimension) { 
  case 1 : {
    psDD     = psav + Degree;
    psDDmDim = psDD - 1;
    
    for (i = 0; i < Degree; i++) {
      DDmi--;
      pole = psDD;
      tbis = psDDmDim;
      jDmi = DDmi;
      
      for (j = Degm1; j >= i; j--) {
	jDmi--;
	*pole -= *tbis; *pole /= (knot[jDmi] - knot[j]);
	pole--;
	tbis--;
      }
    }
    // Second phase, dependant of U
    iDim = - 1;
    
    for (i = 0; i < Degree; i++) {
      iDim += 1;
      pole  = psav + iDim;
      tbis  = pole + 1;
      coef  = U - knot[i];
      
      for (j = i; j >= 0; j--) {
	*pole += coef * (*tbis);
	pole--;
	tbis--;
      }
    }
    // multiply by the degrees
    coef = Degree;
    Dmi  = Degree;
    pole = psav + 1;
    
    for (i = 1; i <= min; i++) {
      *pole *= coef; pole++;
      Dmi--;
      coef  *= Dmi;
    }
    break;
  }
  case 2 : {
    psDD     = psav + (Degree << 1);
    psDDmDim = psDD - 2;
    
    for (i = 0; i < Degree; i++) {
      DDmi--;
      pole = psDD;
      tbis = psDDmDim;
      jDmi = DDmi;
      
      for (j = Degm1; j >= i; j--) {
	jDmi--;
	coef   = 1. / (knot[jDmi] - knot[j]);
	*pole -= *tbis; *pole *= coef; pole++; tbis++;
	*pole -= *tbis; *pole *= coef;
	pole  -= 3;
	tbis  -= 3;
      }
    }
    // Second phase, dependant of U
    iDim = - 2;
    
    for (i = 0; i < Degree; i++) {
      iDim += 2;
      pole  = psav + iDim;
      tbis  = pole + 2;
      coef  = U - knot[i];
      
      for (j = i; j >= 0; j--) {
	*pole += coef * (*tbis); pole++; tbis++;
	*pole += coef * (*tbis);
	pole  -= 3;
	tbis  -= 3;
      }
    }
    // multiply by the degrees
    coef = Degree;
    Dmi  = Degree;
    pole = psav + 2;
    
    for (i = 1; i <= min; i++) {
      *pole *= coef; pole++;
      *pole *= coef; pole++;
      Dmi--;
      coef  *= Dmi;
    }
    break;
  }
  case 3 : {
    psDD     = psav + (Degree << 1) + Degree;
    psDDmDim = psDD - 3;
    
    for (i = 0; i < Degree; i++) {
      DDmi--;
      pole = psDD;
      tbis = psDDmDim;
      jDmi = DDmi;
      
      for (j = Degm1; j >= i; j--) {
	jDmi--;
	coef   = 1. / (knot[jDmi] - knot[j]);
	*pole -= *tbis; *pole *= coef; pole++; tbis++;
	*pole -= *tbis; *pole *= coef; pole++; tbis++;
	*pole -= *tbis; *pole *= coef;
	pole  -= 5;
	tbis  -= 5;
      }
    }
    // Second phase, dependant of U
    iDim = - 3;
    
    for (i = 0; i < Degree; i++) {
      iDim += 3;
      pole  = psav + iDim;
      tbis  = pole + 3;
      coef  = U - knot[i];
      
      for (j = i; j >= 0; j--) {
	*pole += coef * (*tbis); pole++; tbis++;
	*pole += coef * (*tbis); pole++; tbis++;
	*pole += coef * (*tbis);
	pole  -= 5;
	tbis  -= 5;
      }
    }
    // multiply by the degrees
    coef = Degree;
    Dmi  = Degree;
    pole = psav + 3;
    
    for (i = 1; i <= min; i++) {
      *pole *= coef; pole++;
      *pole *= coef; pole++;
      *pole *= coef; pole++;
      Dmi--;
      coef  *= Dmi;
    }
    break;
  }
  case 4 : {
    psDD     = psav + (Degree << 2);
    psDDmDim = psDD - 4;
    
    for (i = 0; i < Degree; i++) {
      DDmi--;
      pole = psDD;
      tbis = psDDmDim;
      jDmi = DDmi;
      
      for (j = Degm1; j >= i; j--) {
	jDmi--;
	coef   = 1. / (knot[jDmi] - knot[j]);
	*pole -= *tbis; *pole *= coef; pole++; tbis++;
	*pole -= *tbis; *pole *= coef; pole++; tbis++;
	*pole -= *tbis; *pole *= coef; pole++; tbis++;
	*pole -= *tbis; *pole *= coef;
	pole  -= 7;
	tbis  -= 7;
      }
    }
    // Second phase, dependant of U
    iDim = - 4;
    
    for (i = 0; i < Degree; i++) {
      iDim += 4;
      pole  = psav + iDim;
      tbis  = pole + 4;
      coef  = U - knot[i];
      
      for (j = i; j >= 0; j--) {
	*pole += coef * (*tbis); pole++; tbis++;
	*pole += coef * (*tbis); pole++; tbis++;
	*pole += coef * (*tbis); pole++; tbis++;
	*pole += coef * (*tbis);
	pole  -= 7;
	tbis  -= 7;
      }
    }
    // multiply by the degrees
    coef = Degree; 
    Dmi  = Degree;
    pole = psav + 4;
   
    for (i = 1; i <= min; i++) {
      *pole *= coef; pole++;
      *pole *= coef; pole++;
      *pole *= coef; pole++;
      *pole *= coef; pole++;
      Dmi--;
      coef  *= Dmi;
    }
    break;
  }
    default : {
      Standard_Integer k;
      Standard_Integer Dim2 = Dimension << 1;
      psDD     = psav + Degree * Dimension;
      psDDmDim = psDD - Dimension;
      
      for (i = 0; i < Degree; i++) {
	DDmi--;
	pole = psDD;
	tbis = psDDmDim;
	jDmi = DDmi;
	
	for (j = Degm1; j >= i; j--) {
	  jDmi--;
	  coef = 1. / (knot[jDmi] - knot[j]);
	  
	  for (k = 0; k < Dimension; k++) {
	    *pole -= *tbis; *pole *= coef; pole++; tbis++;
	  }
	  pole -= Dim2;
	  tbis -= Dim2;
	}
      }
      // Second phase, dependant of U
      iDim = - Dimension;
      
      for (i = 0; i < Degree; i++) {
	iDim += Dimension;
	pole  = psav + iDim;
	tbis  = pole + Dimension;
	coef  = U - knot[i];
	
	for (j = i; j >= 0; j--) {
	  
	  for (k = 0; k < Dimension; k++) {
	    *pole += coef * (*tbis); pole++; tbis++;
	  }
	  pole -= Dim2;
	  tbis -= Dim2;
	}
      }
      // multiply by the degrees
      coef = Degree;
      Dmi  = Degree;
      pole = psav + Dimension;
      
      for (i = 1; i <= min; i++) {
	
	for (k = 0; k < Dimension; k++) {
	  *pole *= coef; pole++;
	}
	Dmi--;
	coef *= Dmi;
      }
    }
  }
}

//=======================================================================
//function : BuildKnots
//purpose  : 
//=======================================================================

void BSplCLib::BuildKnots(const Standard_Integer         Degree,
			  const Standard_Integer         Index,
			  const Standard_Boolean         Periodic,
			  const TColStd_Array1OfReal&    Knots,
                          const TColStd_Array1OfInteger* Mults,
			  Standard_Real&                 LK)
{
  Standard_Integer KLower = Knots.Lower();
  const Standard_Real * pkn = &Knots(KLower);
  pkn -= KLower;
  Standard_Real *knot = &LK;
  if (Mults == nullptr) {
    switch (Degree) {
    case 1 : {
      Standard_Integer j = Index    ;
      knot[0] = pkn[j]; j++;
      knot[1] = pkn[j];
      break;
    }
    case 2 : {
      Standard_Integer j = Index - 1;
      knot[0] = pkn[j]; j++;
      knot[1] = pkn[j]; j++;
      knot[2] = pkn[j]; j++;
      knot[3] = pkn[j];
      break;
    }
    case 3 : {
      Standard_Integer j = Index - 2;
      knot[0] = pkn[j]; j++;
      knot[1] = pkn[j]; j++;
      knot[2] = pkn[j]; j++;
      knot[3] = pkn[j]; j++;
      knot[4] = pkn[j]; j++;
      knot[5] = pkn[j];
      break;
    }
    case 4 : {
      Standard_Integer j = Index - 3;
      knot[0] = pkn[j]; j++;
      knot[1] = pkn[j]; j++;
      knot[2] = pkn[j]; j++;
      knot[3] = pkn[j]; j++;
      knot[4] = pkn[j]; j++;
      knot[5] = pkn[j]; j++;
      knot[6] = pkn[j]; j++;
      knot[7] = pkn[j];
      break;
    }
    case 5 : {
      Standard_Integer j = Index - 4;
      knot[0] = pkn[j]; j++;
      knot[1] = pkn[j]; j++;
      knot[2] = pkn[j]; j++;
      knot[3] = pkn[j]; j++;
      knot[4] = pkn[j]; j++;
      knot[5] = pkn[j]; j++;
      knot[6] = pkn[j]; j++;
      knot[7] = pkn[j]; j++;
      knot[8] = pkn[j]; j++;
      knot[9] = pkn[j];
      break;
    }
    case 6 : {
      Standard_Integer j = Index - 5;
      knot[ 0] = pkn[j]; j++;
      knot[ 1] = pkn[j]; j++;
      knot[ 2] = pkn[j]; j++;
      knot[ 3] = pkn[j]; j++;
      knot[ 4] = pkn[j]; j++;
      knot[ 5] = pkn[j]; j++;
      knot[ 6] = pkn[j]; j++;
      knot[ 7] = pkn[j]; j++;
      knot[ 8] = pkn[j]; j++;
      knot[ 9] = pkn[j]; j++;
      knot[10] = pkn[j]; j++;
      knot[11] = pkn[j];
      break;
    }
    default : {
      Standard_Integer i,j;
      Standard_Integer Deg2 = Degree << 1;
      j = Index - Degree;
	
      for (i = 0; i < Deg2; i++) {
        j++;
        knot[i] = pkn[j];
      }
    }
    }
  }
  else {
    Standard_Integer i;
    Standard_Integer Deg1 = Degree - 1;
    Standard_Integer KUpper = Knots.Upper();
    Standard_Integer MLower = Mults->Lower();
    Standard_Integer MUpper = Mults->Upper();
    const Standard_Integer * pmu = &(*Mults)(MLower);
    pmu -= MLower;
    Standard_Real dknot = 0;
    Standard_Integer ilow = Index    , mlow = 0;
    Standard_Integer iupp = Index + 1, mupp = 0;
    Standard_Real loffset = 0., uoffset = 0.;
    Standard_Boolean getlow = Standard_True, getupp = Standard_True;
    if (Periodic) {
      dknot = pkn[KUpper] - pkn[KLower];
      if (iupp > MUpper) {
        iupp = MLower + 1;
        uoffset = dknot;
      }
    }
    // Find the knots around Index

    for (i = 0; i < Degree; i++) {
      if (getlow) {
        mlow++;
        if (mlow > pmu[ilow]) {
          mlow = 1;
          ilow--;
          getlow =  (ilow >= MLower);
          if (Periodic && !getlow) {
            ilow = MUpper - 1;
            loffset = dknot;
            getlow = Standard_True;
          }
        }
        if (getlow)
          knot[Deg1 - i] = pkn[ilow] - loffset;
      }
      if (getupp) {
        mupp++;
        if (mupp > pmu[iupp]) {
          mupp = 1;
          iupp++;
          getupp = (iupp <= MUpper);
          if (Periodic && !getupp) {
            iupp = MLower + 1;
            uoffset = dknot;
            getupp = Standard_True;
          }
        }
        if (getupp)
          knot[Degree + i] = pkn[iupp] + uoffset;
      }
    }
  }
}

//=======================================================================
//function : PoleIndex
//purpose  : 
//=======================================================================

Standard_Integer BSplCLib::PoleIndex(const Standard_Integer         Degree,
				     const Standard_Integer         Index,
				     const Standard_Boolean         Periodic,
				     const TColStd_Array1OfInteger& Mults)
{
  Standard_Integer i, pindex = 0;

  for (i = Mults.Lower(); i <= Index; i++)
    pindex += Mults(i);
  if (Periodic)
    pindex -= Mults(Mults.Lower());
  else
    pindex -= Degree + 1;

  return pindex;
}

//=======================================================================
//function : BuildBoor
//purpose  : builds the local array for boor
//=======================================================================

void  BSplCLib::BuildBoor(const Standard_Integer         Index,
			  const Standard_Integer         Length,
			  const Standard_Integer         Dimension,
			  const TColStd_Array1OfReal&    Poles,
			  Standard_Real&                 LP)
{
  Standard_Real *poles = &LP;
  Standard_Integer i,k, ip = Poles.Lower() + Index * Dimension;
  
  for (i = 0; i < Length+1; i++) {

    for (k = 0; k < Dimension; k++) {
      poles[k] = Poles(ip);
      ip++;
      if (ip > Poles.Upper()) ip = Poles.Lower();
    }
    poles += 2 * Dimension;
  }
}

//=======================================================================
//function : BoorIndex
//purpose  : 
//=======================================================================

Standard_Integer  BSplCLib::BoorIndex(const Standard_Integer Index,
				      const Standard_Integer Length,
				      const Standard_Integer Depth)
{
  if (Index <= Depth)  return Index;
  if (Index <= Length) return 2 * Index - Depth;
  return                      Length + Index - Depth;
}

//=======================================================================
//function : GetPole
//purpose  : 
//=======================================================================

void  BSplCLib::GetPole(const Standard_Integer         Index,
			const Standard_Integer         Length,
			const Standard_Integer         Depth,
			const Standard_Integer         Dimension,
			Standard_Real&                 LP,
			Standard_Integer&              Position,
			TColStd_Array1OfReal&          Pole)
{
  Standard_Integer k;
  Standard_Real* pole = &LP + BoorIndex(Index,Length,Depth) * Dimension;

  for (k = 0; k < Dimension; k++) {
    Pole(Position) = pole[k];
    Position++;
  }
  if (Position > Pole.Upper()) Position = Pole.Lower();
}

//=======================================================================
//function : PrepareInsertKnots
//purpose  : 
//=======================================================================

Standard_Boolean  BSplCLib::PrepareInsertKnots
(const Standard_Integer         Degree,
 const Standard_Boolean         Periodic, 
 const TColStd_Array1OfReal&    Knots,
 const TColStd_Array1OfInteger& Mults,
 const TColStd_Array1OfReal&    AddKnots,
 const TColStd_Array1OfInteger* AddMults,
 Standard_Integer&              NbPoles,
 Standard_Integer&              NbKnots, 
 const Standard_Real            Tolerance,
 const Standard_Boolean         Add)
{
  Standard_Boolean addflat = AddMults == nullptr;
  
  Standard_Integer first,last;
  if (Periodic) {
    first = Knots.Lower();
    last  = Knots.Upper();
  }
  else {
    first = FirstUKnotIndex(Degree,Mults);
    last  = LastUKnotIndex(Degree,Mults);
  }
  Standard_Real adeltaK1 = Knots(first)-AddKnots(AddKnots.Lower());
   Standard_Real adeltaK2 = AddKnots(AddKnots.Upper())-Knots(last);
  if (adeltaK1 > Tolerance) return Standard_False;
  if (adeltaK2  > Tolerance) return Standard_False;
  
  Standard_Integer sigma = 0, mult, amult;
  NbKnots = 0;
  Standard_Integer  k  = Knots.Lower() - 1;
  Standard_Integer  ak = AddKnots.Lower();

  if(Periodic && AddKnots.Length() > 1)
  {
    //gka for case when segments was produced on full period only one knot
    //was added in the end of curve
    if(fabs(adeltaK1) <= Precision::PConfusion() && 
      fabs(adeltaK2) <= Precision::PConfusion())
      ak++;
  }
  
  Standard_Integer aLastKnotMult = Mults (Knots.Upper());
  Standard_Real au,oldau = AddKnots(ak),Eps;
  
  while (ak <= AddKnots.Upper()) {
    au = AddKnots(ak);
    if (au < oldau) return Standard_False;
    oldau = au;

    Eps = Max(Tolerance,Epsilon(au));
    
    while ((k < Knots.Upper()) && (Knots(k+1)  - au <= Eps)) {
      k++;
      NbKnots++;
      sigma += Mults(k);
    }

    if (addflat) amult = 1;
    else         amult = Max(0,(*AddMults)(ak)); // FIXME: inelegant
    
    while ((ak < AddKnots.Upper()) &&
	   (Abs(au - AddKnots(ak+1)) <= Eps)) {
      ak++;
      if (Add) {
	if (addflat) amult++;
	else         amult += Max(0,(*AddMults)(ak)); // FIXME: inelegant
      }
    }
    
    
    if (Abs(au - Knots(k)) <= Eps) {
      // identic to existing knot
      mult = Mults(k);
      if (Add) {
	if (mult + amult > Degree)
	  amult = Max(0,Degree - mult);
	sigma += amult;
	
      }
      else if (amult > mult) {
	if (amult > Degree) amult = Degree;
        if (k == Knots.Upper () && Periodic)
        {
          aLastKnotMult = Max (amult, mult);
          sigma += 2 * (aLastKnotMult - mult);
        }
        else
        {
	  sigma += amult - mult;
        }
      }
      /*
      // on periodic curves if this is the last knot
      // the multiplicity is added twice to account for the first knot
      if (k == Knots.Upper() && Periodic) {
	if (Add)
	  sigma += amult;
	else
	  sigma += amult - mult;
      }
      */
    }
    else {
      // not identic to existing knot
      if (amult > 0) {
	if (amult > Degree) amult = Degree;
	NbKnots++;
	sigma += amult;
      }
    }
    
    ak++;
  }
  
  // count the last knots
  while (k < Knots.Upper()) {
    k++;
    NbKnots++;
    sigma += Mults(k);
  }

  if (Periodic) {
    //for periodic B-Spline the requirement is that multiplicites of the first
    //and last knots must be equal (see Geom_BSplineCurve constructor for
    //instance);
    //respectively AddMults() must meet this requirement if AddKnots() contains
    //knot(s) coincident with first or last
    NbPoles = sigma - aLastKnotMult;
  }
  else {
    NbPoles = sigma - Degree - 1;
  }
 
  return Standard_True;
}

//=======================================================================
//function : Copy
//purpose  : copy reals from an array to an other
//        
//   NbValues are copied from OldPoles(OldFirst)
//                 to    NewPoles(NewFirst)
//
//   Periodicity is handled.
//   OldFirst and NewFirst are updated 
//   to the position after the last copied pole.
//
//=======================================================================

void BSplCLib_Copy(const Standard_Integer      NbPoles,
		   Standard_Integer&           OldFirst,
		   const TColStd_Array1OfReal& OldPoles,
		   Standard_Integer&           NewFirst,
		   TColStd_Array1OfReal&       NewPoles)
{
  // reset the index in the range for periodicity

  OldFirst = OldPoles.Lower() + 
    (OldFirst - OldPoles.Lower()) % (OldPoles.Upper() - OldPoles.Lower() + 1);

  NewFirst = NewPoles.Lower() + 
    (NewFirst - NewPoles.Lower()) % (NewPoles.Upper() - NewPoles.Lower() + 1);

  // copy
  Standard_Integer i;

  for (i = 1; i <= NbPoles; i++) {
    NewPoles(NewFirst) = OldPoles(OldFirst);
    OldFirst++;
    if (OldFirst > OldPoles.Upper()) OldFirst = OldPoles.Lower();
    NewFirst++;
    if (NewFirst > NewPoles.Upper()) NewFirst = NewPoles.Lower();
  }
}

//=======================================================================
//function : BuildSchoenbergPoints
//purpose  : 
//=======================================================================

void  BSplCLib::BuildSchoenbergPoints(const Standard_Integer         Degree,
				      const TColStd_Array1OfReal&    FlatKnots,
				      TColStd_Array1OfReal&          Parameters) 
{
  Standard_Integer ii,
  jj ;
  Standard_Real Inverse ;
  Inverse = 1.0e0 / (Standard_Real)Degree ;
  
  for (ii = Parameters.Lower() ;   ii <= Parameters.Upper() ; ii++) {
    Parameters(ii) = 0.0e0 ;
    
    for (jj = 1 ; jj <= Degree ; jj++) {
      Parameters(ii) += FlatKnots(jj + ii) ;
    } 
    Parameters(ii) *= Inverse ; 
  }
}

//=======================================================================
//function : TangExtendToConstraint 
//purpose  : Extends a Bspline function using the tangency map
// WARNING :  
//  
// 
//=======================================================================

void  BSplCLib::TangExtendToConstraint
(const  TColStd_Array1OfReal&          FlatKnots, 
 const Standard_Real                   C1Coefficient,
 const Standard_Integer                NumPoles,
 Standard_Real&                        Poles,
 const Standard_Integer                CDimension,
 const Standard_Integer                CDegree,
 const  TColStd_Array1OfReal&          ConstraintPoint, 
 const Standard_Integer                Continuity,
 const Standard_Boolean                After,
 Standard_Integer&                     NbPolesResult,
 Standard_Integer&                     NbKnotsResult,
 Standard_Real&                        KnotsResult, 
 Standard_Real&                        PolesResult) 
{
#ifdef OCCT_DEBUG
  if (CDegree<Continuity+1) {
    cout<<"The BSpline degree must be greater than the order of continuity"<<endl;
  }
#endif
  Standard_Real * Padr = &Poles ;
  Standard_Real * KRadr = &KnotsResult ;
  Standard_Real * PRadr = &PolesResult ;

////////////////////////////////////////////////////////////////////////
//
//    1. calculation of extension nD
//
////////////////////////////////////////////////////////////////////////

//  Hermite matrix
  Standard_Integer Csize = Continuity + 2;
  math_Matrix  MatCoefs(1,Csize, 1,Csize);
  if (After) {
    PLib::HermiteCoefficients(0, 1,           // Limits 
			      Continuity, 0,  // Orders of constraints
			      MatCoefs);
  }
  else {
    PLib::HermiteCoefficients(0, 1,           // Limits 
			      0, Continuity,  // Orders of constraints
			      MatCoefs);    
  }


//  position at the node of connection
  Standard_Real Tbord ;
  if (After) {
    Tbord = FlatKnots(FlatKnots.Upper()-CDegree);
  }
  else {
    Tbord = FlatKnots(FlatKnots.Lower()+CDegree);
  }
  Standard_Boolean periodic_flag = Standard_False ;
  Standard_Integer ipos, extrap_mode[2], derivative_request = Max(Continuity,1);
  extrap_mode[0] = extrap_mode[1] = CDegree;
  TColStd_Array1OfReal  EvalBS(1, CDimension * (derivative_request+1)) ; 
  Standard_Real * Eadr = (Standard_Real *) &EvalBS(1) ;
  BSplCLib::Eval(Tbord,periodic_flag,derivative_request,extrap_mode[0],
                  CDegree,FlatKnots,CDimension,Poles,*Eadr);

//  norm of the tangent at the node of connection
  math_Vector Tgte(1,CDimension);

  for (ipos=1;ipos<=CDimension;ipos++) {
    Tgte(ipos) = EvalBS(ipos+CDimension);
  }
  Standard_Real L1=Tgte.Norm();


//  matrix of constraints
  math_Matrix Contraintes(1,Csize,1,CDimension);
  if (After) {

    for (ipos=1;ipos<=CDimension;ipos++) {
      Contraintes(1,ipos) = EvalBS(ipos);
      Contraintes(2,ipos) = C1Coefficient * EvalBS(ipos+CDimension);
      if(Continuity >= 2) Contraintes(3,ipos) = EvalBS(ipos+2*CDimension) * Pow(C1Coefficient,2);
      if(Continuity >= 3) Contraintes(4,ipos) = EvalBS(ipos+3*CDimension) * Pow(C1Coefficient,3);
      Contraintes(Continuity+2,ipos) = ConstraintPoint(ipos);
    }
  }
  else {

    for (ipos=1;ipos<=CDimension;ipos++) {
      Contraintes(1,ipos) = ConstraintPoint(ipos);
      Contraintes(2,ipos) = EvalBS(ipos);
      if(Continuity >= 1) Contraintes(3,ipos) = C1Coefficient * EvalBS(ipos+CDimension);
      if(Continuity >= 2) Contraintes(4,ipos) = EvalBS(ipos+2*CDimension) * Pow(C1Coefficient,2);
      if(Continuity >= 3) Contraintes(5,ipos) = EvalBS(ipos+3*CDimension) * Pow(C1Coefficient,3);
    }
  }

//  calculate the coefficients of extension
  Standard_Integer ii, jj, kk;
  TColStd_Array1OfReal ExtraCoeffs(1,Csize*CDimension);
  ExtraCoeffs.Init(0.);

  for (ii=1; ii<=Csize; ii++) {

    for (jj=1; jj<=Csize; jj++) {

      for (kk=1; kk<=CDimension; kk++) {
        ExtraCoeffs(kk+(jj-1)*CDimension) += MatCoefs(ii,jj)*Contraintes(ii,kk);
      }
    }
  }

//  calculate the poles of extension
  TColStd_Array1OfReal ExtrapPoles(1,Csize*CDimension);
  Standard_Real * EPadr = &ExtrapPoles(1) ;
  PLib::CoefficientsPoles(CDimension,
                          ExtraCoeffs, nullptr,
		          ExtrapPoles, nullptr);

//  calculate the nodes of extension with multiplicities
  TColStd_Array1OfReal ExtrapNoeuds(1,2);
  ExtrapNoeuds(1) = 0.;
  ExtrapNoeuds(2) = 1.;
  TColStd_Array1OfInteger ExtrapMults(1,2);
  ExtrapMults(1) = Csize;
  ExtrapMults(2) = Csize;

// flat nodes of extension
  TColStd_Array1OfReal FK2(1, Csize*2);
  BSplCLib::KnotSequence(ExtrapNoeuds,ExtrapMults,FK2);

//  norm of the tangent at the connection point 
  if (After) {
    BSplCLib::Eval(0.,periodic_flag,1,extrap_mode[0],
                  Csize-1,FK2,CDimension,*EPadr,*Eadr);
  }
  else {
    BSplCLib::Eval(1.,periodic_flag,1,extrap_mode[0],
                  Csize-1,FK2,CDimension,*EPadr,*Eadr);
  }

  for (ipos=1;ipos<=CDimension;ipos++) {
    Tgte(ipos) = EvalBS(ipos+CDimension);
  }
  Standard_Real L2 = Tgte.Norm();

//  harmonisation of degrees
  TColStd_Array1OfReal NewP2(1, (CDegree+1)*CDimension);
  TColStd_Array1OfReal NewK2(1, 2);
  TColStd_Array1OfInteger NewM2(1, 2);
  if (Csize-1<CDegree) {
    BSplCLib::IncreaseDegree(Csize-1,CDegree,Standard_False,CDimension,
                             ExtrapPoles,ExtrapNoeuds,ExtrapMults,
                             NewP2,NewK2,NewM2);
  }
  else {
    NewP2 = ExtrapPoles;
    NewK2 = ExtrapNoeuds;
    NewM2 = ExtrapMults;
  }

//  flat nodes of extension after harmonization of degrees
  TColStd_Array1OfReal NewFK2(1, (CDegree+1)*2);
  BSplCLib::KnotSequence(NewK2,NewM2,NewFK2);


////////////////////////////////////////////////////////////////////////
//
//    2.  concatenation C0
//
////////////////////////////////////////////////////////////////////////

//  ratio of reparametrization
  Standard_Real Ratio=1, Delta;
  if ( (L1 > Precision::Confusion()) && (L2 > Precision::Confusion()) ) {
    Ratio = L2 / L1;
  }
  if ( (Ratio < 1.e-5) || (Ratio > 1.e5) ) Ratio = 1;

  if (After) {
//    do not touch the first BSpline
    Delta = Ratio*NewFK2(NewFK2.Lower()) - FlatKnots(FlatKnots.Upper());
  }
  else {
//    do not touch the second BSpline
    Delta = Ratio*NewFK2(NewFK2.Upper()) - FlatKnots(FlatKnots.Lower());
  }

//  result of the concatenation
  Standard_Integer NbP1 = NumPoles, NbP2 = CDegree+1;
  Standard_Integer NbK1 = FlatKnots.Length(), NbK2 = 2*(CDegree+1);
  TColStd_Array1OfReal NewPoles (1, (NbP1+ NbP2-1)*CDimension);
  TColStd_Array1OfReal NewFlats (1, NbK1+NbK2-CDegree-2);

//  poles
  Standard_Integer indNP, indP, indEP;
  if (After) {

    for (ii=1;  ii<=NbP1+NbP2-1; ii++) {

      for (jj=1;  jj<=CDimension; jj++) {
	indNP = (ii-1)*CDimension+jj;
        indP = (ii-1)*CDimension+jj-1;
        indEP = (ii-NbP1)*CDimension+jj;
        if (ii<NbP1) NewPoles(indNP) =  Padr[indP];
        else NewPoles(indNP) = NewP2(indEP);
      }
    }
  }
  else {

    for (ii=1;  ii<=NbP1+NbP2-1; ii++) {

      for (jj=1;  jj<=CDimension; jj++) {
	indNP = (ii-1)*CDimension+jj;
        indEP = (ii-1)*CDimension+jj;
        indP = (ii-NbP2)*CDimension+jj-1;
        if (ii<NbP2) NewPoles(indNP) =  NewP2(indEP);
        else NewPoles(indNP) = Padr[indP];
      }
    }
  }

//  flat nodes 
  if (After) {
//    start with the nodes of the initial surface

    for (ii=1; ii<NbK1; ii++) {
      NewFlats(ii) = FlatKnots(FlatKnots.Lower()+ii-1);
    }
//    continue with the reparameterized nodes of the extension

    for (ii=1; ii<=NbK2-CDegree-1; ii++) {
      NewFlats(NbK1+ii-1) = Ratio*NewFK2(NewFK2.Lower()+ii+CDegree) - Delta;
    }
  }
  else {
//    start with the reparameterized nodes of the extension

    for (ii=1; ii<NbK2-CDegree; ii++) {
      NewFlats(ii) = Ratio*NewFK2(NewFK2.Lower()+ii-1) - Delta;
    }
//    continue with the nodes of the initial surface

    for (ii=2; ii<=NbK1; ii++) {
      NewFlats(NbK2+ii-CDegree-2) = FlatKnots(FlatKnots.Lower()+ii-1);
    }
  }


////////////////////////////////////////////////////////////////////////
//
//    3.  reduction of multiplicite at the node of connection
//
////////////////////////////////////////////////////////////////////////

//  number of separate nodes
  Standard_Integer KLength = 1;

  for (ii=2; ii<=NbK1+NbK2-CDegree-2;ii++) {
    if (NewFlats(ii) != NewFlats(ii-1)) KLength++;
  }

//  flat nodes --> nodes + multiplicities
  TColStd_Array1OfReal NewKnots (1, KLength);
  TColStd_Array1OfInteger NewMults (1, KLength);
  NewMults.Init(1);
  jj = 1;
  NewKnots(jj) = NewFlats(1);

  for (ii=2; ii<=NbK1+NbK2-CDegree-2;ii++) {
    if (NewFlats(ii) == NewFlats(ii-1)) NewMults(jj)++;
    else {
      jj++;
      NewKnots(jj) = NewFlats(ii);
    }
  }

//  reduction of multiplicity at the second or the last but one node
  Standard_Integer Index = 2, M = CDegree;
  if (After) Index = KLength-1;
  TColStd_Array1OfReal ResultPoles (1, (NbP1+ NbP2-1)*CDimension);
  TColStd_Array1OfReal ResultKnots (1, KLength);
  TColStd_Array1OfInteger ResultMults (1, KLength);
  Standard_Real Tol = 1.e-6;
  Standard_Boolean Ok = Standard_True;

  while ( (M>CDegree-Continuity) && Ok) {
    Ok = RemoveKnot(Index, M-1, CDegree, Standard_False, CDimension,
		    NewPoles, NewKnots, NewMults,
		    ResultPoles, ResultKnots, ResultMults, Tol);
    if (Ok) M--;
  }

  if (M == CDegree) {
//    number of poles of the concatenation
    NbPolesResult = NbP1 + NbP2 - 1;
//    the poles of the concatenation
    Standard_Integer PLength = NbPolesResult*CDimension;

    for (jj=1; jj<=PLength; jj++) {
      PRadr[jj-1] = NewPoles(jj);
    }
  
//    flat nodes of the concatenation
    Standard_Integer ideb = 0;

    for (jj=0; jj<NewKnots.Length(); jj++) {
      for (ii=0; ii<NewMults(jj+1); ii++) {
	KRadr[ideb+ii] = NewKnots(jj+1);
      }
      ideb += NewMults(jj+1);
    }
    NbKnotsResult = ideb;
  }

  else {
//    number of poles of the result
    NbPolesResult = NbP1 + NbP2 - 1 - CDegree + M;
//    the poles of the result
    Standard_Integer PLength = NbPolesResult*CDimension;

    for (jj=0; jj<PLength; jj++) {
      PRadr[jj] = ResultPoles(jj+1);
    }
  
//    flat nodes of the result
    Standard_Integer ideb = 0;

    for (jj=0; jj<ResultKnots.Length(); jj++) {
      for (ii=0; ii<ResultMults(jj+1); ii++) {
	KRadr[ideb+ii] = ResultKnots(jj+1);
      }
      ideb += ResultMults(jj+1);
    }
    NbKnotsResult = ideb;
  }
}

//=======================================================================
// function: FlatBezierKnots
// purpose :
//=======================================================================

// array of flat knots for bezier curve of maximum 25 degree
static const Standard_Real knots[52] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                         1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
const Standard_Real& BSplCLib::FlatBezierKnots (const Standard_Integer Degree)
{
  Standard_OutOfRange_Raise_if (Degree < 1 || Degree > MaxDegree() || MaxDegree() != 25,
    "Bezier curve degree greater than maximal supported");

  return knots[25-Degree];
}
