/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcknew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:02:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/30 19:33:59 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stck			*ft_stcknew(int size)
{
	t_stck		*new;

	if (size <= 0)
		size = STCK_SIZE;
	if ((new = (t_stck *)malloc(sizeof(t_stck))))
	{
		if ((new->datas = (void **)malloc(sizeof(void *) * size)))
		{
			new->size = size;
			new->count = 0;
			new->next = NULL;
			return (new);
		}
	}
	return (NULL);
}
