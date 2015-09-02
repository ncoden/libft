/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullonglen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 17:36:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:45:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_ullonglen(unsigned long long int nbr)
{
	size_t		len;

	len = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
