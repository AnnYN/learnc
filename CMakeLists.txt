cmake_minimum_required(VERSION 3.9)
project(cmake_clion)

set(CMAKE_CXX_STANDARD 11)

add_executable(1 1.c 2dMat.c mul.c fileheading.c lamda.cpp signal.c twocall.c mywait.c dm3_signal.c)
add_executable(2 2.c foo.h foo.c)

add_executable(hahaha loop.c)
add_executable(heihei loop2.c)

add_library(libfoo foo.c)
add_executable(delta 2.c)
target_link_libraries(delta libfoo)

add_library(lib_inc_x inc_x.c)
add_library(lib_sum_inc_x_and_y sum_inc_x_and_y.c)
add_executable(calc calc.c)
target_link_libraries(calc lib_inc_x lib_sum_inc_x_and_y)

add_executable(ptr ptr.c)
add_executable(ptr2 ptr2.c)

add_executable(minus minus.cpp)

add_executable(3 loop.c)
add_executable(4 loop2.c)
add_executable(count count.c)
add_executable(replace replace.c)
add_executable(nospace nospace.c)
add_executable(state state.c)
add_executable(string string.cpp)
add_executable(throw throw.cpp)

add_executable(new_delete new_delete.cpp)
add_executable(shared_ptr shared_ptr.cpp)

add_executable(point point.c)
add_executable(funcptr funcptr.c)

add_executable(array array.c)

add_executable(ptrdemo ptrdemo.cpp)
add_executable(test test.c)
add_executable(demo3 threadCPP/demo3.cpp)



