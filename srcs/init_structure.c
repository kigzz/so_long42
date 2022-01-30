/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:22:50 by bpouchep          #+#    #+#             */
/*   Updated: 2022/01/30 01:22:56 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_structure(t_program *game)
{
	game->objs.collectables = 0;
	game->objs.exit = 0;
	game->objs.ground = 0;
	game->objs.player = 0;
	game->objs.walls = 0;
	game->player_position.x = 0;
	game->player_position.y = 0;
}
