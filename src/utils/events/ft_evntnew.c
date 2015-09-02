/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evntnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 21:48:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/utils/events.h"

t_evnt			*ft_evntnew(void (*func)(void *), void *data)
{
	t_evnt		*event;

	if (!func)
		return (NULL);
	if (!(event = (t_evnt *)malloc(sizeof(t_evnt))))
		return (NULL);
	event->func = func;
	event->data = data;
	return (event);
}
