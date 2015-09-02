/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kevnttrigger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 21:53:50 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/containers/klst.h"
#include "libft/utils/events.h"

t_bool			ft_kevnttrigger(t_klst_evnt *events, char *key)
{
	t_klst_evnt	*lst;

	if (events)
	{
		if ((lst = (t_klst_evnt *)ft_klstget((t_klst *)events, key)))
		{
			lst->event.func(lst->event.data);
			return (TRUE);
		}
	}
	return (FALSE);
}
