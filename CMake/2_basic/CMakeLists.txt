cmake_minimum_required(VERSION 3.2)

project(Basic VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)
include_directories(${PROJECT_SOURCE_DIR}/include/)

add_library(func src/func.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} func)