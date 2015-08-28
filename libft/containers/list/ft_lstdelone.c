/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:29:21 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:10:52 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/list.h"

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
