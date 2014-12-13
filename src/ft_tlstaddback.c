/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tlstaddback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 17:46:05 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/03 18:38:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tlstaddback(t_tlist **alst, t_tlist *new)
{
	t_tlist		*view;

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
