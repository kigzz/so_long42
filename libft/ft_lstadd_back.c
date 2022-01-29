/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 15:09:57 by bpouchep          #+#    #+#             */
/*   Updated: 2020/07/17 15:10:15 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		if (*alst != NULL)
		{
			ft_lstlast(*alst)->next = new;
			new->next = NULL;
		}
		else
			*alst = new;
	}
}
