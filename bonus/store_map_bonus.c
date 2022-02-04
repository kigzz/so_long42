/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_map_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:02:25 by bpouchep          #+#    #+#             */
/*   Updated: 2022/02/04 18:52:17 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	**store_map(t_program *game, char *path)
{
	char	*tmp;
	char	*save_map;
	char	*read_map;
	int		fd;

	fd = open(path, O_RDONLY);
	read_map = ft_get_next_line(fd);
	if (read_map == NULL || fd == -1)
		return (NULL);
	save_map = ft_strdup("");
	while (read_map != NULL)
	{
		tmp = ft_strjoin(save_map, read_map);
		free(save_map);
		save_map = tmp;
		free(read_map);
		read_map = ft_get_next_line(fd);
	}
	game->map_save = ft_split(save_map, '\n');
	free(save_map);
	close(fd);
	return (game->map_save);
}
