cmake_minimum_required(VERSION 3.21)
project(ping-pong)

add_subdirectory(extlibs)
add_executable(${PROJECT_NAME} "src/main.cpp")
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)

