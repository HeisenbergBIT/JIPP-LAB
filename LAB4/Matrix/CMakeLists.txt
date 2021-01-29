cmake_minimum_required( VERSION 3.0 )

project(Matrix)

set(CMAKE_CXX_STANDARD 17)

include_directories( ./include ./src )

add_executable(matrix ./src/main.cpp ./src/matrix.cpp )