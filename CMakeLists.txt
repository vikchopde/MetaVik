cmake_minimum_required(VERSION 3.8)
project(MetaVik)

set(CMAKE_CXX_STANDARD 14)
include_directories(include/MetaVik/types)

set(SOURCE_FILES main.cpp include/MetaVik/types/integral_constant.h)


add_executable(MetaVik ${SOURCE_FILES})