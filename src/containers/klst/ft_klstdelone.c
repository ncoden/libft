/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 15:12:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_klstdelone(t_klst **alst, char *key,
					void (*func)(t_klst *lst))
{
	t_klst		*lst;
	t_klst		*prev;

	if (!(lst = ft_klstprev(*alst, key, &prev)))
		return (FALSE);
	if (prev)
		prev->next = lst->next;
	else
		*alst = (*alst)->next;
	(*func)(lst);
	return (TRUE);
}
