/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_image_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:02:19 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:51:39 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	open_image(t_program *game)
{
	game->img_walls = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/1.xpm", &game->img_w, &game->img_h);
	game->img_col = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/collectables.xpm", &game->img_w, &game->img_h);
	game->img_exit = mlx_xpm_file_to_image
		((*game).mlx_ptr, "images/E.xpm", &game->img_w, &game->img_h);
	game->img_ground = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/0.xpm", &game->img_w, &game->img_h);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/character.xpm", &game->img_w, &game->img_h);
	if (!game->img_player || !game->img_ground || !game->img_col
		|| !game->img_exit || !game->img_walls)
		return (1);
	return (0);
}
