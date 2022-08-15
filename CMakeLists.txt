# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.9)
# 设置项目名称
project(algorithm)


# 添加 answer 子目录
#add_subdirectory(answer)

add_executable(out 001_509_fib.cpp)
#target_link_libraries(subdirectory libanswer)