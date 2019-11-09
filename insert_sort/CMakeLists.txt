project(insert_sort)

cmake_minimum_required(VERSION 2.8)

set(insert_sort_src ${CMAKE_CURRENT_SOURCE_DIR}/insert_sort.cpp)

add_library(insert_sort SHARED ${insert_sort_src})

install(TARGETS insert_sort LIBRARY DESTINATION libs)