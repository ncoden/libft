/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kevntstrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/25 17:46:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_kevntstrigger(t_stck *events, char *key)
{
	int			count;

	while (events != NULL)
	{
		count = events->count;
		while (count > 0)
		{
			if (ft_kevnttrigger(events->datas[count], key))
				return (TRUE);
			count--;
		}
	}
	return (FALSE);
}
