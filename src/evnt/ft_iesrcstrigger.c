/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iesrcstrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 16:07:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_iesrcstrigger(t_stck *events, int index,
					t_type esrc_type, void *esrc_data)
{
	int			count;

	while (events != NULL)
	{
		count = events->count;
		while (count > 0)
		{
			if (ft_iesrctrigger(events->datas[count], index,
					esrc_type, esrc_data))
				return (TRUE);
			count--;
		}
	}
	return (FALSE);
}
