/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:08:23 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/02 23:14:20 by bpouchep         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_program	game;
	int fd;

	if (argc != 2)
	{
		ft_putstr_fd("Error\nThis program only accept 2 arguments.\n", 2);
		return (EXIT_FAILURE);
	}
	if (check_extension(argv[1], ".ber") == 1)
		return (EXIT_FAILURE);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error\n Please verify if the map exists.");
		return (EXIT_FAILURE);
	}
	game.map_save = store_map(&game, fd);




//	int i = -1;
//	int j;
//	size_t count_line = 0;
//	size_t length;
//	while (game.map_save[++i] != NULL)
//	{
//		count_line++;
//		length = ft_strlen(game.map_save[i]);
//		if (length != ft_strlen(game.map_save[i + 1]) && game.map_save[i + 1] != NULL)
//		{
//			printf("Error format map format\n");
//			free_split(game.map_save);
//			return (1);
//		}
//		j = 0;
//		while (game.map_save[i][j] != '\0')
//		{
//			if (game.map_save[i][j] == 'P' || game.map_save[i][j] == '1' ||
//					game.map_save[i][j] == '0' || game.map_save[i][j] == 'C' ||
//					game.map_save[i][j] == 'E')
//			{
//				j++;
//			}
//			else
//			{
//				printf("Error map contains invalid characters\n");
//				free_split(game.map_save);
//				return (1);
//			}
//
//		}
//
//	}
	init_structure(&game);

	if (check_walls(game))
	{
		printf("Walls\n");
		// free
		return (1);
	}
	if (check_rectangular(game))
	{
		printf("Rectangular\n");
		// free
		return (1);
	}

	if (check_parameters(game))
	{
		printf("Invalid param\n");
		//free
		return (1);
	}


	/* Initialiser la structure t_objs
	 * Vérifier s'il y a qu'un seul P, au moins 1 sortie E et 1 collectible.
	 */

	int i;
	int j;
	for (i = 0; game.map_save[i]; i++) {
		printf("%s\n", game.map_save[i]);
	}
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
	if (!game.mlx_ptr) {
		return (1);
	}
	printf("countline = %ld\n", game.map_height);
	printf("width = %ld", ft_strlen(game.map_save[0]));
	int window_height = game.map_height * IMG_PIX;
	printf("window height = %d\n", window_height);
	int window_width = ft_strlen(game.map_save[0]) * IMG_PIX;
	printf("window width = %d\n", window_width);
	game.window = mlx_new_window(game.mlx_ptr, window_width, window_height, "SoLong");


		/* IMAGES */

	open_image(&game);
	map_draw(&game);




		/* Hook close */

	mlx_hook(game.window, DestroyNotify, LeaveWindowMask, &close_redcross, &game);
	mlx_hook(game.window, KeyPress, KeyPressMask, &key_pressed, &game);
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
