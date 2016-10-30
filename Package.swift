import PackageDescription

let package = Package(
    name: "CCUDA"
)

let dylib = Product(
    name: "CUDA",
    type: .Library(.Dynamic),
    modules: [ "CCUDA", "CCUDARuntime", "CNVRTC", "CCuBLAS", "CNVBLAS", "CCuDNN" ]
)
products.append(dylib)
let staticLib = Product(
    name: "CUDA",
    type: .Library(.Static),
    modules: [ "CCUDA", "CCUDARuntime", "CNVRTC", "CCuBLAS", "CNVBLAS", "CCuDNN" ]
)
products.append(staticLib)
