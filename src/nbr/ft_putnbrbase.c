/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 20:01:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static void		put_nbr_recursive(unsigned int nbr, char *base,
						size_t base_size)
{
	if (nbr < base_size)
		ft_putchar(base[nbr]);
	else
	{
		put_nbr_recursive(nbr / base_size, base, base_size);
		ft_putchar(base[nbr % base_size]);
	}
}

void			ft_putnbrbase(int nbr, char *base)
{
	size_t len;

	if (base)
	{
		len = ft_strlen(base);
		if (nbr < 0)
			ft_putchar('-');
		if (nbr == INT_MIN)
		{
			put_nbr_recursive(INT_MIN / len, base, len);
			ft_putchar('0' - INT_MIN % 10);
		}
		else
		{
			if (nbr < 0)
				nbr = -nbr;
			put_nbr_recursive((unsigned int)nbr, base, len);
		}
	}
}
