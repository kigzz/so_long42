/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:22:50 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/02 23:14:13 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	count_line(char **map)
{
	int	i;

	i = 0;
	if (map == NULL)
		return (0);
	while (map[i])
		i++;
	return (i);
}

void	init_structure(t_program *game)
{
	game->objs.collectables = 0;
	game->objs.exit = 0;
	game->objs.player = 0;
	game->player_position.x = 0;
	game->player_position.y = 0;
	game->map_height = count_line(game->map_save);
}
