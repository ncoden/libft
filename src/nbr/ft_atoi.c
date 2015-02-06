/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 14:37:16 by ncoden            #+#    #+#             */
/*   Updated: 2015/02/03 11:58:08 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	t_bool	sign;
	int		len;

	i = 0;
	nbr = 0;
	sign = 1;
	len = ft_strlen(str);
	while (i < len)
	{
		if ((i == 0) && (str[0] == '-'))
			sign = 1;
		else if (i > 0 || str[i] != '+')
		{
			if ((str[i] < '0') || (str[i] > '9'))
				return (sign ? nbr : -nbr);
			nbr = (nbr * 10) + (str[i] - '0');
		}
		i++;
	}
	return (sign ? nbr : -nbr);
}
