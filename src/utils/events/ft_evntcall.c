/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evntcall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/11/09 22:35:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/utils/events.h"
#include "libft/utils/events/private.h"

t_bool			ft_evntcall(t_evnt *event)
{
	t_bool		save;
	t_bool		ret;

	save = g_evnt_propagate;
	g_evnt_propagate = TRUE;
	event->func(event->data);
	ret = g_evnt_propagate;
	g_evnt_propagate = save;
	return (ret);
}
