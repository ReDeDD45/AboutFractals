cmake_minimum_required(VERSION 3.6)
project(AboutFractals)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Complex.cpp Complex.h RecSequence.h RecSeqBrot.h)
add_executable(AboutFractals ${SOURCE_FILES})