#ifndef _SWIFT_CCUDA_CUDNN_H_
#define _SWIFT_CCUDA_CUDNN_H_

#if defined(__APPLE__) || defined(__linux__)
#include "/usr/local/cuda/include/cudnn.h"
#else
#include <cudnn.h>
#endif

#endif // _SWIFT_CCUDA_CUDNN_H_
