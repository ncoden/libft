/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddby.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 19:21:39 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 21:52:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			ft_lstaddby(t_lst **alst, t_lst *node,
					int (*f)(const void *, const void *))
{
	t_lst		*lst;
	t_lst		*lst_prev;

	lst = *alst;
	lst_prev = NULL;
	while (lst != NULL && (*f)(node->data, lst->data) <= 0)
	{
		lst_prev = lst;
		lst = lst->next;
	}
	if (lst_prev != NULL)
		ft_lstaddafter(lst_prev, node);
	else
		ft_lstaddfront(alst, node);
}
