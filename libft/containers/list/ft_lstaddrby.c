/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddrby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 12:01:37 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:10:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void		ft_lstaddrby(t_lst **alst, t_lst *new,
				int (*f)(const void *, const void *, size_t, size_t))
{
	t_lst		*view;
	t_lst		*view_prev;

	if (alst != NULL && new != NULL && f != NULL)
	{
		view = *alst;
		view_prev = NULL;
		while (view != NULL && (*f)(new->data, view->data,
			new->size, view->size) > 0)
		{
			view_prev = view;
			view = view->next;
		}
		if (view_prev != NULL)
			ft_lstaddafter(view_prev, new);
		else
			ft_lstaddfront(alst, new);
	}
}
