/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 17:39:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_klstdel(t_klst **alst, char *key, void (*func)(t_klst *lst))
{
	t_klst		*lst;
	t_klst		*prev;

	if (!alst || !func)
		return (FALSE);
	lst = *alst;
	prev = NULL;
	while (lst != NULL)
	{
		if (ft_strequ(lst->key, key))
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
