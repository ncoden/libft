/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullongbaselen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:39:05 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/07 11:35:26 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft/utils/math.h"

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
