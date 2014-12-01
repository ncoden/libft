/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end3dnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 19:24:01 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/01 19:15:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline void	clear(t_env3d *e)
{
	if (e->win)
		mlx_destroy_window(e->mlx, e->win);
	if (e->mlx)
		free(e->mlx);
	if (e)
		free(e);
}

t_env3d				*ft_env3dnew(void *mlx, int size_x, int size_y, char *title)
{
	t_env3d		*e;

	if ((e = (t_env3d *)malloc(sizeof(t_env3d))))
	{
		if (mlx == NULL)
			mlx = mlx_init();
		if (mlx != NULL)
		{
			e->mlx = mlx;
			if ((e->win = mlx_new_window(e->mlx, size_x, size_y, title)))
			{
				if ((e->cam = ft_camnew(NULL, NULL, 0, NULL)))
				{
					ft_size2dset(&e->cam->view, size_x, size_y);
					return (e);
				}
			}
		}
	}
	clear(e);
	return (NULL);
}
