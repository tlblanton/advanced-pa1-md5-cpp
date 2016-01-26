cmake_minimum_required(VERSION 3.3)
project(pa1_md5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES pa1md5.cpp md5.cpp)
add_executable(pa1_md5 ${SOURCE_FILES})