
#SETUP

NAME			=	so_long
CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror -Iincludes -Ilibft -Imlx_linux -O3
#-g3 -fsanitize=address

# -g3 -fsanitize=address
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

SRCS    		=	so_long.c ft_free.c check_extension.c init_structure.c close_window.c open_image.c store_map.c \
					check_map.c

SRCS_DIR		=	srcs/
SRCS_PATH		=	$(addprefix $(SRCS_DIR), $(SRCS))
OBJ_SRCS    	=	$(SRCS_PATH:%.c=%.o)


# RULES

%.o : %.c
					@$(CC) $(FLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(OBJ_SRCS)
					@make -C $(LIBFT_DIR)
					@#make -C $(MLX_DIR)
					@$(CC) $(FLAGS) $(OBJ_SRCS) $(LIBFT_FLAGS) $(MLX_LINUX_FLAGS) -o $(NAME)




clean:
					@$(RM) $(OBJ_SRCS)
					@make clean -C $(LIBFT_DIR)
					@#make clean -C $(MLX)

fclean:				clean
					@$(RM) $(NAME)
					@make fclean -C libft

re:					fclean all

.PHONY:				all clean fclean bonus re
