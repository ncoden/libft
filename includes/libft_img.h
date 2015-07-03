/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_img.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 10:56:26 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/03 08:09:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IMG_H
# define LIBFT_IMG_H

# include "libft_core.h"

typedef struct	s_img
{
	void	*data;
	char	*buff;
	int		bpp;
	t_bool	endian;
	int		size_x;
}				t_img;

t_img			*ft_imgnew(void *mlx, size_t x, size_t y);
t_bool			ft_imgset(t_img *img, void *mlx, size_t x, size_t y);
void			ft_imgclr(t_img *img, void *mlx);
void			ft_imgdel(t_img *img, void *mlx);

#endif
