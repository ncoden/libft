/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 14:08:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/06 17:15:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_sgnlpush(t_ilst_evnt *events)
{
	if (g_sgnl_evnts || g_sgnl_stckevnts)
	{
		if (!(ft_stckpush(&g_sgnl_stckevnts, g_sgnl_evnts)))
			return (FALSE);
		if (!(ft_stckpush(&g_sgnl_stckesrc, g_sgnl_esrc)))
		{
			ft_stckpull(&g_sgnl_stckevnts);
			return (FALSE);
		}
	}
	g_sgnl_pushmode = TRUE;
	g_sgnl_evnts = events;
	ft_sgnllisten(events);
	g_sgnl_esrc = NULL;
	return (TRUE);
}