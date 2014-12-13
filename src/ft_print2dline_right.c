/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2dline_right.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 15:42:09 by ncoden            #+#    #+#             */
/*   Updated: 2014/12/09 00:35:56 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline void		print_pixel(t_img *img, int x, int y, int color)
{
	img->buff[(img->size_x * y) + 4 * x + (img->endian ? 3 : 0)] =
		(color & 0x000000FF) >> 000;
	img->buff[(img->size_x * y) + 4 * x + (img->endian ? 2 : 1)] =
		(color & 0x0000FF00) >> 010;
	img->buff[(img->size_x * y) + 4 * x + (img->endian ? 1 : 2)] =
		(color & 0x00FF0000) >> 020;
}

inline void				ft_print2dline_octant1(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.x - line->from.x;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (++x > line->to.x)
			break ;
		if ((diff -= 2 * (line->to.y - line->from.y)) < 0)
		{
			++y;
			diff += 2 * (line->to.x - line->from.x);
		}
	}
}

inline void				ft_print2dline_octant2(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.y - line->from.y;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (++y > line->to.y)
			break ;
		if ((diff -= 2 * (line->to.x - line->from.x)) < 0)
		{
			++x;
			diff += 2 * (line->to.y - line->from.y);
		}
	}
}

inline void				ft_print2dline_octant8(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.x - line->from.x;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (++x > line->to.x)
			break ;
		if ((diff += 2 * (line->to.y - line->from.y)) < 0)
		{
			--y;
			diff += 2 * (line->to.x - line->from.x);
		}
	}
}

inline void				ft_print2dline_octant7(t_2denv *e, t_2dline *line)
{
	int			diff;
	int			x;
	int			y;

	diff = line->to.y - line->from.y;
	x = line->from.x;
	y = line->from.y;
	while (1)
	{
		print_pixel(&e->img, x, y, line->color);
		if (--y < line->to.y)
			break ;
		if ((diff += 2 * (line->to.x - line->from.x)) > 0)
		{
			++x;
			diff += 2 * (line->to.y - line->from.y);
		}
	}
}
