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

#include "so_long.h"

int	key_pressed(int keysym, t_program *game)
{
	if (keysym == KEY_ESC)
	{
		mlx_destroy_window(game->mlx_ptr, game->window);
		game->window = NULL;
		mlx_loop_end(game->mlx_ptr);
	}
	if (keysym == KEY_W)
	{
		if (game->map_save[game->player_position.x - 1][game->player_position.y] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x - 1][game->player_position.y] = 'P';
		game->player_position.x -= 1;
		map_draw(game);
	}
	else if (keysym == KEY_S)
	{
		if (game->map_save[game->player_position.x + 1][game->player_position.y] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x + 1][game->player_position.y] = 'P';
		game->player_position.x += 1;
		map_draw(game);
	}
	else if (keysym == KEY_A)
	{
		if (game->map_save[game->player_position.x][game->player_position.y - 1] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x][game->player_position.y - 1] = 'P';
		game->player_position.y -= 1;
		map_draw(game);
	}
	else if (keysym == KEY_D)
	{
		if (game->map_save[game->player_position.x][game->player_position.y + 1] == '1')
			return (0);
		game->map_save[game->player_position.x][game->player_position.y] = '0';
		game->map_save[game->player_position.x][game->player_position.y + 1] = 'P';
		game->player_position.y += 1;
		map_draw(game);
	}
	return (0);
}

int	close_redcross(t_program *data)
{
	mlx_destroy_window(data->mlx_ptr, data->window);
	data->window = NULL;
	mlx_loop_end(data->mlx_ptr);
	return (0);
}
