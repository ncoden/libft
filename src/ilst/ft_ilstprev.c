/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstprev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 22:26:55 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 15:08:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstprev(t_ilst *lst, int index, t_ilst **prev)
{
	if (!lst)
		*prev = NULL;
	else if (lst->index == index)
	{
		*prev = NULL;
		return (lst);
	}
	else
	{
		while (lst->next && lst->next->index < index)
			lst = lst->next;
		*prev = lst;
		if (lst->next->index == index)
			return (lst->next);
	}
	return (NULL);
}
