/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 17:23:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/04 20:31:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_stckiter(t_stck *stck, void (*func)(void *))
{
	int			head;
	int			size;
	int			count;

	if (stck)
	{
		head = stck->head;
		size = stck->size;
		count = stck->count;
		while (count > 0)
		{
			head--;
			count--;
			(*func)(stck->datas[head]);
			if (head == 0)
			{
				head = size;
				stck = (t_stck *)stck->next;
			}
		}
	}
}
