/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckpull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 19:56:01 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/04 20:31:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_stckpull(t_stck **astck)
{
	void		*data;
	t_stck		*stck;

	stck = *astck;
	if (!stck || stck->count <= 0)
		return (NULL);
	stck->count--;
	if (stck->head == 1)
	{
		data = stck->datas[0];
		if (stck->next)
		{
			free(stck->datas);
			stck->datas = stck->next->datas;
			free(stck->next);
			stck->next = stck->next->next;
			stck->head = stck->size;
			return (data);
		}
	}
	stck->head--;
	return (stck->datas[stck->head]);
}
