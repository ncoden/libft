/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 20:07:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:19:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/containers/stack.h"

void			*ft_stckget(t_stck *stck, int index)
{
	int			size;

	if (!stck || stck->count <= index)
		return (NULL);
	size = stck->size;
	while (index > size)
	{
		stck = (t_stck *)stck->next;
		index -= size;
	}
	return (stck->datas[index]);
}
