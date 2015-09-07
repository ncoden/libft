/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llonglen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 17:36:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/06 19:09:15 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
