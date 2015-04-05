/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptrdigits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 12:05:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		put_nbr_recursive(size_t nbr, const char *digits,
						size_t base_size)
{
	if (nbr < base_size)
		ft_putchr(digits[nbr]);
	else
	{
		put_nbr_recursive(nbr / base_size, digits, base_size);
		ft_putchr(digits[nbr % base_size]);
	}
}

void			ft_putptrdigits(size_t nbr, const char *digits)
{
	if (digits)
		put_nbr_recursive(nbr, digits, ft_strlen(digits));
}
