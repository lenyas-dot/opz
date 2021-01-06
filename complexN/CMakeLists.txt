cmake_minimum_required(VERSION 3.19)
project(complexN)

set(CMAKE_CXX_STANDARD 20)
set(SOURCE_FILES src/complex.cpp)
add_subdirectory(googletest)


add_executable(complexN main.cpp src/complex.cpp src/complex.h)
add_executable(tests tests.cpp ${SOURCE_FILES})

target_include_directories(complexN PRIVATE source)
target_include_directories(tests PRIVATE googletest/googletest/include PRIVATE source)

target_link_libraries(tests gtest)