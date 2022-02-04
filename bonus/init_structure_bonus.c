/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structure_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:22:50 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:51:15 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static size_t	count_line(char **map)
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
	game->objs.coll = 0;
	game->objs.exit = 0;
	game->objs.player = 0;
	game->p_pos.x = 0;
	game->p_pos.y = 0;
	game->endloop = 0;
	game->moves = 0;
	game->map_height = count_line(game->map_save);
}
