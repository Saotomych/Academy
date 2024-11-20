cmake_minimum_required(VERSION 3.10)

project(Merge)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)

add_executable(test_merge test.cpp)

target_link_libraries(test_merge GTest::GTest GTest::Main)