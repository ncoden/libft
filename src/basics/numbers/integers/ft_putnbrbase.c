/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/12 21:12:57 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/chars.h"
#include "libft/utils/math.h"

static inline void	print_digit(unsigned char digit)
{
	ft_putchr(
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		[digit]);
}

static void			print_positive_base(int nbr, int base)
{
	int			v;
	int			r;

	r = nbr % base;
	v = nbr / base;
	if (v != 0)
		print_positive_base(v, base);
	print_digit(ABS(r));
}

static void			print_negative_base(int nbr, int base)
{
	int			r;
	int			v;

	r = nbr % base;
	v = nbr / base + (r < 0);
	if (v != 0)
		print_negative_base(v, base);
	r = ((r < 0) ? r + ABS(base) : r) + '0';
	print_digit(r);
}

void				ft_putnbrbase(int nbr, int base)
{
	if (base >= -62 && base <= 62)
	{
		if (base < -1)
			print_negative_base(nbr, base);
		else if (base > 0)
		{
			if (nbr < 0)
				ft_putchr('-');
			if (base == 1)
				ft_putnchr('1', ABS(nbr));
			else
				print_positive_base(nbr, base);
		}
	}
}
