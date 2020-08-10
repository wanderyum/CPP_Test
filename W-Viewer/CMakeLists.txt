cmake_minimum_required(VERSION 3.2)

project(M-Viewer VERSION 0.0.1 LANGUAGES CXX)

#set( CMAKE_BUILD_TYPE Debug )
set( CMAKE_BUILD_TYPE Release )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -march=native -O3 -pthread" )

set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set( LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

link_directories(${PROJECT_SOURCE_DIR}/lib)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

# wxWidgets
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

add_executable(M-Viewer WIN32 mviewer.cpp)
target_link_libraries(M-Viewer ${wxWidgets_LIBRARIES})
