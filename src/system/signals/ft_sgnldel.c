/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnldel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 19:11:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 15:44:47 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_sgnldel(void)
{
	t_ilst_evnt		*next;

	while (g_sgnl_evnts != NULL)
	{
		signal(g_sgnl_evnts->index, SIG_DFL);
		next = g_sgnl_evnts->next;
		free(g_sgnl_evnts);
		g_sgnl_evnts = next;
	}
	g_sgnl_evnts = NULL;
	if (g_sgnl_stckevnts)
		ft_stckiter(g_sgnl_stckevnts, (void (*)(void *))&ft_sgnllisten);
}
