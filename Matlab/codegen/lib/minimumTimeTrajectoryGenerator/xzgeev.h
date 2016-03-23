//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xzgeev.h
//
// MATLAB Coder version            : 3.1
// C/C++ source code generated on  : 22-Mar-2016 21:24:49
//
#ifndef XZGEEV_H
#define XZGEEV_H

// Include Files
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "minimumTimeTrajectoryGenerator_types.h"

// Function Declarations
extern void xzgeev(const creal32_T A_data[], const int A_size[2], int *info,
                   creal32_T alpha1_data[], int alpha1_size[1], creal32_T
                   beta1_data[], int beta1_size[1]);

#endif

//
// File trailer for xzgeev.h
//
// [EOF]
//
