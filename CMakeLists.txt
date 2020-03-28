project(PROJ)

cmake_minimum_required(VERSION 2.8)

# set install path
set(CMAKE_INSTALL_PREFIX ${PROJ_SOURCE_DIR}/Output)

add_subdirectory(${PROJ_SOURCE_DIR}/sort)
