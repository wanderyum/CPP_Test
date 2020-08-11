# 版本信息
cmake_minimum_required(VERSION 3.2)

# 项目信息
project(simple VERSION 1.0 LANGUAGES CXX)

# 编译目标
add_library(func func.cpp)
add_executable(main main.cpp)

# 依赖关系
target_link_libraries(main PRIVATE func)