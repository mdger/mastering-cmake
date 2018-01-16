cmake_minimum_required(VERSION 3.0)
project(bwv-cpp C CXX)
set(CMAKE_CXX_STANDARD 11)

# header files
include_directories(include)
file(GLOB SOURCES "src/*.cpp")

# All files matching the pattern are added
add_executable(${PROJECT_NAME} ${SOURCES})