# CUDA
Swift CUDA system module

## Components
```swift
import CUDA.Driver       // Equivalent to #include <cuda.h>
import CUDA.Runtime      // Equivalent to #include <cuda_runtime.h>
import CUDA.Runtime.API  // Equivalent to #include <cuda_runtime_api.h>
import CUDA.cuBLAS       // Equivalent to #include <cublas.h>
import CUDA.cuBLAS.V2    // Equivalent to #include <cublas_v2.h>
import CUDA.cuBLAS.API    // Equivalent to #include <cublas_api.h>
import CUDA.nvBLAS       // Equivalent to #include <nvblas.h>
import CUDA.cuDNN        // Equivalent to #include <cudnn.h>
```

## Use it in your Swift package
Add a dependency:
```swift
.Package(url: "https://github.com/rxwei/SwiftCUDA", majorVersion: 1, minor: 0)
```

You'll need to specify the path to your CUDA headers and library at `swift build`. For example:
```
swift build -Xcc -I/usr/local/cuda/include -Xlinker -L/usr/local/cuda/lib
```
