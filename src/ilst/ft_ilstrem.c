/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstrem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 21:06:34 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 15:21:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst			*ft_ilstrem(t_ilst **alst, int index)
{
	t_ilst		*lst;
	t_ilst		*prev;

	if (!(lst = ft_ilstprev(*alst, index, &prev)))
		return (NULL);
	if (prev)
		prev->next = lst->next;
	else
		*alst = (*alst)->next;
	return (lst);
}
