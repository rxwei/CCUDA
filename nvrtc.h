#ifndef _SWIFT_CCUDA_NVRTC_H_
#define _SWIFT_CCUDA_NVRTC_H_

#if defined(__APPLE__)
#import "/usr/local/cuda/include/nvrtc.h"
#elif defined(__linux__)
#import "/usr/lib/cuda/include/nvrtc.h"
#else
#import <nvrtc.h>
#endif

#endif // _SWIFT_CCUDA_NVRTC_H_
