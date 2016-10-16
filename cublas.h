#if defined(__APPLE__)
#import "/usr/local/cuda/include/cublas.h"
#elif defined(__linux__)
#import "/usr/lib/cuda/include/cublas.h"
#else
#import <cublas.h>
#endif
