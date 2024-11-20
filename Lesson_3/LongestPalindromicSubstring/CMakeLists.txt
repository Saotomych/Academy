cmake_minimum_required(VERSION 3.10)

project(Palindrome)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)

add_executable(test_palindrome test.cpp)

target_link_libraries(test_palindrome GTest::GTest GTest::Main)