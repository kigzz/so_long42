/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:14:28 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/02 23:14:29 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#define KEY_ESC 65307
#define KEY_W 119
#define	KEY_S 115
#define KEY_A 97
#define KEY_D 100

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
} t_obj;

typedef struct s_program
{
	char 	**map_save;
	size_t	map_height;
	void	*mlx_ptr;
	void	*window;
	void	*img_walls;
	void	*img_player;
	void	*img_exit;
	void	*img_collectables;
	void	*img_ground;
	int 	img_w;
	int 	img_h;
	int 	moves;
	t_obj	objs;
	t_vect	player_position;
} t_program;

/* Check */

int		check_extension(char *str, const char* to_find);
void	init_structure(t_program *game);
void	open_image(t_program *game);
char	**store_map(t_program *game, int fd);
int	check_walls(t_program game);
int check_rectangular(t_program game);
int	check_parameters(t_program game);

/* Game */

void	map_draw(t_program *game);
void	open_image(t_program *game);


/* Close */

int		key_pressed(int keysym, t_program *data);
int		close_redcross(t_program *data);



/* Free */

void	free_split(char **str);

#endif
