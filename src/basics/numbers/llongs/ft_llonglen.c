/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llonglen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 17:36:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/27 23:40:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_llonglen(long long int nbr)
{
	size_t		len;

	len = 1;
	while (nbr > 9 || nbr < -9)
	{
		nbr /= 10;
		len++;
	}
	if (nbr < 0)
		len++;
	return (len);
}
