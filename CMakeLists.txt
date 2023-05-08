cmake_minimum_required(VERSION 3.25)
project(SkipList)

set(CMAKE_CXX_STANDARD 23)
set(PROJECT_SOURCES
        source/main.cpp
        source/Menu.cpp
        source/Menu.h
        source/Node.cpp
        source/Node.h
        source/SkipList.cpp
        source/SkipList.h
        )
add_executable(SkipList ${PROJECT_SOURCES})
