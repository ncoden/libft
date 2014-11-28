/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:48:21 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/28 12:22:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printline(t_env *e, t_pos *from, t_pos *to, int color)
{
	int		len;
	double	xang;
	double	yang;

	len = MAX((to->x - from->x), (to->y - from->y));
	xang = MIN((double)(from->x - to->x) / (double)(from->y - to->y), 1);
	yang = MIN((double)(from->y - to->y) / (double)(from->x - to->x), 1);
	while (len >= 0)
	{
		mlx_pixel_put(e->mlx, e->win, from->x + len * xang,
			from->y + len * yang, color);
		len--;
	}
}
