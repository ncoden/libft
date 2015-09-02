/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 15:42:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 14:02:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/containers/ilst.h"

t_ilst			*ft_ilstadd(t_ilst **alst, t_ilst *new)
{
	t_ilst		*prev;
	t_ilst		*old;

	old = ft_ilstprev(*alst, new->index, &prev);
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
