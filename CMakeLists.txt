cmake_minimum_required(VERSION 3.20)
project(vector)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(.)

enable_testing()

add_executable(test_constructor "tests/test_constructor.c")
add_test(NAME TestConstructor COMMAND test_constructor)

add_executable(test_insert "tests/test_insert.c")
add_test(NAME TestInsert COMMAND test_insert)

add_executable(test_push_front "tests/test_push_front.c")
add_test(NAME TestPushFront COMMAND test_push_front)

add_executable(test_push_back "tests/test_push_back.c")
add_test(NAME TestPushBack COMMAND test_push_back)

add_executable(test_get "tests/test_get.c")
add_test(NAME TestGet COMMAND test_get)

add_executable(test_remove "tests/test_remove.c")
add_test(NAME TestRemove COMMAND test_remove)
