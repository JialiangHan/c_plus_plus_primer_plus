cmake_minimum_required(VERSION 3.5)

# set the project name
project(c_plus_plus_primer_plus)
set(CMAKE_CXX_STANDARD 11)
INCLUDE_DIRECTORIES(
    include
)
# add the executable
add_executable(ch4 src/ch4.cpp)