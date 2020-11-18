#cmake版本
cmake_minimum_required(VERSION 3.2)

#项目名称
SET(name ImageReading)
project(Camera LANGUAGES CXX)

#采用C++14标准
set(CMAKE_CXX_STANDARD 14)

# opecv库
SET(OpenCV_DIR "D:/lib/opencv/opencv/build" CACHE PATH "Initial cahe" FORCE)
FIND_PACKAGE(OpenCV REQUIRED)

# 编译目标
ADD_EXECUTABLE(${name} ${name}.cpp)

# 链接库
TARGET_LINK_LIBRARIES(${name} ${OpenCV_LIBS})