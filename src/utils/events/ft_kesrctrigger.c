/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kesrctrigger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 16:12:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_kesrctrigger(t_klst_evnt *events, char *key,
					t_type esrc_type, void *esrc_data)
{
	t_klst_evnt		*evnt;

	if (events)
	{
		if ((evnt = (t_klst_evnt *)ft_klstget((t_klst *)events, key)))
		{
			ft_esrccall(&evnt->event, esrc_type, esrc_data);
			return (TRUE);
		}
	}
	return (FALSE);
}
