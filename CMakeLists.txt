cmake_minimum_required(VERSION 3.16)

project(CMakeProjectTemplate)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

enable_testing()

include_directories(${PROJECT_SOURCE_DIR}/headers)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)
