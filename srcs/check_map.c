/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 03:48:55 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/03 03:48:57 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	check_walls(t_program game)
{
	int		i;
	size_t	len;

	i = -1;
	len = ft_strlen(game.map_save[0]);
	while (game.map_save[++i] != NULL)
	{
		if (game.map_save[i][0] != '1' || game.map_save[i][len - 1] != '1')
			return (1);
	}
	i = 0;
	while (game.map_save[0][i] && game.map_save[game.map_height - 1][i])
	{
		if (game.map_save[0][i] != '1' ||
		game.map_save[game.map_height - 1][i] != '1')
			return (1);
		i++;
	}
	return (0);
}

static int	check_rectangular(t_program game)
{
	int	i;

	i = 0;
	while (game.map_save[i])
	{
		if (ft_strlen(game.map_save[0]) == game.map_height)
			return (1);
		i++;
	}
	return (0);
}

static int	check_parameters(t_program game)
{
	int	i;
	int	j;

	i = 0;
	while (game.map_save[i])
	{
		j = 0;
		while (game.map_save[i][j])
		{
			if (game.map_save[i][j] == 'P' || game.map_save[i][j] == '1' ||
				game.map_save[i][j] == '0' || game.map_save[i][j] == 'C' ||
				game.map_save[i][j] == 'E')
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

static int	check_objects(t_program *game)
{
	int	i;
	int	j;

	i = -1;
	while (game->map_save[++i])
	{
		j = -1;
		while (game->map_save[i][++j])
		{
			if (game->map_save[i][j] == 'P')
			{
				game->player_position.x = i;
				game->player_position.y = j;
				game->objs.player += 1;
			}
			else if (game->map_save[i][j] == 'C')
				game->objs.collectables += 1;
			else if (game->map_save[i][j] == 'E')
				game->objs.exit += 1;
		}
	}
	if (game->objs.exit == 0 || game->objs.collectables == 0
		|| game->objs.player != 1)
		return (1);
	return (0);
}

int	check_map(t_program *game)
{
	if (!game->map_save)
		return (1);
	else if (check_walls(*game) || check_parameters(*game)
		|| check_rectangular(*game) || check_objects(game))
	{
		free_split(game->map_save);
		return (1);
	}
	return (0);
}
