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

int	check_walls(t_program game)
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

int	check_rectangular(t_program game)
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

int	check_parameters(t_program game)
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

//int check_objects(t_program game)
//{
//
//}
