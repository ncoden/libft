/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/29 15:29:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/04 20:06:42 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void			ft_putllong(long long int nbr)
{
	if (nbr == LLONG_MIN)
	{
		ft_putchar('-');
		ft_putllong(-(LLONG_MIN / 10));
		ft_putchar('0' - LLONG_MIN % 10);
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
			ft_putllong(nbr / 10);
			ft_putchar('0' + (nbr % 10));
		}
	}
}
