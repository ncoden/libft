/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnllisten.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 15:04:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 15:39:54 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnllisten(t_ilst_evnt *evnts)
{
	while (evnts != NULL)
	{
		signal(evnts->index, (void (*)(int))&ft_sgnltrigger);
		evnts = evnts->next;
	}
}
