cmake_minimum_required(VERSION 3.5)

# set the project name
project(c_plus_plus_primer_plus)
set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

enable_testing()
file(GLOB_RECURSE ALL_SRC "src/*.cpp")
INCLUDE_DIRECTORIES(
    include
    ${GTEST_INCLUDE_DIRS}
    test
)

# add the executable
add_executable(exercise_test ${ALL_SRC} test/test.cpp)

target_link_libraries(
    exercise_test
    ${GTEST_LIBRARIES}
    gtest_main
    pthread
)

add_test(My_test exercise_test)