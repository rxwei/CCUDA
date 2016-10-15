#if __APPLE__
#import "/usr/local/cuda/include/cudnn.h"
#elif __linux__
#import "/usr/lib/cuda/include/cudnn.h"
#else
#import "cudnn.h"
#endif
