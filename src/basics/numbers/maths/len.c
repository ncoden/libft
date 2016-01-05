/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2016/01/05 17:41:05 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_nbrlen(int nbr)
{
	unsigned int	len;

	len = (nbr < 0) ? 2 : 1;
	while (nbr < -9 || nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

unsigned int	ft_llonglen(long long nbr)
{
	unsigned int	len;

	len = (nbr < 0) ? 2 : 1;
	while (nbr < -9 || nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

unsigned int	ft_ullonglen(unsigned long long nbr)
{
	unsigned int	len;

	len = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

unsigned int	ft_ptrlen(size_t nbr)
{
	unsigned int	len;

	len = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
