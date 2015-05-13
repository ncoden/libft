/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trmkeyhook.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:30:12 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/13 21:45:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_trmkeyhook(t_trm *trm, char *key, void (*func)(void *),
					void *data)
{
	t_klst_evnt	*event;

	if (trm)
	{
		if ((event = (t_klst_evnt *)malloc(sizeof(t_klst_evnt))))
		{
			event->event.func = func;
			event->event.data = data;
			event->key = key;
			event->next = NULL;
			ft_lstaddback((t_lst **)&(trm->on_key_press), (t_lst *)event);
		}
	}
}
