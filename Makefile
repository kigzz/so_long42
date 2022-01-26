
#SETUP

NAME			=	so_long
CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror -Iincludes
RM				=	rm -rf

#FILES AND PATH

SRCS    		=	so_long.c
SRCS_DIR		=	sources/
SRCS_PATH		=	$(addprefix $(SRCS_DIR), $(SRCS))
OBJ_SRCS    	=	$(SRCS_PATH:%.c=%.o)

#FUNCTIONS

FUNC_SRCS		=
FUNC_DIR		=	functions/
FUNC 			=	$(addprefix $(FUNC_DIR), $(FUNC_SRCS))
OBJ_F			=	$(FUNC:%.c=%.o)

#COMMANDS

%.o : %.c
					@$(CC) $(FLAGS) -Imlx_linux -O3 -c $< -o $@
#-I/includes -Imlx_linux -O3
all:				$(NAME)
# -Lmlx_linux -llmlx_linux -Imlx_linux -1Xext -1X11 -1m -1z
$(NAME):			$(OBJ_F) $(OBJ_SRCS)
					@$(CC) $(FLAGS) $(OBJ_F) $(OBJ_SRCS) -Lmlx_linux -lmlx -Imlx_linux -lXext -lX11 -o $(NAME)
					@echo "$(NAME) program created!"

clean:
					@$(RM) $(OBJ_SRCS)
					@$(RM) $(OBJ_F)
					@echo "object files deleted!"

fclean:				clean
					@$(RM) $(NAME)
					@echo "all deleted!"

re:					fclean all

.PHONY:				all clean fclean bonus re
