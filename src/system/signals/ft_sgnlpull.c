/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlpull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 14:19:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 18:45:31 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/containers/stack.h"
#include "libft/system/signals.h"
#include "libft/utils/events.h"

t_ilst_evnt		*ft_sgnlpull(void)
{
	ft_sgnlset(ft_stckpull(&g_sgnl_stckevnts));
	g_sgnl_esrc = ft_stckpull(&g_sgnl_stckesrc);
	return (g_sgnl_evnts);
}
