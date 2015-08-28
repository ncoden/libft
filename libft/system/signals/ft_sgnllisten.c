/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnllisten.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 15:04:32 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:44:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <signal.h>
#include "libft/system/signals.h"
#include "libft/utils/events.h"

void			ft_sgnllisten(t_ilst_evnt *evnts)
{
	while (evnts != NULL)
	{
		signal(evnts->index, (void (*)(int))&ft_sgnltrigger);
		evnts = evnts->next;
	}
}
