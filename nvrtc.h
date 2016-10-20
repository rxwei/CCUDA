#ifndef _SWIFT_CCUDA_NVRTC_H_
#define _SWIFT_CCUDA_NVRTC_H_

#if defined(__APPLE__) || defined(__linux__)
#include "/usr/local/cuda/include/nvrtc.h"
#else
#include <nvrtc.h>
#endif

#endif // _SWIFT_CCUDA_NVRTC_H_
