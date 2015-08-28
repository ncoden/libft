/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putullong.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/29 15:29:04 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:43:25 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/chars.h"

void			ft_putullong(unsigned long long int nbr)
{
	if (nbr < 10)
		ft_putchr('0' + nbr);
	else
	{
		ft_putullong(nbr / 10);
		ft_putchr('0' + (nbr % 10));
	}
}
