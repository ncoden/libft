/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:06:18 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/27 15:20:44 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printvec(t_env *e, t_vec *vec, int color)
{
	int		len;
	double	Xang;
	double	Yang;

	if (e && vec)
	{
		Xang = cos(vec->ang);
		Yang = sin(vec->ang);
		len = vec->len;
		while (len >= 0)
		{
			mlx_pixel_put(e->mlx, e->win, (vec->pos).x + len * Xang,
				(vec->pos).y + len * Yang, color);
			len--;
		}
	}
}
