/* Sources directory */
#define SOURCE_FOLDER "/home/manish/kanika/kanika/PspNet-Caffe/caffe_pspnet"

/* Binaries directory */
#define BINARY_FOLDER "/home/manish/kanika/kanika/PspNet-Caffe/caffe_pspnet/build"

/* NVIDA Cuda */
#define HAVE_CUDA

/* NVIDA cuDNN */
/* #undef HAVE_CUDNN */
/* #undef USE_CUDNN */

/* NVIDA cuDNN */
/* #undef CPU_ONLY */

/* Test device */
#define CUDA_TEST_DEVICE -1

/* Temporary (TODO: remove) */
#if 1
  #define CMAKE_SOURCE_DIR SOURCE_FOLDER "/src/"
  #define EXAMPLES_SOURCE_DIR BINARY_FOLDER "/examples/"
  #define CMAKE_EXT ".gen.cmake"
#else
  #define CMAKE_SOURCE_DIR "src/"
  #define EXAMPLES_SOURCE_DIR "examples/"
  #define CMAKE_EXT ""
#endif

/* Matlab */
/* #undef HAVE_MATLAB */

/* IO libraries */
#define USE_OPENCV
#define USE_LEVELDB
#define USE_LMDB
/* #undef ALLOW_LMDB_NOLOCK */
