cmake_minimum_required(VERSION 4.3)
project(winter_and_construction)

set(CMAKE_CXX_STANDARD 26)

add_executable(winter_and_construction main.cpp
        cmake-build-debug/Project.h
        User.cpp
)
