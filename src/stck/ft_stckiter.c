/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/25 17:23:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/25 17:27:06 by ncoden           ###   ########.fr       */
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
			(*func)(stck->datas[count]);
			count--;
		}
	}
}
