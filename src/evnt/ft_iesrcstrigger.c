/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iesrcstrigger.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 19:21:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_iesrcstrigger(t_ilst_evnt *events, int index,
					t_ilst_esrc *srcs)
{
	t_ilst_evnt		*evnt;
	t_ilst_esrc		*esrc;

	if ((evnt = (t_ilst_evnt *)ft_ilstget((t_ilst *)events, index)))
	{
		if ((esrc = (t_ilst_esrc *)ft_ilstget((t_ilst *)srcs, index)))
			ft_esrccall(&evnt->event, esrc->esrc.type, esrc->esrc.data);
		else
			evnt->event.func(evnt->event.data);
		return (TRUE);
	}
	return (FALSE);
}
