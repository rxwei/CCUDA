#ifndef _SWIFT_CCUDA_CUDA_RUNTIME_H_
#define _SWIFT_CCUDA_CUDA_RUNTIME_H_

#if defined(__APPLE__)
#include "/usr/local/cuda/include/cuda_runtime.h"
#elif defined(__linux__)
#include "/usr/lib/cuda/include/cuda_runtime.h"
#else
#include <cuda_runtime.h>
#endif

#endif // _SWIFT_CCUDA_CUDA_RUNTIME_H_
