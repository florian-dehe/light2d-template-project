cmake_minimum_required(VERSION 3.18)

#add_subdirectory( source folders )

find_package(light2d REQUIRED)

set(SRCS main.cpp SampleScene.cpp)

add_executable(SimpleApplication ${SRCS})
target_link_libraries(SimpleApplication light2d)
