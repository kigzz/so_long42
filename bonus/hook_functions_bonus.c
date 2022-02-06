/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_functions_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:13:52 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:51:11 by bpouchep         ###   ########.fr       */
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
	else if (keysym == KEY_W || keysym == KEY_UP)
		player_w(game);
	else if (keysym == KEY_S || keysym == KEY_DOWN)
		player_s(game);
	else if (keysym == KEY_A || keysym == KEY_LEFT)
		player_a(game);
	else if (keysym == KEY_D || keysym == KEY_RIGHT)
		player_d(game);
	return (0);
}

int	close_redcross(t_program *game)
{
	exit_loop(game);
	return (0);
}
