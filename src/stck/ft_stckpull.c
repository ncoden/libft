/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckpull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 19:56:01 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 20:05:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_stckpull(t_stck **astck)
{
	void		*data;
	t_stck		*stck;

	stck = *astck;
	if (stck->count <= 0)
		return (NULL);
	if (stck->count == 1)
	{
		data = stck->datas[0];
		*astck = stck->next;
		free(stck->datas);
		free(stck);
		return (data);
	}
	stck->count--;
	return (stck->datas[stck->count - 1]);
}
