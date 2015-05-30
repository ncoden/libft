/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stckget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 20:07:54 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 20:35:29 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_stckget(t_stck *stck, int index)
{
	int			i;

	if (!stck)
		return (NULL);
	i = 0;
	while (stck)
	{
		if (i + stck->count > index)
			return (stck->datas[stck->count - 1 - (index - i)]);
		i += stck->count;
		stck = stck->next;
	}
	return (NULL);
}
