cmake_minimum_required(VERSION 3.6)
project(VanEps)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

file(GLOB_RECURSE LIB_SRC src/*.cpp src/*.hpp)
file(GLOB_RECURSE TEST_SRC test/*.cpp test/*.hpp)

add_library(VanEps STATIC ${LIB_SRC})
add_executable(VanEpsTests ${TEST_SRC})

target_link_libraries(VanEpsTests VanEps)

enable_testing()
add_test(NAME VanEpsTests COMMAND VanEpsTests)