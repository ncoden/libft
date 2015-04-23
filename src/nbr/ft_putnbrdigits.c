/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrdigits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 12:05:23 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void		put_nbr_recursive(unsigned int nbr, const char *digits,
						size_t digits_size)
{
	if (nbr < digits_size)
		ft_putchr(digits[nbr]);
	else
	{
		put_nbr_recursive(nbr / digits_size, digits, digits_size);
		ft_putchr(digits[nbr % digits_size]);
	}
}

void			ft_putnbrdigits(int nbr, const char *digits)
{
	size_t len;

	if (digits)
	{
		len = ft_strlen(digits);
		if (nbr < 0)
			ft_putchr('-');
		if (nbr == INT_MIN)
		{
			put_nbr_recursive(INT_MIN / len, digits, len);
			ft_putchr('0' - INT_MIN % 10);
		}
		else
		{
			if (nbr < 0)
				nbr = -nbr;
			put_nbr_recursive((unsigned int)nbr, digits, len);
		}
	}
}
