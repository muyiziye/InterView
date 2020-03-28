project(bubble_sort)

cmake_minimum_required(VERSION 2.8)

set(bubble_sort_src ${bubble_sort_SOURCE_DIR}/bubble_sort.cpp)

add_library(bubble_sort SHARED ${bubble_sort_src})

install(TARGETS bubble_sort LIBRARY DESTINATION libs)