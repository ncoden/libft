/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 14:35:26 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/08 18:15:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_imgset(t_img *img, void *mlx, size_t x, size_t y)
{
	int		bpp;

	if (mlx)
	{
		if ((img->data = mlx_new_image(mlx, x, y)))
			if ((img->buff = mlx_get_data_addr(img->data, &bpp,
					(int *)&img->size_x, (int *)&img->endian)))
				return (1);
		ft_imgclr(img, mlx);
	}
	return (0);
}
