#if __APPLE__
#import "/usr/local/cuda/include/nvrtc.h"
#elif __linux__
#import "/usr/lib/cuda/include/nvrtc.h"
#else
#import "nvrtc.h"
#endif
