/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 22:45:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 15:14:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstpush(t_klst **alst, char *key, void *data, size_t size)
{
	t_klst		*new;
	t_klst		*prev;

	if ((new = ft_klstprev(*alst, key, &prev)))
		ft_klstset(new, key, data, size);
	else
	{
		if (!(new = ft_klstnew(key, data, size)))
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
