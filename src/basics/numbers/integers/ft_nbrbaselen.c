/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrbaselen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:32:55 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_nbrbaselen(int nbr, int base)
{
	size_t		len;

	len = 1;
	while (nbr >= base || nbr <= -base)
	{
		nbr /= base;
		len++;
	}
	if (nbr < 0)
		len++;
	return (len);
}
