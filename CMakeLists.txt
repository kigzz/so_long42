cmake_minimum_required(VERSION 3.16)
project(so_long42 C)

set(CMAKE_C_STANDARD 99)

add_executable(so_long srcs/so_long.c srcs/ft_free.c srcs/check_extension.c srcs/init_structure.c srcs/hook_functions.c srcs/open_image.c srcs/store_map.c srcs/check_map.c srcs/game_init.c srcs/map_draw.c srcs/player_movement.c srcs/show_moves.c bonus/animation_bonus.c)
include_directories(includes/)
include_directories(mlx_linux/)
include_directories(libft/)
include_directories(bonus/)
