/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sgnlspull.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 14:19:23 by ncoden            #+#    #+#             */
/*   Updated: 2015/05/29 14:29:38 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ilst_evnt		*ft_sgnlspull(void)
{
	ft_sgnlset(ft_stckpull(&g_sgnl_stckevnts));
	g_sgnl_esrcs = ft_stckpull(&g_sgnl_stckesrcs);
	return (g_sgnl_evnts);
}
