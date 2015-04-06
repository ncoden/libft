/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullonglen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 17:36:09 by ncoden            #+#    #+#             */
/*   Updated: 2015/04/05 14:04:33 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
