/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullongbaselen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:45:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_ullongbaselen(unsigned long long int nbr, unsigned int base)
{
	size_t		len;

	len = 1;
	while (nbr >= base)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
