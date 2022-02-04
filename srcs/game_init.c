/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:07:15 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 14:07:17 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	game_init(t_program *game)
{
	int	window_h;
	int	window_w;

	game->mlx_ptr = mlx_init();
	if (!game->mlx_ptr)
		return (1);
	window_h = game->map_height * IMG_PIX;
	window_w = ft_strlen(game->map_save[0]) * IMG_PIX;
	game->window = mlx_new_window(game->mlx_ptr, window_w, window_h, "SoLong");
	return (0);
}
