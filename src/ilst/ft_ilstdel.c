/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 17:34:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_ilstdel(t_ilst **alst, int index, void (*func)(t_ilst *lst))
{
	t_ilst		*lst;
	t_ilst		*prev;

	if (!alst || !func)
		return (FALSE);
	lst = *alst;
	prev = NULL;
	while (lst != NULL)
	{
		if (lst->index == index)
		{
			if (prev == NULL)
				*alst = NULL;
			else
				prev->next = lst->next;
			(*func)(lst);
			return (TRUE);
		}
		prev = lst;
		lst = lst->next;
	}
	return (FALSE);
}
