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

void	printfstruct(t_program *data)
{
	printf("Objs.exit = %d\n", data->objs.exit);
	printf("Objs.player = %d\n", data->objs.player);
	printf("Objs.collect = %d\n", data->objs.collectables);
	printf("Player position X = %d\n", data->player_position.x);
	printf("Player position Y = %d\n", data->player_position.y);
}

int	main(int argc, char **argv, char **envp)
{
	t_program	game;

	if (argc != 2 || !*envp)
	{
		ft_putstr_fd("Error\n", 2);
		return (EXIT_FAILURE);
	}
	game.map_save = store_map(&game, argv[1]);
	init_structure(&game);
	if (check_map(&game) || check_extension(argv[1], ".ber"))
	{
		printf("Error\nInvalid map.");
		return (1);
	}
	printfstruct(&game);

	game_init(&game);


	/* IMAGES */
	if (open_image(&game))
	{
		free_split(game.map_save);
		mlx_destroy_window(game.mlx_ptr, game.window);
		game.window = NULL;
		mlx_destroy_image(game.mlx_ptr, game.img_walls);
		mlx_destroy_image(game.mlx_ptr, game.img_ground);
		mlx_destroy_image(game.mlx_ptr, game.img_collectables);
		mlx_destroy_image(game.mlx_ptr, game.img_exit);
//		mlx_destroy_image(game.mlx_ptr, game.img_player);		if (game.img_exit) -> free /
		mlx_destroy_display(game.mlx_ptr);
		free(game.mlx_ptr);
		return (1);
	}
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
