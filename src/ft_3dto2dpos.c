/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dto2dpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 21:03:34 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/30 19:32:22 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_pos		*ft_3dto2dpos(t_env3d *e, t_pos3d *pos3d)
{
	double	x;
	double	y;
	double	cosz;
	double	sinz;
	t_pos	*pos;

	x = pos3d->x - e->cam->pos.x;
	y = pos3d->y - e->cam->pos.y;
	cosz = cos(e->cam->ang.z);
	sinz = sin(e->cam->ang.z);
	pos = ft_posnew(x, y);
	x = pos->x * cosz - pos->y * sinz;
	y = pos->x * sinz + pos->y * cosz;
	ft_posset(pos, x, y);
	x = pos->x * cos(e->cam->ang.y);
	y = pos->y * cos(e->cam->ang.x);
	pos->x = x + e->cam->view.x / 2;
	pos->y = y + e->cam->view.y / 2;
	return (pos);
}
