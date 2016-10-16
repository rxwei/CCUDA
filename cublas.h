#ifndef _SWIFT_CCUDA_CUBLAS_H_
#define _SWIFT_CCUDA_CUBLAS_H_

#if defined(__APPLE__)
#include "cuda_runtime.h" // Ambiguity bug workaround
#include "/usr/local/cuda/include/cublas_v2.h"
#elif defined(__linux__)
#include "cuda_runtime.h"
#include "/usr/lib/cuda/include/cublas_v2.h"
#else
#import <cublas.h>
#endif

#endif // _SWIFT_CCUDA_CUBLAS_H_
