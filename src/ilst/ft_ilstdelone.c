/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 14:50:19 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_ilstdelone(t_ilst **alst, int index,
					void (*func)(t_ilst *lst))
{
	t_ilst		*lst;
	t_ilst		*prev;

	prev = ft_ilstprev(*alst, index);
	if (prev)
		lst = prev->next;
	else
		lst = *alst;
	if (!lst || lst->index != index)
		return (FALSE);
	if (prev)
		prev->next = lst->next;
	else
		*alst = (*alst)->next;
	(*func)(lst);
	return (TRUE);
}
