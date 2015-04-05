/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 13:13:41 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbrbase(int nbr, char base)
{
	if (base > 1 && base < 10)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbrbase(-(nbr / base), base);
			ft_putchar('0' - (nbr % base));
		}
		else if (nbr < base)
			ft_putchar('0' + nbr);
		else
		{
			ft_putnbrbase(nbr / base, base);
			ft_putchar('0' + nbr % base);
		}
	}
	else if (base == 1)
		ft_putnchar('1', nbr);
}
