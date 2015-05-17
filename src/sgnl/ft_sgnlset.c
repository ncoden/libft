/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 18:27:41 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/17 21:49:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnlset(t_ilst_evnt *events)
{
	ft_sgnlclr();
	g_sgnl = events;
	while (events != NULL)
	{
		signal(events->index, (void (*)(int))&ft_sgnltrigger);
		events = events->next;
	}
}