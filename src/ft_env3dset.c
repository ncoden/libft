/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env3dset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 18:53:45 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 19:03:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_env3dset(t_env3d *env3d, void *mlx, t_cam *cam, char *title)
{
	if (env3d && mlx && cam && title)
	{
		env3d->mlx = mlx;
		env3d->win = mlx_new_window(mlx, cam->view.x, cam->view.y, title);
		env3d->cam = cam;
	}
}
