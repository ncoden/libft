/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnldelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/16 16:06:47 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 15:40:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnldelone(char sig)
{
	if (g_sgnl_evnts)
	{
		signal(sig, SIG_DFL);
		ft_ilstdelone((t_ilst **)&g_sgnl_evnts, sig, (void (*)(t_ilst *))&free);
		if (g_sgnl_stckevnts)
			ft_stckiter(g_sgnl_stckevnts, (void (*)(void *))&ft_sgnllisten);
	}
}
