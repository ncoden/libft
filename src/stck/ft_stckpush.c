/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 19:40:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/26 14:01:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_stckpush(t_stck **astck, void *data)
{
	t_stck		*stck;
	t_stck		*new;

	stck = *astck;
	if (!stck)
	{
		if (!(stck = ft_stcknew(STCK_SIZE)))
			return (FALSE);
		*astck = stck;
	}
	else if (stck->count >= stck->size)
	{
		if (!(new = ft_stcknew((*astck)->size)))
			return (FALSE);
		new->next = stck;
		*astck = new;
	}
	stck->datas[stck->count] = data;
	stck->count++;
	return (TRUE);
}
