#ifndef _SWIFT_CCUDA_CUDNN_H_
#define _SWIFT_CCUDA_CUDNN_H_

#if defined(__APPLE__)
#import "/usr/local/cuda/include/cudnn.h"
#elif defined(__linux__)
#import "/usr/lib/cuda/include/cudnn.h"
#else
#import <cudnn.h>
#endif

#endif // _SWIFT_CCUDA_CUDNN_H_
