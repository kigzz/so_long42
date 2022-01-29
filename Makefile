
#SETUP

NAME			=	so_long
CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror -Iincludes -Ilibft -Imlx_linux -O3
# -g3 -fsanitize=address
RM				=	rm -rf

#LIB

MLX				=	mlx_linux
MLX_LINUX		=	-Lmlx_linux -lmlx -Imlx_linux -lXext -lX11
LIBFT			=	-Llibft -lft


#FILES AND PATH

SRCS    		=	so_long.c
SRCS_DIR		=	srcs/
SRCS_PATH		=	$(addprefix $(SRCS_DIR), $(SRCS))
OBJ_SRCS    	=	$(SRCS_PATH:%.c=%.o)


all:				$(NAME)

%.o : %.c
					@$(CC) $(FLAGS) -c $< -o $@

mlx_compil:
					@make -C $(MLX);

libft_compil:
					@make -C libft

$(NAME):			libft_compil mlx_compil $(OBJ_F) $(OBJ_SRCS)
					@$(CC) $(FLAGS) $(OBJ_F) $(OBJ_SRCS) $(LIBFT) $(MLX_LINUX) -o $(NAME)
					@echo "$(NAME) program created!"

clean:
					@$(RM) $(OBJ_SRCS)
					@make clean -C libft
					@make clean -C $(MLX)
					@echo "object files/libs deleted!"

fclean:				clean
					@$(RM) $(NAME)
					@make fclean -C libft
					@echo "all deleted!"

re:					fclean all

.PHONY:				all clean fclean bonus re
