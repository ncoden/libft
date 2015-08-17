/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kesrcstrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 19:21:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_kesrcstrigger(t_klst_evnt *events, char *key,
					t_klst_esrc *srcs)
{
	t_klst_evnt		*evnt;
	t_klst_esrc		*esrc;

	if ((evnt = (t_klst_evnt *)ft_klstget((t_klst *)events, key)))
	{
		if ((esrc = (t_klst_esrc *)ft_klstget((t_klst *)srcs, key)))
			ft_esrccall(&evnt->event, esrc->esrc.type, esrc->esrc.data);
		else
			evnt->event.func(evnt->event.data);
		return (TRUE);
	}
	return (FALSE);
}
