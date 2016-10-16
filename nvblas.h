#if defined(__APPLE__)
#import "/usr/local/cuda/include/nvblas.h"
#elif defined(__linux__)
#import "/usr/lib/cuda/include/nvblas.h"
#else
#import <nvblas.h>
#endif
