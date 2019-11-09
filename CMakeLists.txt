project(PROJ)

cmake_minimum_required(VERSION 2.8)

# set install path
set(CMAKE_INSTALL_PREFIX ${PROJ_SOURCE_DIR}/bin)

add_subdirectory(${PROJ_SOURCE_DIR}/bubble_sort)
add_subdirectory(${PROJ_SOURCE_DIR}/insert_sort)
add_subdirectory(${PROJ_SOURCE_DIR}/sort_main)
