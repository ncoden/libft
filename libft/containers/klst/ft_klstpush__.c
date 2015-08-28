/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstpush__.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 22:45:15 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 15:50:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/klst.h"

t_klst			*ft_klstpush__(size_t size, t_klst **alst, char *key)
{
	t_klst		*new;
	t_klst		*prev;

	if ((new = ft_klstprev(*alst, key, &prev)))
		return (new);
	if (!(new = ft_klstnew__(size, key)))
		return (NULL);
	if (prev)
	{
		new->next = prev->next;
		prev->next = new;
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
	return (new);
}
