/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:41:58 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/22 16:14:49 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchr('-');
		if (nbr <= -10)
			ft_putnbr(-(nbr / 10));
		ft_putchr('0' - (nbr % 10));
	}
	else if (nbr < 10)
		ft_putchr('0' + nbr);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchr('0' + (nbr % 10));
	}
}
