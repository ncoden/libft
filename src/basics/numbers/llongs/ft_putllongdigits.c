/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllongdigits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:41:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <limits.h>
#include "libft/basics/chars.h"
#include "libft/basics/strings.h"

static void		put_nbr_recursive(unsigned long long int nbr,
					const char *digits, size_t digits_size)
{
	if (nbr < digits_size)
		ft_putchr(digits[nbr]);
	else
	{
		put_nbr_recursive(nbr / digits_size, digits, digits_size);
		ft_putchr(digits[nbr % digits_size]);
	}
}

void			ft_putllongdigits(long long int nbr, const char *digits)
{
	size_t len;

	if (digits)
	{
		len = ft_strlen(digits);
		if (nbr < 0)
			ft_putchr('-');
		if (nbr == LLONG_MIN)
		{
			put_nbr_recursive(LLONG_MIN / len, digits, len);
			ft_putchr('0' - LLONG_MIN % 10);
		}
		else
		{
			if (nbr < 0)
				nbr = -nbr;
			put_nbr_recursive((unsigned long long int)nbr, digits, len);
		}
	}
}
