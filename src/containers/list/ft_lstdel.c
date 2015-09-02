/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:01:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:10:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/list.h"

void	ft_lstdel(t_lst **alst, void (*del)(void *, size_t))
{
	t_lst	*pnt;

	while (*alst != NULL)
	{
		pnt = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = pnt;
	}
}
