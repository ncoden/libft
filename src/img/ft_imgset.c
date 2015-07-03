/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 14:35:26 by ncoden            #+#    #+#             */
/*   Updated: 2015/06/14 21:11:32 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool			ft_imgset(t_img *img, void *mlx, size_t x, size_t y)
{
	int			bpp;

	if (mlx)
	{
		if ((img->data = mlx_new_image(mlx, x, y)))
		{
			if ((img->buff = mlx_get_data_addr(img->data, &bpp,
					&img->size_x, (int *)&img->endian)))
			{
				img->bpp = bpp / 8;
				return (TRUE);
			}
		}
		ft_imgclr(img, mlx);
	}
	return (FALSE);
}
