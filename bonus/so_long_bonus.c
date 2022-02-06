/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:08:23 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:52:09 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	gameplay(t_program *game)
{
	mlx_hook(game->window, 17, 1L << 5, &close_redcross, game);
	mlx_hook(game->window, 2, 1L << 0, &key_pressed, game);
	mlx_loop_hook(game->mlx_ptr, &animation, game);
	mlx_loop(game->mlx_ptr);
}

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
	if (open_image(&game) == 1)
	{
		mlx_destroy_window(game.mlx_ptr, game.window);
		free_game(&game);
		return (1);
	}
	map_draw(&game);
	gameplay(&game);
	return (0);
}
