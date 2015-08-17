/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 22:45:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 15:14:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstpush(t_ilst **alst, int index, void *data, size_t size)
{
	t_ilst		*new;
	t_ilst		*prev;

	if ((new = ft_ilstprev(*alst, index, &prev)))
		ft_ilstset(new, index, data, size);
	else
	{
		if (!(new = ft_ilstnew(index, data, size)))
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
