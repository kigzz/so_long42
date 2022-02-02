/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:08:23 by bpouchep          #+#    #+#             */
/*   Updated: 2022/01/29 16:08:31 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	printfstruct(t_program data)
{
	printf("Objs.exit = %d\n", data.objs.exit);
	printf("Objs.player = %d\n", data.objs.player);
	printf("Objs.collect = %d\n", data.objs.collectables);
	printf("Player position X = %d\n", data.player_position.x);
	printf("Player position Y = %d\n", data.player_position.y);
}

int main(int argc, char **argv)
{

	t_program game;

	// ERROR
		// > 2 argc

	if (argc != 2)
	{
		ft_putstr_fd("Error\nThis program only accept 2 arguments.", 2);
		return (1);
	}

		//	.ber extension

	if (check_extension(argv[1], ".ber") == 1)
	{
		ft_putstr_fd("Error Wrong map file extension. Please use a file with \".ber\" extension.\n", 2);
		return (1);
	}

		/*	Parser la map.
				-> Que 5 caractères possibles = 0 1 C E P
					-> 1 seul P
					-> Au moins 1 collectible (C) et au moins 1 sortie (E)
					-> Autant de mur/obstacles si dans la map (1) / Sol (0)
				-> La map doit être RECTANGULAIRE et fermer par des murs (1)
				-> Capable d'ouvrir n'importe quelle map.
		 */


		// Sauvegarder la map

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error open. Please verify if the map exists.\n");
		return (1);
	}

	char *tmp = NULL;
	char *save_map = ft_strdup("");
	char *read_map = ft_get_next_line(fd);
	if (read_map == NULL)
	{
		printf("Error open. Please verify if the map exists or map isn't empty.\n");
		free(save_map);
		return (1);
	}
	while (read_map != NULL)
	{
		tmp = ft_strjoin(save_map, read_map);
		free(save_map);
		save_map = tmp;
		free(read_map);
		read_map = ft_get_next_line(fd);
	}

	//	Split par '\n'

	game.map_save = ft_split(save_map, '\n');
	close(fd);
	free(save_map);
