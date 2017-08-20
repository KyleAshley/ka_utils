# Specify the minimum version for CMake
cmake_minimum_required(VERSION 2.8)

# Project's name
project(ka_utils)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -pedantic")

# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)


# The following folder will be included
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
include_directories(${INCLUDE_DIR})
  

# data_structures lib code
set(UTILS_LIB_SRC
  ${CMAKE_SOURCE_DIR}/src/utils.cpp
)

add_library(utils SHARED ${UTILS_LIB_SRC})

# create the data structures library
add_executable(test_utils ${CMAKE_SOURCE_DIR}/src/test_utils.cpp )


target_link_libraries(test_utils utils )



