/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_envnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/29 19:08:50 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/29 19:26:46 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_env		*ft_envnew(void *mlx, int size_x, int size_y, char *title)
{
	t_env	*new;

	new = NULL;
	if (mlx && title)
	{
		if (!(new = (t_env *)malloc(sizeof(t_env))))
			return (NULL);
		new->mlx = mlx;
		if (!(new->win = mlx_new_window(mlx, size_x, size_y, title)))
		{
			free(new);
			return (NULL);
		}
	}
	return (new);
}
