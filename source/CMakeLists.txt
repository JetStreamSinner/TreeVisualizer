# Possible implementation values is C_IMG
set(SRC tree_visualizer.cpp tree_node.cpp)

if("${IMPLEMENTATION_TYPE}" STREQUAL "C_IMG")
    set(C_IMAGE_PATH implementations/c_image)
    set(SRC ${SRC} ${C_IMAGE_PATH}/c_image_context_png.cpp
            ${C_IMAGE_PATH}/c_image_context_base.cpp
            ${C_IMAGE_PATH}/c_image_context_window.cpp
            )

    find_package(X11 REQUIRED)
    if(NOT ${X11_FOUND})
        message(SEND_ERROR "Cannot find X11 library")
    endif()

    find_package(PNG REQUIRED)
    if (NOT ${PNG_FOUND})
        message(SEND_ERROR "Cannot find PNG library")
    endif()

    include_directories(${X11_INCLUDE_DIR})
    link_directories(${X11_LIBRARIES})
    set(LIBS ${X11_LIBRARIES} PNG::PNG)
endif()

add_library(${PROJECT_NAME} SHARED ${SRC})
target_link_libraries(${PROJECT_NAME} ${LIBS})
