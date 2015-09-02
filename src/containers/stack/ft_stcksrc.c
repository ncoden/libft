/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcksrc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 17:23:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:26:09 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/stack.h"

void			*ft_stcksrc(t_stck *stck, t_bool (*func)(void *, void *),
					void *data)
{
	int			head;
	int			size;
	int			count;

	if (!stck)
		return (NULL);
	head = stck->head;
	size = stck->size;
	count = stck->count;
	while (count > 0)
	{
		head--;
		count--;
		if ((*func)(stck->datas[head], data))
			return (stck->datas[head]);
		if (head == 0)
		{
			head = size;
			stck = (t_stck *)stck->next;
		}
	}
	return (NULL);
}
