# CUDA
Swift CUDA system module

## Components
```swift
import CCUDA              // Equivalent to #include <cuda.h>
import CCUDA.Runtime      // Equivalent to #include <cuda_runtime.h>
import CCUDA.Runtime.API  // Equivalent to #include <cuda_runtime_api.h>
import CNVRTC             // Equivalent to #include <nvrtc.h>
import CCuBLAS            // Equivalent to #include <cublas.h>
import CCuBLAS.V2         // Equivalent to #include <cublas_v2.h>
import CCuBLAS.API        // Equivalent to #include <cublas_api.h>
import CNVBLAS            // Equivalent to #include <nvblas.h>
import CCuDNN             // Equivalent to #include <cudnn.h>
```

## Dependencies

One of more of the following modules are required, **when and only when** you `import` them.

**CUDA** at `/usr/local/cuda/`

**NVRTC** at `/usr/local/cuda/`

**cuBLAS** at `/usr/local/cuda/`

**NVBLAS** at `/usr/local/cuda/`

**cuDNN** at `/usr/local/cuda/`

For instance, if you only need to use the CUDA driver library while you don't
have cuBLAS/nvBLAS/cuDNN installed, the module will compile, instead of asking
you to install uncessary libraries.

## Use it in your Swift package

Add a dependency:
```swift
.Package(url: "https://github.com/rxwei/CCUDA", majorVersion: 1)
```

You'll need to specify the path to your CUDA headers and library at `swift build`. For example:
```
swift build -Xcc -I/usr/local/cuda/include -Xlinker -L/usr/local/cuda/lib
```
