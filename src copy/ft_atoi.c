/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/04 14:37:16 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/06 12:55:13 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_return_negative(int number, int is_negative)
{
	if (is_negative == 1)
		number = (-number);
	return (number);
}

int			ft_atoi(const char *str)
{
	int i;
	int size;
	int is_negative;
	int number;

	i = 0;
	size = ft_strlen(str);
	is_negative = 0;
	number = 0;
	while (i < size)
	{
		if ((i == 0) && (str[0] == '-'))
			is_negative = 1;
		else if (str[i] > 32 && (i > 0 || str[i] != '+'))
		{
			if ((str[i] < '0') || (str[i] > '9'))
				return (ft_return_negative(number, is_negative));
			number = (number * 10) + (str[i] - '0');
		}
		i++;
	}
	return (ft_return_negative(number, is_negative));
}
