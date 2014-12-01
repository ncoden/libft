/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dto2dpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 21:03:34 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/01 22:06:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_3dto2dpos(t_env3d *e, t_pos3d *pos3d, t_pos *pos2d)
{
	double	x;
	double	y;
	double	cosz;
	double	sinz;

	x = pos3d->x - e->cam->pos.x;
	y = pos3d->y - e->cam->pos.y;
	cosz = cos(e->cam->ang.z);
	sinz = sin(e->cam->ang.z);
	ft_posset(pos2d, x, y);
	x = pos2d->x * cosz - pos2d->y * sinz;
	y = pos2d->x * sinz + pos2d->y * cosz;
	ft_posset(pos2d, x, y);
	x = pos2d->x * cos(e->cam->ang.y);
	y = pos2d->y * cos(e->cam->ang.x);
	pos2d->x = x + e->cam->view.x / 2;
	pos2d->y = y + e->cam->view.y / 2;
}
