/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllongbase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 19:14:17 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/22 18:09:35 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putllongbase(long long int nbr, char base)
{
	if (base > 1 && base < 10)
	{
		if (nbr < 0)
		{
			ft_putchr('-');
			if (nbr <= -(base))
				ft_putllongbase(-(nbr / base), base);
			ft_putchr('0' - (nbr % base));
		}
		else if (nbr < base)
			ft_putchr('0' + nbr);
		else
		{
			ft_putllongbase(nbr / base, base);
			ft_putchr('0' + nbr % base);
		}
	}
	else if (base == 1)
		ft_putnchr('1', nbr);
}