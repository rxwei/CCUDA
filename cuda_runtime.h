#if defined(__APPLE__)
#import "/usr/local/cuda/include/cuda_runtime_api.h"
#elif defined(__linux__)
#import "/usr/lib/cuda/include/cuda_runtime.h"
#else
#import <cuda_runtime.h>
#endif
