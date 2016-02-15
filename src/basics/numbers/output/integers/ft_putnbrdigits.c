/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrdigits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/07 21:28:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/basics/chars.h"
#include "libft/basics/strings.h"
#include "libft/basics/maths.h"

static void		print_next_digit(unsigned int nbr, size_t base,
					const char *digits)
{
	if (nbr >= base)
		print_next_digit(nbr / base, base, digits);
	ft_putchr(digits[nbr % base]);
}

void			ft_putnbrdigits(int nbr, const char *digits)
{
	if (nbr < 0)
		ft_putchr('-');
	print_next_digit(ABS(nbr), ft_strlen(digits), digits);
}
