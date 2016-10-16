#if defined(__APPLE__)
#import "/usr/local/cuda/include/nvrtc.h"
#elif defined(__linux__)
#import "/usr/lib/cuda/include/nvrtc.h"
#else
#import <nvrtc.h>
#endif
