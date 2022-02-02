/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 22:18:59 by bpouchep          #+#    #+#             */
/*   Updated: 2022/01/30 22:19:31 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_extension(char *str, const char *to_find)
{
	size_t	i;
	size_t	j;
	int		size_find;

	if (!str || !to_find || *to_find == '\0')
		return (0);
	i = ft_strlen(str) - 4;
	size_find = 0;
	while (to_find[size_find] != '\0')
		size_find++;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (0);
		else
			i++;
	}
	return (1);
}
