/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_draw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:14:08 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 13:14:09 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	img_draw(t_program *game, void *image, int i, int j)
{
	mlx_put_image_to_window(game->mlx_ptr, game->window, image, j * IMG_PIX,
		i * IMG_PIX);
}

void	map_draw(t_program *game)
{
	int	i;
	int	j;

	i = -1;
	while (game->map_save[++i])
	{
		j = -1;
		while (game->map_save[i][++j] != '\0')
		{
			if (game->map_save[i][j] == '1')
				img_draw(game, game->img_walls, i, j);
			else if (game->map_save[i][j] == 'P')
				img_draw(game, game->img_player, i, j);
			else if (game->map_save[i][j] == 'C')
				img_draw(game, game->img_col, i, j);
			else if (game->map_save[i][j] == '0')
				img_draw(game, game->img_ground, i, j);
			else if (game->map_save[i][j] == 'E')
				img_draw(game, game->img_exit, i, j);
		}
	}
}
