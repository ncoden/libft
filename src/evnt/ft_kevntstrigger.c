/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kevntstrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 16:46:26 by ncoden           ###   ########.fr       */
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
			count--;
			if (ft_kevnttrigger(events->datas[count], key))
				return (TRUE);
		}
		events = events->next;
	}
	return (FALSE);
}
