/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:02:19 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/03 00:02:20 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_image(t_program *game)
{
	game->img_walls = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/1.xpm", &game->img_w, &game->img_h);
	game->img_collectables = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/C.xpm", &game->img_w, &game->img_h);
	game->img_exit = mlx_xpm_file_to_image
		((*game).mlx_ptr, "images/E1.xpm", &game->img_w, &(*game).img_h);
	game->img_ground = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/0.xpm", &game->img_w, &game->img_h);
	game->img_player = mlx_xpm_file_to_image
		(game->mlx_ptr, "images/PD.xpm", &game->img_w, &game->img_h);
}
