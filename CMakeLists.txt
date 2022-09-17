cmake_minimum_required(VERSION 3.24.2)
project(dst)
set (CXX_STANDARD 17)
set (CXX_STANDARD_REQUIRED 17)

add_subdirectory(d2darray)
add_executable(test test.cpp d2darray/d2darray.cpp)
target_link_libraries(test d2darray)


