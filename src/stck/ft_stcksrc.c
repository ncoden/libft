/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stcksrc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 17:23:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 15:16:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_stcksrc(t_stck *stck, t_bool (*func)(void *, void *),
					void *data)
{
	int			count;

	while (stck != NULL)
	{
		count = stck->count;
		while (count > 0)
		{
			count--;
			if ((*func)(stck->datas[count], data))
				return (stck->datas[count]);
		}
		stck = stck->next;
	}
	return (NULL);
}
