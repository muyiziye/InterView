project(sort)

# add the source code
set(sort_src ${sort_SOURCE_DIR}/sort_main.cpp)

# add include files
include_directories(
    ${bubble_sort_SOURCE_DIR}
    ${insert_sort_SOURCE_DIR}
)

set(CMAKE_INSTALL_RPATH $ORIGIN/libs)

add_executable(sort ${sort_src})

target_link_libraries(sort bubble_sort insert_sort)

install(TARGETS sort RUNTIME DESTINATION ./)