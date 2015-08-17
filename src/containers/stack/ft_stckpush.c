/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 19:40:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/04 20:18:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline t_bool	expand_stck(t_stck *stck)
{
	t_stck_node		*new;

	if (!(new = (t_stck_node *)malloc(sizeof(t_stck_node))))
		return (FALSE);
	new->next = stck->next;
	new->datas = stck->datas;
	stck->next = new;
	stck->head = 0;
	if (!(stck->datas = (void **)malloc(sizeof(void *) * stck->size)))
	{
		free(new);
		return (FALSE);
	}
	return (TRUE);
}

t_bool					ft_stckpush(t_stck **astck, void *data)
{
	t_stck		*stck;

	stck = *astck;
	if (!stck)
	{
		if (!(stck = ft_stcknew(STCK_SIZE)))
			return (FALSE);
		*astck = stck;
	}
	else if (stck->head == stck->size)
	{
		if (!expand_stck(stck))
			return (FALSE);
	}
	stck->datas[stck->head] = data;
	stck->count++;
	stck->head++;
	return (TRUE);
}
