/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:14:01 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:50:38 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	free_split(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	free_game(t_program *game)
{
	free_split(game->map_save);
	mlx_destroy_image(game->mlx_ptr, game->img_walls);
	mlx_destroy_image(game->mlx_ptr, game->img_ground);
	mlx_destroy_image(game->mlx_ptr, game->img_col);
	mlx_destroy_image(game->mlx_ptr, game->img_exit);
	mlx_destroy_image(game->mlx_ptr, game->img_player);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
}
