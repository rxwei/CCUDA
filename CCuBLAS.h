#if __APPLE__
#import "/usr/local/cuda/include/cublas_v2.h"
#elif __linux__
#import "/usr/lib/cuda/include/cublas_v2.h"
#else
#import "cublas_v2.h"
#endif
