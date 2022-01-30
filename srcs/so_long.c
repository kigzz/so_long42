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

	// ERROR
		// > 2 argc

	if (argc != 2)
	{
		ft_putstr_fd("Error\nThis program only accept 2 arguments.", 2);
		return (-1);
	}

		//	.ber extension

	int lenght = ft_strlen(argv[1]);
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

	char *map_path = ft_strdup("maps/");
	char *open_map_path = ft_strjoin(map_path, argv[1]);
	int fd = open(open_map_path, O_RDWR);
	if (fd == -1)
	{
		free(map_path);
		free(open_map_path);
		printf("Error open\n");
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
		free(map_path);
		free(open_map_path);
		free(save_map);
		printf("Error Empty Map\n");
		return (1);
	}
	printf("%s\n", save_map);

		//




		/* Free */

	free(save_map);
	free(map_path);
	free(open_map_path);





	return (0);
}
