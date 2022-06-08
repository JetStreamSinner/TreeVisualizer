cmake_minimum_required(VERSION 3.18)

project(TreeVisualizer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -lstdc++fs)
set(IMPLEMENTATION_TYPE C_IMG)
set(BUILD_SAMPLES ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
include_directories(include)
conan_basic_setup()

add_subdirectory(source)
if(${BUILD_SAMPLES})
    add_subdirectory(examples)
endif()
