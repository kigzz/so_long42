#ifndef SO_LONG_SO_LONG_H
#define SO_LONG_SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <mlx.h>
#include <libft.h>
#include <X11/X.h>
#include <X11/keysym.h>

typedef struct s_vect
{
	int x;
	int y;
} t_vect;

typedef struct s_objects
{
	int	collectables;
	int exit;
	int player;
	int walls;
	int ground;
} t_obj;

typedef struct s_img
{
	void	*img;
	char 	*addr;
	int 	bpp;
	int 	len;
	int 	endian;
} t_img;

typedef struct s_program
{
	char 	*map;
	void	*mlx_ptr;
	void	*window_ptr;
	t_obj	objs;
	t_vect	player_position;
} t_program;








/* Free */

void	free_split(char **str);

#endif