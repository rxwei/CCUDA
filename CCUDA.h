#if __APPLE__
#import "/usr/local/cuda/include/cuda.h"
#elif __linux__
#import "/usr/lib/cuda/include/cuda.h"
#else
#import "cuda.h"
#endif
