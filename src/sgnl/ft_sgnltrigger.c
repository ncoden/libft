/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnltrigger.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 15:36:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnltrigger(char sig)
{
	if (!g_sgnl_evnts || !(ft_ievnttrigger(g_sgnl_evnts, sig)))
	{
		if (g_sgnl_stckevnts)
			ft_ievntstrigger(g_sgnl_stckevnts, sig);
	}
}
