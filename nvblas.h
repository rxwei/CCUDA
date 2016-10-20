#ifndef _SWIFT_CCUDA_NVBLAS_H_
#define _SWIFT_CCUDA_NVBLAS_H_

#if defined(__APPLE__) || defined(__linux__)
#include "/usr/local/cuda/include/nvblas.h"
#else
#include <nvblas.h>
#endif

#endif // _SWIFT_CCUDA_NVBLAS_H_
