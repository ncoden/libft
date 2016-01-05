/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baselen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2016/01/05 18:04:07 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/utils/math.h"

unsigned int	ft_nbrbaselen(int nbr, int base)
{
	unsigned int	len;

	len = (nbr < 0) ? 2 : 1;
	while (ABS(nbr) > ABS(base))
	{
		nbr /= base;
		len++;
	}
	return (len);
}

unsigned int	ft_llongbaselen(long long nbr, int base)
{
	unsigned int	len;

	len = (nbr < 0) ? 2 : 1;
	while (ABS(nbr) > ABS(base))
	{
		nbr /= base;
		len++;
	}
	return (len);
}

unsigned int	ft_ullongbaselen(unsigned long long nbr, int base)
{
	unsigned int	len;

	len = 1;
	while (nbr > (unsigned long long)ABS(base))
	{
		nbr /= base;
		len++;
	}
	return (len);
}

unsigned int	ft_sizebaselen(size_t nbr, int base)
{
	unsigned int	len;

	len = 1;
	while (nbr > (size_t)ABS(base))
	{
		nbr /= base;
		len++;
	}
	return (len);
}
