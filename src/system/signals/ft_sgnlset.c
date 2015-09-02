/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 18:27:41 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:47:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/containers/stack.h"
#include "libft/system/signals.h"
#include "libft/utils/events.h"

t_bool			ft_sgnlset(t_ilst_evnt *events)
{
	if (g_sgnl_pushmode)
	{
		if (!(ft_stckpush(&g_sgnl_stckevnts, g_sgnl_evnts)))
			return (FALSE);
		if (!(ft_stckpush(&g_sgnl_stckesrc, g_sgnl_esrc)))
			return (FALSE);
	}
	if (g_sgnl_stckevnts && g_sgnl_stckevnts->count > 0)
	{
		if (!(ft_stckenter(&g_sgnl_stckevnts)))
			return (FALSE);
		if (!(ft_stckenter(&g_sgnl_stckesrc)))
			return (FALSE);
	}
	ft_sgnlclr();
	g_sgnl_evnts = events;
	ft_sgnllisten(events);
	return (TRUE);
}
