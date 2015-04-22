/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putllong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/29 15:29:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/22 18:09:16 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putllong(long long int nbr)
{
	if (nbr < 0)
	{
		ft_putchr('-');
		if (nbr <= -10)
			ft_putllong(-(nbr / 10));
		ft_putchr('0' - (nbr % 10));
	}
	else if (nbr < 10)
		ft_putchr('0' + nbr);
	else
	{
		ft_putllong(nbr / 10);
		ft_putchr('0' + (nbr % 10));
	}
}
