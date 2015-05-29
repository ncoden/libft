/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ievntstrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 16:45:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_ievntstrigger(t_stck *events, int index)
{
	int			count;

	while (events != NULL)
	{
		count = events->count;
		while (count > 0)
		{
			count--;
			if (ft_ievnttrigger(events->datas[count], index))
				return (TRUE);
		}
		events = events->next;
	}
	return (FALSE);
}
