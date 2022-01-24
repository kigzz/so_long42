cmake_minimum_required(VERSION 3.21)
project(so_long C)

set(CMAKE_C_STANDARD 99)

add_executable(so_long main.c so_long.c)
add_library(minilibx-linux main.c)