/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evntnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 12:26:49 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/14 01:58:00 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
