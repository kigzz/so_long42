
#SETUP

NAME			=	so_long
NAME_BONUS		=	so_long_bonus
CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror -Iincludes -Ilibft -Imlx_linux -O3
#-g3 -fsanitize=address

RM				=	rm -rf

#LIB NAMES

LIBFT_NAME		=	libft.a
LIBFT_DIR		=	libft

MLX_NAME		=	libmlx_linux.a
MLX_DIR			=	mlx_linux

#LIB FLAGS

MLX				=	mlx_linux
MLX_LINUX_FLAGS	=	-Lmlx_linux -lmlx_Linux -Imlx_linux -lXext -lX11
LIBFT_FLAGS		=	-Llibft -lft


#FILES AND PATH

SRCS    		=	so_long.c ft_free.c check_extension.c init_structure.c hook_functions.c open_image.c store_map.c \
					check_map.c game_init.c map_draw.c player_movement.c show_moves.c
SRCS_DIR		=	srcs/
SRCS_PATH		=	$(addprefix $(SRCS_DIR), $(SRCS))
OBJ_SRCS    	=	$(SRCS_PATH:%.c=%.o)

# BONUS

SRCS_BONUS		=	check_extension_bonus.c check_map_bonus.c ft_free_bonus.c game_init_bonus.c hook_functions_bonus.c \
					init_structure_bonus.c map_draw_bonus.c open_image_bonus.c player_movement_bonus.c \
					show_moves_bonus.c so_long_bonus.c store_map_bonus.c
SRCS_BONUS_DIR	=	bonus/
SRCS_BONUS_PATH	=	$(addprefix $(SRCS_BONUS_DIR), $(SRCS_BONUS))
OBJ_SRCS_BONUS	=	$(SRCS_BONUS_PATH:%.c=%.o)


# RULES

%.o : %.c
					@$(CC) $(FLAGS) -c $< -o $@

all:				$(NAME) $(NAME_BONUS)

bonus:				$(NAME_BONUS)

$(NAME):			$(OBJ_SRCS)
					@make -C $(LIBFT_DIR)
					@make -C $(MLX_DIR)
					@$(CC) $(FLAGS) $(OBJ_SRCS) $(LIBFT_FLAGS) $(MLX_LINUX_FLAGS) -o $(NAME)

$(NAME_BONUS):		$(OBJ_SRCS_BONUS)
					@make -C $(LIBFT_DIR)
					@make -C $(MLX_DIR)
					@$(CC) $(FLAGS) $(OBJ_SRCS_BONUS) $(LIBFT_FLAGS) $(MLX_LINUX_FLAGS) -o $(NAME_BONUS)


clean:
					@$(RM) $(OBJ_SRCS)
					@$(RM) $(OBJ_SRCS_BONUS)
					@make clean -C $(LIBFT_DIR)
					@make clean -C $(MLX)

fclean:				clean
					@$(RM) $(NAME) $(NAME_BONUS)
					@make fclean -C libft

re:					fclean all

.PHONY:				all clean fclean bonus re
