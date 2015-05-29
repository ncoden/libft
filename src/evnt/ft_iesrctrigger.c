/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iesrctrigger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 16:11:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_iesrctrigger(t_ilst_evnt *events, int index,
					t_type esrc_type, void *esrc_data)
{
	t_ilst_evnt		*evnt;

	if (events)
	{
		if ((evnt = (t_ilst_evnt *)ft_ilstget((t_ilst *)events, index)))
		{
			ft_esrccall(&evnt->event, esrc_type, esrc_data);
			return (TRUE);
		}
	}
	return (FALSE);
}
