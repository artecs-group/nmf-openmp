#ifndef _COMMON_
#define _COMMON_

#include <sys/time.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "mkl.h"
#include <omp.h>
#include "mkl_omp_offload.h"

#define RANDOM
//#define DEBUG

#ifdef REAL_S
#define C_REAL float
#else
#define C_REAL double
#endif

#endif