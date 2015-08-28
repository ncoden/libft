/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckwhile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 17:23:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:22:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/booleans.h"
#include "libft/containers/stack.h"

t_bool			ft_stckwhile(t_stck *stck, t_bool (*func)(void *))
{
	int			head;
	int			size;
	int			count;

	if (!stck)
		return (FALSE);
	head = stck->head;
	size = stck->size;
	count = stck->count;
	while (count > 0)
	{
		head--;
		count--;
		if (!(*func)(stck->datas[head]))
			return (FALSE);
		if (head == 0)
		{
			head = size;
			stck = (t_stck *)stck->next;
		}
	}
	return (TRUE);
}
