/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imgclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 14:39:29 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/08 18:13:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_imgclr(t_img *img, void *mlx)
{
	if (img)
	{
		if (mlx && img->data)
			mlx_destroy_image(mlx, img->data);
		img->data = NULL;
		img->buff = NULL;
		img->bpp = 0;
		img->endian = -1;
		img->size_x = 0;
	}
}
