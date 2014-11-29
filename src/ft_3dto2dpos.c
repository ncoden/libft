/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dto2dpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 21:03:34 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 23:06:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pos		*ft_3dto2dpos(t_env3d *e, t_pos3d *pos3d)
{
	double	x;
	double	y;
	t_pos	*pos;

	x = pos3d->x - e->cam->pos.x;
	y = pos3d->y - e->cam->pos.y;
	x = (double)x * (double)cos(e->cam->ang.z) + (double)y * (double)sin(e->cam->ang.z);
	y = - (double)x * (double)sin(e->cam->ang.z) + (double)y * (double)cos(e->cam->ang.z);
	x += e->cam->view.x / 2;
	y += e->cam->view.y / 2;
	pos = ft_posnew(x, y);
	return (pos);
}
