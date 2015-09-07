/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:05:56 by ncoden            #+#    #+#             */
/*   Updated: 2015/09/04 13:56:40 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/basics/strings.h"

static int	ft_itoa_recursive(char **str, unsigned int n, int isize, int space)
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
		(*str)[i] = '0' + (n % 10);
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
	else
	{
		ft_itoa_recursive(&str, -n, 0, 1);
		str[0] = '-';
	}
	return (str);
}
