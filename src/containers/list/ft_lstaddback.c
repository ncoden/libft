/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:27:10 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 17:26:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			ft_lstaddback(t_lst **alst, t_lst *node)
{
	t_lst		*lst;

	lst = *alst;
	if (lst == NULL)
		*alst = node;
	else
	{
		while (lst->next != NULL)
			lst = lst->next;
		lst->next = node;
	}
}
