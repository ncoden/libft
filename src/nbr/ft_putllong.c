/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/29 15:29:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 13:05:30 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putllong(long long int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-(nbr / 10));
		ft_putchar('0' - (nbr % 10));
	}
	else if (nbr < 10)
		ft_putchar('0' + nbr);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar('0' + (nbr % 10));
	}
}
