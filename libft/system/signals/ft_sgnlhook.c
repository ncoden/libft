/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlhook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/15 16:11:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:44:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/containers/ilst.h"
#include "libft/system/signals.h"
#include "libft/utils/events.h"

void			ft_sgnlhook(char sig, void (*func)(void *), void *data)
{
	t_ilst_evnt	*event;

	if (func)
	{
		if ((event = (t_ilst_evnt *)ft_ilstpush__(sizeof(t_ilst_evnt),
			(t_ilst **)&g_sgnl_evnts, sig)))
		{
			event->event.func = func;
			event->event.data = data;
			signal(sig, (void (*)(int))&ft_sgnltrigger);
		}
	}
}
