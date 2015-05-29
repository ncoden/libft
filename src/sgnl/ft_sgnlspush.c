/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlspush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 14:08:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 16:38:51 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	#include <stdio.h>
t_bool			ft_sgnlspush(t_ilst_evnt *events)
{
	if (g_sgnl_evnts || g_sgnl_stckevnts)
	{
		if (!(ft_stckpush(&g_sgnl_stckevnts, g_sgnl_evnts)))
			return (FALSE);
		if (!(ft_stckpush(&g_sgnl_stckesrcs, g_sgnl_esrcs)))
		{
			ft_stckpull(&g_sgnl_stckevnts);
			return (FALSE);
		}
	}
	g_sgnl_evnts = events;
	ft_sgnllisten(events);
	g_sgnl_esrcs = NULL;
	return (TRUE);
}
