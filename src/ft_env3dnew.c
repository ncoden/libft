/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end3dnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 19:24:01 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 23:06:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_env3d		*ft_env3dnew(void *mlx, t_cam *cam, char *title)
{
	t_env3d		*new;

	new = NULL;
	if (mlx && cam && title)
	{
		if (!(new = (t_env3d *)malloc(sizeof(t_env3d))))
			return (NULL);
		new->mlx = mlx;
		if (!(new->win = mlx_new_window(mlx, cam->view.x, cam->view.y, title)))
		{
			free(mlx);
			return (NULL);
		}
		new->cam = cam;
	}
	return (new);
}
