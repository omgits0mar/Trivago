cmake_minimum_required(VERSION 3.17)
project(Trivago)

set(CMAKE_CXX_STANDARD 14)

add_executable(Trivago main.cpp Trivago.cpp Trivago.h Hotel.cpp Hotel.h)