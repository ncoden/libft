/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putullongdigits.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/26 16:59:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

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

void			ft_putullongdigits(unsigned long long int nbr,
					const char *digits)
{
	if (digits)
		put_nbr_recursive(nbr, digits, ft_strlen(digits));
}
