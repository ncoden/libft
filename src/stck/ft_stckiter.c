/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 17:23:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 19:09:37 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_stckiter(t_stck *stck, void (*func)(void *))
{
	int			count;

	while (stck != NULL)
	{
		count = stck->count;
		while (count > 0)
		{
			count--;
			(*func)(stck->datas[count]);
		}
		stck = stck->next;
	}
}
