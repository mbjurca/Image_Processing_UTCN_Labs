cmake_minimum_required(VERSION 3.14)
project(Lab11)

set(CMAKE_CXX_STANDARD 17)

# --- Find OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Lab11
        main.cpp
        src/lab11.cpp
        src/lab11.h
)

target_link_libraries(Lab11 ${OpenCV_LIBS})
