cmake_minimum_required(VERSION 3.20)
project(vector)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(.)

enable_testing()
add_executable(test_constructor "tests/test_constructor.c")
add_test(NAME TestConstructor COMMAND test_constructor)

