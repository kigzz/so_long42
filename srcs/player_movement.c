/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:42:48 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 14:42:53 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	player_w(t_program *game)
{
	if (game->map_save[game->p_pos.x - 1][game->p_pos.y] == '1'
		|| (game->map_save[game->p_pos.x - 1][game->p_pos.y] == 'E'
		&& game->objs.coll != 0))
		return (0);
	else if (game->map_save[game->p_pos.x - 1][game->p_pos.y] == 'E'
			&& game->objs.coll == 0)
	{
		exit_loop(game);
		game->moves += 1;
		show_moves_count(game);
		ft_putstr_fd("Gg wp :)\n", 1);
		return (0);
	}
	else if (game->map_save[game->p_pos.x - 1][game->p_pos.y] == 'C')
		game->objs.coll -= 1;
	game->map_save[game->p_pos.x][game->p_pos.y] = '0';
	game->map_save[game->p_pos.x - 1][game->p_pos.y] = 'P';
	game->p_pos.x -= 1;
	game->moves += 1;
	show_moves_count(game);
	map_draw(game);
	return (0);
}

int	player_s(t_program *game)
{
	if (game->map_save[game->p_pos.x + 1][game->p_pos.y] == '1'
		|| (game->map_save[game->p_pos.x + 1][game->p_pos.y] == 'E'
		&& game->objs.coll != 0))
		return (0);
	else if (game->map_save[game->p_pos.x + 1][game->p_pos.y] == 'E'
			&& game->objs.coll == 0)
	{
		exit_loop(game);
		game->moves += 1;
		show_moves_count(game);
		ft_putstr_fd("Gg wp :)\n", 1);
		return (0);
	}
	else if (game->map_save[game->p_pos.x + 1][game->p_pos.y] == 'C')
		game->objs.coll -= 1;
	game->map_save[game->p_pos.x][game->p_pos.y] = '0';
	game->map_save[game->p_pos.x + 1][game->p_pos.y] = 'P';
	game->p_pos.x += 1;
	game->moves += 1;
	show_moves_count(game);
	map_draw(game);
	return (0);
}

int	player_a(t_program *game)
{
	if (game->map_save[game->p_pos.x][game->p_pos.y - 1] == '1'
		|| (game->map_save[game->p_pos.x][game->p_pos.y - 1] == 'E'
		&& game->objs.coll != 0))
		return (0);
	else if (game->map_save[game->p_pos.x][game->p_pos.y - 1] == 'E'
			&& game->objs.coll == 0)
	{
		exit_loop(game);
		game->moves += 1;
		show_moves_count(game);
		ft_putstr_fd("Gg wp :)\n", 1);
		return (0);
	}
	else if (game->map_save[game->p_pos.x][game->p_pos.y - 1] == 'C')
		game->objs.coll -= 1;
	game->map_save[game->p_pos.x][game->p_pos.y] = '0';
	game->map_save[game->p_pos.x][game->p_pos.y - 1] = 'P';
	game->p_pos.y -= 1;
	game->moves += 1;
	show_moves_count(game);
	map_draw(game);
	return (0);
}

int	player_d(t_program *game)
{
	if (game->map_save[game->p_pos.x][game->p_pos.y + 1] == '1'
		|| (game->map_save[game->p_pos.x][game->p_pos.y + 1] == 'E'
		&& game->objs.coll != 0))
		return (0);
	else if (game->map_save[game->p_pos.x][game->p_pos.y + 1] == 'E'
		&& game->objs.coll == 0)
	{
		exit_loop(game);
		game->moves += 1;
		show_moves_count(game);
		ft_putstr_fd("Gg wp :)\n", 1);
		return (0);
	}
	if (game->map_save[game->p_pos.x][game->p_pos.y + 1] == 'C')
		game->objs.coll -= 1;
	game->map_save[game->p_pos.x][game->p_pos.y] = '0';
	game->map_save[game->p_pos.x][game->p_pos.y + 1] = 'P';
	game->p_pos.y += 1;
	game->moves += 1;
	show_moves_count(game);
	map_draw(game);
	return (0);
}
