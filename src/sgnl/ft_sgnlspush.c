/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlspush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 14:08:18 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 14:29:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_sgnlspush(t_ilst_evnt *events)
{
	if (ft_stckpush(&g_sgnl_stckevnts, g_sgnl_evnts))
	{
		if (ft_stckpush(&g_sgnl_stckesrcs, g_sgnl_esrcs))
		{
			ft_sgnlset(events);
			g_sgnl_esrcs = NULL;
			return (TRUE);
		}
		ft_stckpull(&g_sgnl_stckevnts);
	}
	return (FALSE);
}
