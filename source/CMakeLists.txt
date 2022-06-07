# Possible implementation values is C_IMG
set(IMPLEMENTATION_TYPE C_IMG)
set(SRC main.cpp )

if("${IMPLEMENTATION_TYPE}" STREQUAL "C_IMG")
    set(C_IMAGE_PATH implementations/c_image)
    find_package(X11 REQUIRED)
    set(SRC ${SRC} ${C_IMAGE_PATH}/c_image_context_png.cpp
            ${C_IMAGE_PATH}/c_image_context_base.cpp
            ${C_IMAGE_PATH}/c_image_context_window.cpp
            ${C_IMAGE_PATH}/c_image_context_window.h)

    if(NOT ${X11_FOUND})
        message(SEND_ERROR "Cannot find X11 library")
    endif()

    include_directories(${X11_INCLUDE_DIR})
    link_directories(${X11_LIBRARIES})
    set(LIBS ${X11_LIBRARIES})
endif()

message(${SRC})
add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} ${LIBS})
