cmake_minimum_required(VERSION 4.0)
project(_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(_2
        bell.cpp
        bell.h
        compleks.cpp
        compleks.h
        main.cpp
        oddeven.cpp
        oddeven.h
        stock.cpp
        stock.h)
