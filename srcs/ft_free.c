/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:14:01 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/02 23:14:02 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_split(char **str)
{
	int	i;

	if (!str)
		return ;
	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	free_game(t_program *game)
{
	free_split(game->map_save);
	if (game->img_walls)
		mlx_destroy_image(game->mlx_ptr, game->img_walls);
	if (game->img_ground)
		mlx_destroy_image(game->mlx_ptr, game->img_ground);
	if (game->img_col)
		mlx_destroy_image(game->mlx_ptr, game->img_col);
	if (game->img_exit)
		mlx_destroy_image(game->mlx_ptr, game->img_exit);
	if (game->img_player)
		mlx_destroy_image(game->mlx_ptr, game->img_player);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
}
