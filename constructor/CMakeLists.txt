project(constructor)

cmake_minimum_required(VERSION 2.8)

set(constructor_src constructor.cpp)

add_executable(constructor_test ${constructor_src})

install(TARGETS constructor_test RUNTIME DESTINATION .)
