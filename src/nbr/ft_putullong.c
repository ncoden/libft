/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putullong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/29 15:29:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 14:03:53 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putullong(unsigned long long int nbr)
{
	if (nbr < 10)
		ft_putchr('0' + nbr);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchr('0' + (nbr % 10));
	}
}
