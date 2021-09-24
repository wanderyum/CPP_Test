#cmake版本
cmake_minimum_required(VERSION 3.1)

#项目名称
project(ffmpeg_test)

#采用C++14标准
set(CMAKE_CXX_STANDARD 14)


# 编译目标
add_executable(ffmpeg_test src/decode_video.c)

# 链接库
target_link_libraries(ffmpeg_test avcodec)