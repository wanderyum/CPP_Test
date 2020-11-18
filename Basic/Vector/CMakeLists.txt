# 版本信息
cmake_minimum_required(VERSION 3.2)

# C++14
SET(CMAKE_CXX_STANDARD 14)

# 项目信息
SET(name Vector)
project(${name} VERSION 1.0 LANGUAGES CXX)

# 编译目标
add_executable(${name} ${name}.cpp)