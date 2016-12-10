cmake_minimum_required(VERSION 3.6)
project(GoFish)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Dice.h Points.h Game.h)
add_executable(GoFish ${SOURCE_FILES})