/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 15:42:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 15:10:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstadd(t_klst **alst, t_klst *new)
{
	t_klst		*prev;
	t_klst		*old;

	old = ft_klstprev(*alst, new->key, &prev);
	if (!prev)
	{
		new->next = (*alst)->next;
		*alst = new;
		return (old);
	}
	if (old)
		new->next = old->next;
	prev->next = new;
	return (old);
}
