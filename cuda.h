#ifndef _SWIFT_CCUDA_CUDA_H_
#define _SWIFT_CCUDA_CUDA_H_

#if defined(__APPLE__)
#import "/usr/local/cuda/include/cuda.h"
#elif defined(__linux__)
#import "/usr/lib/cuda/include/cuda.h"
#else
#import <cuda.h>
#endif

#endif // _SWIFT_CCUDA_CUDA_H_
