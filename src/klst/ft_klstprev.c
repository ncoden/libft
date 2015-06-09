/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstprev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 22:26:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/09 16:23:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstprev(t_klst *lst, char *key, t_klst **prev)
{
	if (!lst || (ft_strcmp(lst->next->key, key) > 0))
		*prev = NULL;
	else if (ft_strequ(lst->key, key))
	{
		*prev = NULL;
		return (lst);
	}
	else
	{
		while (lst->next && (ft_strcmp(lst->next->key, key) < 0))
			lst = lst->next;
		*prev = lst;
		if (lst->next && ft_strequ(lst->next->key, key))
			return (lst->next);
	}
	return (NULL);
}
