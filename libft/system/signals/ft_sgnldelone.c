/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnldelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/16 16:06:47 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:42:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <signal.h>
#include "libft/containers/ilst.h"
#include "libft/containers/stack.h"
#include "libft/system/signals.h"

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
