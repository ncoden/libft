/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstpush__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 22:45:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/23 23:48:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstpush__(size_t size, t_ilst **alst, int index)
{
	t_ilst		*new;
	t_ilst		*prev;

	prev = ft_ilstprev(*alst, index);
	if (prev && prev->next->index == index)
	{
		new = prev->next;
		new->index = index;
	}
	else
	{
		if (!(new = ft_ilstnew__(size, index)))
			return (NULL);
		if (prev)
		{
			new->next = prev->next;
			prev->next = new;
		}
		else
		{
			new->next = *alst;
			(*alst) = new;
		}
	}
	return (new);
}
