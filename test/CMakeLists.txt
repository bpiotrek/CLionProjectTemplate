cmake_minimum_required(VERSION 3.16)

include(GoogleTest)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)

add_executable(TestMain main.cxx)
target_link_libraries(TestMain Lib gtest_main)

gtest_discover_tests(TestMain)
