/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrbaselen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/06 19:08:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
