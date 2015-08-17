/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:05:56 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 13:59:11 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_recursive(char **str, int n, int isize, int space)
{
	int		i;

	if (n == 0 && isize > 0)
	{
		*str = ft_strnew(isize + space);
		if (*str == NULL)
			return (-1);
		return (space);
	}
	i = ft_itoa_recursive(str, (n / 10), (isize + 1), space);
	if (i != -1)
	{
		(*str)[i] = '0' + (n - (n / 10 * 10));
		return (i + 1);
	}
	else
		return (-1);
}

char		*ft_itoa(int n)
{
	char	*str;

	if (n >= 0)
		ft_itoa_recursive(&str, n, 0, 0);
	else if (n == -2147483648)
	{
		ft_itoa_recursive(&str, 147483648, 0, 2);
		str[0] = '-';
		str[1] = '2';
	}
	else
	{
		ft_itoa_recursive(&str, n * (-1), 0, 1);
		str[0] = '-';
	}
	return (str);
}
