/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:26:02 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 15:26:03 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	show_moves_count(t_program *game)
{
	char	*str;

	str = ft_itoa(game->moves);
	ft_putendl_fd(str, 1);
	free(str);
}
