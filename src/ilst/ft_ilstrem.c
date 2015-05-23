/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstrem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/23 23:59:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstrem(t_ilst **alst, int index)
{
	t_ilst		*lst;
	t_ilst		*prev;

	if (!alst)
		return (NULL);
	lst = *alst;
	prev = NULL;
	while (lst != NULL)
	{
		if (lst->index == index)
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
