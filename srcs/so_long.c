/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:08:23 by bpouchep          #+#    #+#             */
/*   Updated: 2022/01/29 16:08:31 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{

//	t_program game;

	// ERROR
		// > 2 argc

	if (argc != 2)
	{
		ft_putstr_fd("Error\nThis program only accept 2 arguments.", 2);
		return (-1);
	}

		//	.ber extension

	size_t lenght = ft_strlen(argv[1]);
	if (ft_strnstr(argv[1], ".ber", lenght) == NULL)
	{
		ft_putstr_fd("Error Wrong map file extension. Please use a file with \"ber\" extension.\n", 2);
		return (-1);
	}

		/*	Parser la map.
				-> Que 5 caractères possibles = 0 1 C E P
					-> 1 seul P
					-> Au moins 1 collectible (C) et au moins 1 sortie (E)
					-> Autant de mur/obstacles si dans la map (1) / Sol (0)
				-> La map doit être RECTANGULAIRE et fermer par des murs (1)
				-> Capable d'ouvrir n'importe quelle map.
		 */


		// Sauvegarder la map

	int fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		printf("Error open. Please verify if the map exists.\n");
		return (1);
	}

	char *tmp = NULL;
	char *save_map = ft_strdup("");
	char *read_map = ft_get_next_line(fd);

	while (read_map != NULL)
	{
		tmp = ft_strjoin(save_map, read_map);
		free(save_map);
		save_map = tmp;
		free(read_map);
		read_map = ft_get_next_line(fd);
	}
	if (*save_map == 0)
	{
		free(save_map);
		printf("Error Empty Map\n");
		return (1);
	}
	printf("%s\n", save_map);

	//	Split par '\n'

	char **save_map_split = ft_split(save_map, '\n');

	free(save_map);
//	for (int i = 0; save_map_split[i] != NULL; i++)
//		printf("%s\n", save_map_split[i]);
	int i = -1;
	int j;
	size_t count_line = 0;
	size_t length;
	while (save_map_split[++i] != NULL)
	{
		count_line++;
		length = ft_strlen(save_map_split[i]);
		if (length != ft_strlen(save_map_split[i + 1]) && save_map_split[i + 1] != NULL)
		{
			printf("Error format map format\n");
			free_split(save_map_split);
			return (1);
		}
		else if (save_map_split[i][0] != '1' || save_map_split[i][length - 1] != '1')
		{
			printf("Map not closed by walls\n");
			free_split(save_map_split);
			return (1);
		}
		j = 0;
		while (save_map_split[i][j] != '\0')
		{
			if (save_map_split[i][j] == 'P' || save_map_split[i][j] == '1' ||
			save_map_split[i][j] == '0' || save_map_split[i][j] == 'C' ||
			save_map_split[i][j] == 'E')
			{
				j++;
			}
			else
			{
				printf("Error map contains invalid characters\n");
				free_split(save_map_split);
				return (1);
			}

		}

	}
	printf("Count line = %ld\n", count_line);
	if (ft_strlen(save_map_split[0]) == count_line)
	{
		printf("Error rectangle\n");
		free_split(save_map_split);
		return (1);
	}





		/* Free */

	free_split(save_map_split);

	return (0);
}
