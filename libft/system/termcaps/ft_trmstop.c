/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmstop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 01:27:42 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 19:19:48 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/system/termcaps.h"
#include "libft/utils/events.h"

t_bool			ft_trmstop(t_mt_tps *tps)
{
	t_mt_tps	*child;

	if (tps || (tps = ft_esrcget(TYPE_TPS)))
	{
		if (tps->child)
		{
			child = tps->child;
			while (child)
			{
				ft_trmstop(child);
				child = child->next;
			}
		}
		if (tps->status & TRM_STREADING)
			ft_trmclosein();
		tps->status = 0;
		return (TRUE);
	}
	return (FALSE);
}
