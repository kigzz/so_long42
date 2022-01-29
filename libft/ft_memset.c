/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:23:09 by bpouchep          #+#    #+#             */
/*   Updated: 2020/07/15 20:23:11 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)ptr;
	while (n > 0)
	{
		str[i] = (unsigned char)x;
		i++;
		n--;
	}
	return (ptr);
}
