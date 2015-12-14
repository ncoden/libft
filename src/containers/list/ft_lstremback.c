/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:01:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/16 00:06:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

t_lst			*ft_lstremback(t_lst **alst)
{
	t_lst		*node;
	t_lst		*prev;

	if ((prev = *alst) == NULL)
		return (NULL);
	if ((node = prev->next) == NULL)
	{
		*alst = NULL;
		return (prev);
	}
	while (node->next != NULL)
	{
		prev = node;
		node = node->next;
	}
	prev->next = NULL;
	return (node);
}
