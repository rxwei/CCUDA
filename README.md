# SwiftCUDA
Swift CUDA system module

## Components
```swift
import SwiftCUDA.CUDA         // Equivalent to #include<cuda.h>
import SwiftCUDA.Runtime      // Equivalent to #include<cuda_runtime.h>
import SwiftCUDA.Runtime.API  // Equivalent to #include<cuda_runtime_api.h>
import SwiftCUDA.cuBLAS       // Equivalent to #include<cublas.h>
```

## Use it in your Swift package
Add a dependency:
```swift
.Package(url: "https://github.com/rxwei/SwiftCUDA", majorVersion: 1, minor: 0)
```

You'll need to specify the path to your LLVM headers and library at `swift build`. For example:
```
swift build -Xcc -I/usr/local/cuda/include -Xlinker -L/usr/local/cuda/lib
```
