/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3dendnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 19:24:01 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/02 15:21:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline void	clear(t_3denv *e)
{
	if (e->win)
		mlx_destroy_window(e->mlx, e->win);
	if (e->mlx)
		free(e->mlx);
	if (e)
		free(e);
}

t_3denv				*ft_3denvnew(void *mlx, size_t x, size_t y, char *title)
{
	t_3denv		*e;

	if ((e = (t_3denv *)malloc(sizeof(t_3denv))))
	{
		if (mlx == NULL)
			mlx = mlx_init();
		if (mlx != NULL)
		{
			e->mlx = mlx;
			if ((e->win = mlx_new_window(e->mlx, x, y, title)))
			{
				if ((e->cam = ft_3dcamnew(NULL, NULL, 0, NULL)))
				{
					ft_2dsizeset(&e->cam->view, x, y);
					return (e);
				}
			}
		}
	}
	clear(e);
	return (NULL);
}
