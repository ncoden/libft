/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:48:21 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/26 12:57:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printline(t_env *e, t_pos *from, t_pos *to, int color)
{
	int		len;
	double	Xang;
	double	Yang;

	len = MAX((to->x - from->x), (to->y - from->y));
	Xang = MIN((double)(from->x - to->x) / (double)(from->y - to->y), 1);
	Yang = MIN((double)(from->y - to->y) / (double)(from->x - to->x), 1);
	while (len >= 0)
	{
		mlx_pixel_put(e->mlx, e->win, from->x + len * Xang,
			from->y + len * Yang, color);
		len--;
	}
}
