/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ievnttrigger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 21:52:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/booleans.h"
#include "libft/containers/ilst.h"
#include "libft/utils/events.h"

t_bool			ft_ievnttrigger(t_ilst_evnt *events, int index)
{
	t_ilst_evnt	*lst;

	if (events)
	{
		if ((lst = (t_ilst_evnt *)ft_ilstget((t_ilst *)events, index)))
		{
			lst->event.func(lst->event.data);
			return (TRUE);
		}
	}
	return (FALSE);
}
