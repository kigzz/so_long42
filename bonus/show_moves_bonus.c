/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_moves_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:26:02 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:52:06 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	show_moves_count(t_program *game)
{
	char	*str;

	str = ft_itoa(game->moves);
	mlx_string_put(game->mlx_ptr, game->window, 20, game->map_height * IMG_PIX + 20, 0xFFFFFF, "MOVES: ");
	mlx_string_put(game->mlx_ptr, game->window, 65, game->map_height * IMG_PIX + 20, 0xFFFFFF, str);
	free(str);
}
