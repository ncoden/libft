/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlhook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/15 16:11:20 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 18:25:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnlhook(char sig, void (*func)(void *), void *data)
{
	t_ilst_evnt	*event;

	if (func)
	{
		if ((event = FT_ILSTPUSHFRONT_EVNT(&g_sgnl, sig)))
		{
			event->event.func = func;
			event->event.data = data;
			signal(sig, (void (*)(int))&ft_sgnltrigger);
		}
	}
}
