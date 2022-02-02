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

#define IMG_PIX 32

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

typedef struct s_program
{
	char 	**map_save;
	void	*mlx_ptr;
	void	*window;
	void	*img_walls;
	void	*img_player;
	void	*img_exit;
	void	*img_collectables;
	void	*img_ground;
	int 	img_w;
	int 	img_h;
	t_obj	objs;
	t_vect	player_position;
} t_program;

/* Check */

int	check_extension(char *str, const char* to_find);
void	init_structure(t_program *game);



/* Close */

int	close_esc(int keysym, t_program *data);
int	close_redcross(t_program *data);



/* Free */

void	free_split(char **str);

#endif