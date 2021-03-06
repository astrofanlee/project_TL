//==================================================================================================
//
// Purpose: compute Wigner 3J symbols for special cases that are needed for aberration problem.
//
//==================================================================================================
//
// Author: Jens Chluba (Johns Hopkins University)
//
// first implementation: Nov  2012
// last modification   : Nov  2012
//
//==================================================================================================

#ifndef WIGNER_H
#define WIGNER_H

//#include <iostream>
//#include <string>

//using namespace std;

//==================================================================================================
//
// Wigner 3J symbol for m1=m2=m3=0. This symbol is needed for fixing the normalization of the
// recursion relations
//
//==================================================================================================
double ThreeJ_l1l2l3(int l1, int l2, int l3);

//==================================================================================================
//
// Wigner 3J symbol for m1=-m2 and m3=0. 
//
//==================================================================================================
//void Wigner_3J_l1l2l3_m_mm(int l1, int l2, int l3, 
//                           vector<double> &results, 
//                           int &mmin, int &mmax);

#endif

//==================================================================================================
//==================================================================================================
