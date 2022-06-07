# Possible implementation values is C_IMG
set(IMPLEMENTATION_TYPE C_IMG)

set(src main.cpp)
set(libs)

if("${IMPLEMENTATION_TYPE}" STREQUAL "C_IMG")
    set(c_image_path implementations/c_image)
    set(src "${src}\;${c_image_path}/image_context.cpp")

    find_package(X11 REQUIRED)

    if(NOT ${X11_FOUND})
        message(SEND_ERROR "Cannot find X11 library")
    endif()

    include_directories(${X11_INCLUDE_DIR})
    link_directories(${X11_LIBRARIES})
    set(libs ${X11_LIBRARIES})
endif()

message(${src})
add_executable(${PROJECT_NAME} ${src})
target_link_libraries(${PROJECT_NAME} ${libs})
