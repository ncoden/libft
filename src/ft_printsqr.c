/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsqr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 19:03:39 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/26 12:00:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printsqr(t_env *e, t_pos *from, t_pos *to, int color)
{
	int		x;
	int		y;

	y = from->y;
	while (y != to->y)
	{
		x = from->x;
		while (x != to->x)
		{
			mlx_pixel_put(e->mlx, e->win, x, y, color);
			(x < to->x) ? x++ : x--;
		}
		(y < to->y) ? y++ : y--;
	}
}
