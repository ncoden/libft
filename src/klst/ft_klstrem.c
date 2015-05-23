/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_klstrem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 00:01:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_klst			*ft_klstrem(t_klst **alst, char *key)
{
	t_klst		*lst;
	t_klst		*prev;

	if (!alst)
		return (NULL);
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
			return (lst);
		}
		prev = lst;
		lst = lst->next;
	}
	return (NULL);
}
