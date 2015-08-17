/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlunset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/05 18:17:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/05 21:44:45 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_sgnlunset(void)
{
	if (!(ft_stckleave(&g_sgnl_stckevnts)))
		return (FALSE);
	if (!(ft_stckleave(&g_sgnl_stckesrc)))
		return (FALSE);
	ft_sgnlclr();
	if (g_sgnl_stckevnts->count > 0)
	{
		g_sgnl_evnts = ft_stckpull(&g_sgnl_stckevnts);
		g_sgnl_esrc = ft_stckpull(&g_sgnl_stckesrc);
		ft_sgnllisten(g_sgnl_evnts);
	}
	return (TRUE);
}
