/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/29 15:29:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/01 07:23:01 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void			ft_putlong(long int nbr)
{
	if (nbr == LONG_MIN)
	{
		ft_putchar('-');
		ft_putllong(-(LONG_MIN / 10));
		ft_putchar('0' - LONG_MIN % 10);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr <= 9)
			ft_putchar('0' + nbr);
		else
		{
			ft_putlong(nbr / 10);
			ft_putchar('0' + (nbr % 10));
		}
	}
}
