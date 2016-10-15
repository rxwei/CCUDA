#if __APPLE__
#import "/usr/local/cuda/include/nvblas.h"
#elif __linux__
#import "/usr/lib/cuda/include/nvblas.h"
#else
#import "nvblas.h"
#endif
