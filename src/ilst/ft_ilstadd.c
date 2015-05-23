/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 15:42:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/23 23:10:02 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstadd(t_ilst **alst, t_ilst *new)
{
	t_ilst		*prev;
	t_ilst		*old;

	prev = ft_ilstprev(*alst, new->index);
	if (!prev)
	{
		old = *alst;
		new->next = (*alst)->next;
		*alst = new;
		return (old);
	}
	old = prev->next;
	if (prev->next)
		new->next = prev->next->next;
	prev->next = new;
	return (old);
}
