/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlpull.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 14:19:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/06 17:15:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst_evnt		*ft_sgnlpull(void)
{
	ft_sgnlset(ft_stckpull(&g_sgnl_stckevnts));
	g_sgnl_esrc = ft_stckpull(&g_sgnl_stckesrc);
	return (g_sgnl_evnts);
}
