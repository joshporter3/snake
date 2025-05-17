cmake_minimum_required(VERSION 4.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(snake)

set(SOURCES
    src/main.cpp
    src/snake.cpp
    src/apple.cpp
)

add_executable(snake ${SOURCES})
target_include_directories(snake PRIVATE "${PROJECT_SOURCE_DIR}/include")
target_link_libraries(snake "${PROJECT_SOURCE_DIR}/lib/libraylib.a")
