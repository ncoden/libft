/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ievntstrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/25 17:45:29 by ncoden           ###   ########.fr       */
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
			if (ft_ievnttrigger(events->datas[count], index))
				return (TRUE);
			count--;
		}
	}
	return (FALSE);
}
