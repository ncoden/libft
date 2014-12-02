/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 12:06:18 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/02 15:23:20 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printvec(t_env *e, t_vec *vec, int color)
{
	int		len;
	double	xang;
	double	yang;

	if (e && vec)
	{
		xang = cos(vec->ang);
		yang = sin(vec->ang);
		len = vec->len;
		while (len >= 0)
		{
			mlx_pixel_put(e->mlx, e->win, (vec->pos).x + len * xang,
				(vec->pos).y + len * yang, color);
			len--;
		}
	}
}
