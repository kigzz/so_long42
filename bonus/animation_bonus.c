/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:21:53 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/06 03:21:55 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	animation_utils(t_program *game, char *path)
{
	mlx_destroy_image(game->mlx_ptr, game->img_enemy);
	game->img_enemy = mlx_xpm_file_to_image
		(game->mlx_ptr, path, &game->img_w, &game->img_h);
}

int	animation(t_program *game)
{
	if (game->endloop == 1)
		return (0);
	if (game->enemy == 1)
		animation_utils(game, "images/EN1.xpm");
	if (game->enemy == 2)
		animation_utils(game, "images/EN2.xpm");
	if (game->enemy == 3)
		animation_utils(game, "images/EN3.xpm");
	if (game->enemy == 4)
	{
		animation_utils(game, "images/EN4.xpm");
		game->enemy = 0;
	}
	map_draw(game);
	game->enemy++;
	return (0);
}
