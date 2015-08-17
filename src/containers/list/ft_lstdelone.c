/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:29:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/11 16:42:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdelone(t_lst **alst, void (*del)(void *, size_t))
{
	t_lst		*next;

	if (*alst)
	{
		next = (*alst)->next;
		if (del)
			(*del)((*alst)->data, (*alst)->size);
		free(*alst);
		*alst = next;
	}
}
