/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:07:15 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:51:03 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	game_init(t_program *game)
{
	game->mlx_ptr = mlx_init();
	if (!game->mlx_ptr)
		return (1);
	game->window_h = game->map_height * IMG_PIX + IMG_PIX;
	game->window_w = ft_strlen(game->map_save[0]) * IMG_PIX;
	game->window = mlx_new_window(game->mlx_ptr, game->window_w,
			game->window_h, "SoLong");
	return (0);
}
