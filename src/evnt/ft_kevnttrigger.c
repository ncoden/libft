/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kevnttrigger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 19:57:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/18 15:59:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_kevnttrigger(t_klst_evnt *events, char *key)
{
	t_klst_evnt	*lst;

	if (events && key)
	{
		if ((lst = (t_klst_evnt *)ft_klstget((t_klst *)events, key)))
			lst->event.func(lst->event.data);
	}
}
