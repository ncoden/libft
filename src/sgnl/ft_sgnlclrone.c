/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlclrone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/16 16:06:47 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 15:40:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst_evnt		*ft_sgnlclrone(char sig)
{
	if (g_sgnl_evnts)
	{
		signal(sig, SIG_DFL);
		if (g_sgnl_stckevnts)
			ft_stckiter(g_sgnl_stckevnts, (void (*)(void *))&ft_sgnllisten);
		return ((t_ilst_evnt *)ft_ilstrem((t_ilst **)&g_sgnl_evnts, sig));
	}
	return (NULL);
}
