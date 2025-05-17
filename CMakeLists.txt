cmake_minimum_required(VERSION 4.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(snake)

add_executable(snake main.cpp)
target_include_directories(snake PRIVATE "${PROJECT_SOURCE_DIR}/include")
target_link_libraries(snake "${PROJECT_SOURCE_DIR}/lib/libraylib.a")
