/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:48:21 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/26 16:11:24 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printline(t_env *e, t_pos *from, t_pos *to, int color)
{
	int		len;
	int		xdiff;
	int		ydiff;
	double	xang;
	double	yang;

	xdiff = to->x - from->x + 2 * SIGN(to->x - from->x);
	ydiff = to->y - from->y + 2 * SIGN(to->y - from->y);
	len = MAX(ABS(xdiff), ABS(ydiff));
	xang = LIM((double)xdiff / (double)ABS(ydiff), -1, 1);
	yang = LIM((double)ydiff / (double)ABS(xdiff), -1, 1);
	while (--len > 0)
	{
		mlx_pixel_put(e->mlx, e->win, from->x - SIGN(from->x) + len * xang,
			from->y - SIGN(from->y) + len * yang, color);
	}
}
