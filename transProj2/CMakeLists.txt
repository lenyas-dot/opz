cmake_minimum_required(VERSION 3.19)
project(transProj2)

set(CMAKE_CXX_STANDARD 20)

add_definitions(-std=gnu++17 -U__STRICT_ANSI__)
set(LINKER_FLAGS1 -lcygwin)
set(LINKER_FLAGS2 -lSDL2main)
set(LINKER_FLAGS3 -lSDL2)
set(LINKER_FLAGS4 -mwindows)

add_subdirectory(googletest)
include_directories(googletest/googletest/include)

set(SOURCE_FILES Functions.cpp charLetters.cpp)

add_executable(transProj2 main.cpp Functions.cpp Functions.h charLetters.cpp charLetters.h)
add_executable(tests tests.cpp ${SOURCE_FILES})

target_link_libraries(tests gtest)

