/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlclr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/17 19:11:43 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/24 17:03:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst_evnt		*ft_sgnlclr(void)
{
	t_ilst_evnt		*ret;

	ret = g_sgnl_evnts;
	while (g_sgnl_evnts != NULL)
	{
		signal(g_sgnl_evnts->index, SIG_DFL);
		g_sgnl_evnts = g_sgnl_evnts->next;
	}
	g_sgnl_evnts = NULL;
	return (ret);
}
