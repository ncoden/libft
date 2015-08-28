/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlcrush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 18:27:41 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:39:06 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <signal.h>
#include "libft/system/signals.h"
#include "libft/utils/events.h"

void			ft_sgnlcrush(t_ilst_evnt *events)
{
	ft_sgnldel();
	g_sgnl_evnts = events;
	while (events != NULL)
	{
		signal(events->index, (void (*)(int))&ft_sgnltrigger);
		events = events->next;
	}
}
