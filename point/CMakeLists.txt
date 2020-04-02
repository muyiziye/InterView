project(Point)

set(Point_src point.cpp)

add_executable(point_test ${Point_src})

install(TARGETS point_test RUNTIME DESTINATION .)