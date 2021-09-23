cmake_minimum_required(VERSION 3.0)

project(cppzmqtest VERSION 0.0.1 LANGUAGES CXX)

find_package(cppzmq)


set(CMAKE_CXX_STANDARD 14)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)
include_directories(${PROJECT_SOURCE_DIR}/include/)

#add_library(func src/func.cpp)

add_executable(server src/server.cpp)
add_executable(client src/client.cpp)
#target_link_libraries(${PROJECT_NAME} func)
target_link_libraries(server cppzmq)
target_link_libraries(client cppzmq)

