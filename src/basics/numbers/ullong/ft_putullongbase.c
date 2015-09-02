/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putullongbase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:43:34 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/chars.h"

void			ft_putullongbase(unsigned long long int nbr, unsigned char base)
{
	if (base == 1)
		ft_putnchr('1', nbr);
	else if (base < 10)
	{
		if (nbr < base)
			ft_putchr('0' + nbr);
		else
		{
			ft_putullongbase(nbr / base, base);
			ft_putchr('0' + nbr % base);
		}
	}
}
