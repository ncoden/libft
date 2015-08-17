/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llongbaselen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 10:06:28 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_llongbaselen(long long int nbr, int base)
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