//	for (int i = 0; save_map_split[i] != NULL; i++)
//		printf("%s\n", save_map_split[i]);
	int i = -1;
	int j;
	size_t count_line = 0;
	size_t length;
	while (game.map_save[++i] != NULL)
	{
		count_line++;
		length = ft_strlen(game.map_save[i]);
		if (length != ft_strlen(game.map_save[i + 1]) && game.map_save[i + 1] != NULL)
		{
			printf("Error format map format\n");
			free_split(game.map_save);
			return (1);
		}
		else if (game.map_save[i][0] != '1' || game.map_save[i][length - 1] != '1')
		{
			printf("Map not closed by walls\n");
			free_split(game.map_save);
			return (1);
		}
		j = 0;
		while (game.map_save[i][j] != '\0')
		{
			if (game.map_save[i][j] == 'P' || game.map_save[i][j] == '1' ||
					game.map_save[i][j] == '0' || game.map_save[i][j] == 'C' ||
					game.map_save[i][j] == 'E')
			{
				j++;
			}
			else
			{
				printf("Error map contains invalid characters\n");
				free_split(game.map_save);
				return (1);
			}

		}

	}
	int k = 0;
	while (game.map_save[0][k])
	{
		if (game.map_save[0][k] != '1')
		{
			printf("Error Map not closed by walls\n");
			free(game.map_save);
			return (1);
		}
		k++;
	}
	k = 0;
	while (game.map_save[count_line - 1][k])
	{
		if (game.map_save[count_line - 1][k] != '1')
		{
			printf("Error Map not closed by walls\n");
			free(game.map_save);
			return (1);
		}
		k++;
	}
	if (ft_strlen(game.map_save[0]) == count_line)
	{
		printf("Error rectangle\n");
		free_split(game.map_save);
		return (1);
	}

	/* Initialiser la structure t_objs
	 * Vérifier s'il y a qu'un seul P, au moins 1 sortie E et 1 collectible.
	 *
	 *
	 */
	for (i = 0; game.map_save[i]; i++)
		printf("%s\n", game.map_save[i]);
	init_structure(&game);
	i = -1;
	while (game.map_save[++i]) {
		j = -1;
		while (game.map_save[i][++j])
		{
			if (game.map_save[i][j] == 'P')
			{
				game.player_position.x = i;
				game.player_position.y = j;
				game.objs.player += 1;
			}
			else if (game.map_save[i][j] == 'C')
			{
				game.objs.collectables += 1;
			}
			else if (game.map_save[i][j] == 'E')
			{
				game.objs.exit += 1;
			}
		}
	}
	if (game.objs.exit == 0 || game.objs.collectables == 0 || game.objs.player != 1)
	{
		free_split(game.map_save);
		printf("Error Parameters in map are not valid.\n");
		return (1);
	}
	printfstruct(game);

	game.mlx_ptr = mlx_init();
	if (!game.mlx_ptr)
		return (1);
	printf("countline = %ld\n", count_line);
	int window_height = count_line * IMG_PIX;
	printf("window height = %d\n", window_height);
	int window_width = ft_strlen(game.map_save[0]) * IMG_PIX;
	printf("window width = %d\n", window_width);
	game.window = mlx_new_window(game.mlx_ptr, window_width, window_height, "SoLong");


		/* IMAGES */

	game.img_walls = mlx_xpm_file_to_image(game.mlx_ptr, "images/1.xpm", &game.img_w,
										   &game.img_h);
	game.img_collectables = mlx_xpm_file_to_image(game.mlx_ptr, "images/C.xpm", &game.img_w,
												  &game.img_h);
	game.img_exit = mlx_xpm_file_to_image(game.mlx_ptr, "images/E1.xpm", &game.img_w,
												  &game.img_h);
	game.img_ground = mlx_xpm_file_to_image(game.mlx_ptr, "images/0.xpm", &game.img_w,
												  &game.img_h);
	game.img_player = mlx_xpm_file_to_image(game.mlx_ptr, "images/PD.xpm", &game.img_w,
											&game.img_h);

	i = -1;
	while (game.map_save[++i])
	{
		j = 0;
		while (game.map_save[i][j] != '\0')
		{
			if (game.map_save[i][j] == '1')
				mlx_put_image_to_window(game.mlx_ptr, game.window, game.img_walls, j * IMG_PIX,
										i * IMG_PIX);
			else if (game.map_save[i][j] == 'P')
				mlx_put_image_to_window(game.mlx_ptr, game.window, game.img_player, j * IMG_PIX,
										i * IMG_PIX);
			else if (game.map_save[i][j] == 'C')
				mlx_put_image_to_window(game.mlx_ptr, game.window, game.img_collectables, j * IMG_PIX,
										i * IMG_PIX);
			else if (game.map_save[i][j] == '0')
				mlx_put_image_to_window(game.mlx_ptr, game.window, game.img_ground, j * IMG_PIX,
										i * IMG_PIX);
			else if (game.map_save[i][j] == 'E')
				mlx_put_image_to_window(game.mlx_ptr, game.window, game.img_exit, j * IMG_PIX,
										i * IMG_PIX);
			j++;
		}
	}


	/* Hook Player */



		/* Hook close */

	mlx_hook(game.window, DestroyNotify, LeaveWindowMask, &close_redcross, &game);
	mlx_hook(game.window, KeyPress, KeyPressMask, &close_esc, &game);
	mlx_loop(game.mlx_ptr);

	/* Free */

	free_split(game.map_save);
	mlx_destroy_image(game.mlx_ptr, game.img_walls);
	mlx_destroy_image(game.mlx_ptr, game.img_ground);
	mlx_destroy_image(game.mlx_ptr, game.img_collectables);
	mlx_destroy_image(game.mlx_ptr, game.img_exit);
	mlx_destroy_image(game.mlx_ptr, game.img_player);
	mlx_destroy_display(game.mlx_ptr);
	free(game.mlx_ptr);
	return (0);
}
