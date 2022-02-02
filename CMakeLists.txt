cmake_minimum_required(VERSION 3.16)
project(so_long42 C)

set(CMAKE_C_STANDARD 99)

add_executable(so_long srcs/so_long.c srcs/ft_free.c srcs/check_extension.c srcs/init_structure.c srcs/close_window.c)
include_directories(includes/)
include_directories(mlx_linux/)
include_directories(libft/)
