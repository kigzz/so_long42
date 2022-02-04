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

int	main(int argc, char **argv, char **envp)
{
	t_program	game;

	if (argc != 2 || !*envp)
	{
		ft_putstr_fd("Error\nAre you trying to crash my prog? :)", 2);
		return (EXIT_FAILURE);
	}
	game.map_save = store_map(&game, argv[1]);
	init_structure(&game);
	if (check_extension(argv[1], ".ber") || check_map(&game))
	{
		ft_putstr_fd("Error\nVerify if map is valid.", 2);
		return (1);
	}
	game_init(&game);
	open_image(&game);
	map_draw(&game);
	mlx_hook(game.window, 17, 1L << 5, &close_redcross, &game);
	mlx_hook(game.window, 2, 1L << 0, &key_pressed, &game);
	mlx_loop(game.mlx_ptr);
	free_game(&game);
	return (0);
}
