/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcknew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:02:31 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:20:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/containers/stack.h"

t_stck			*ft_stcknew(int size)
{
	t_stck		*new;

	if (size <= 0)
		size = STCK_SIZE;
	if ((new = (t_stck *)malloc(sizeof(t_stck))))
	{
		if ((new->datas = (void **)malloc(sizeof(void *) * size)))
		{
			new->next = NULL;
			new->count = 0;
			new->head = 0;
			new->size = size;
			return (new);
		}
	}
	return (NULL);
}
