cmake_minimum_required(VERSION 3.18)

project(TreeVisualizer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -lstdc++fs)
set(IMPLEMENTATION_TYPE C_IMG)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(include)
add_subdirectory(source)
