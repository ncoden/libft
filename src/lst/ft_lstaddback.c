/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:27:10 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 17:36:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*view;

	if (alst != NULL && new != NULL)
	{
		view = *alst;
		if (view != NULL)
		{
			while (view->next != NULL)
				view = view->next;
			view->next = new;
		}
		else
			*alst = new;
	}
}
