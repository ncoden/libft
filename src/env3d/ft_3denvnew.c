/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3denvnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 19:24:01 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/14 19:17:19 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_3denv				*ft_3denvnew(void *mlx, size_t x, size_t y, char *title)
{
	t_3denv		*e;

	if ((e = (t_3denv *)malloc(sizeof(t_3denv))))
		if (mlx || (mlx = mlx_init()))
		{
			e->mlx = mlx;
			if ((e->win = mlx_new_window(mlx, x, y, title)))
				if (ft_imgset(&e->img, mlx, x, y))
					if ((e->cam = ft_3dcamnew(NULL, NULL, 0, NULL)))
					{
						e->obj = NULL;
						ft_2dsizeset(&e->cam->view, x, y);
						return (e);
					}
		}
	ft_3denvdel(e);
	return (NULL);
}
