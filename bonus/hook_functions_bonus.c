/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:13:52 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/02 23:13:53 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	exit_loop(t_program *game)
{
	mlx_destroy_window(game->mlx_ptr, game->window);
	game->window = NULL;
	mlx_loop_end(game->mlx_ptr);
}

int	key_pressed(int keysym, t_program *game)
{
	if (keysym == KEY_ESC)
		exit_loop(game);
	else if (keysym == KEY_W)
		player_w(game);
	else if (keysym == KEY_S)
		player_s(game);
	else if (keysym == KEY_A)
		player_a(game);
	else if (keysym == KEY_D)
		player_d(game);
	return (0);
}

int	close_redcross(t_program *game)
{
	exit_loop(game);
	return (0);
}
