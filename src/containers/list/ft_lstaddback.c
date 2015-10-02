/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:27:10 by ncoden            #+#    #+#             */
/*   Updated: 2015/10/02 14:06:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void			ft_lstaddback(t_lst **alst, t_lst *new)
{
	t_lst		*view;

	view = *alst;
	if (view == NULL)
		*alst = new;
	else
	{
		while (view->next != NULL)
			view = view->next;
		view->next = new;
	}
}
