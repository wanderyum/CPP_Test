# 版本信息
cmake_minimum_required(VERSION 3.0)

# C++14
SET(CMAKE_CXX_STANDARD 14)

# 项目信息
SET(name jsonTest)
project(${name} VERSION 1.0 LANGUAGES CXX)

# 编译目标
add_executable(${name} json_test.cpp json.hpp)