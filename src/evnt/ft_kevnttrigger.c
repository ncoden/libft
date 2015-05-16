/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kevnttrigger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/16 16:32:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_kevnttrigger(t_klst_evnt *events, char *key)
{
	t_klst_evnt	*lst;

	if (events && key)
	{
		if ((lst = FT_KLSTGET_EVNT(events, key)))
			lst->event.func(lst->event.data);
	}
}
